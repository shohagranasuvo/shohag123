from selenium import webdriver
from selenium.webdriver.edge.service import Service as EdgeService
from selenium.webdriver.common.by import By
from selenium.webdriver.common.keys import Keys
import time

# Path to your msedgedriver executable
msedgedriver_path = 'C:/Users/shoha/PycharmProjects/Automaticsendmsgtothenewsender/msedgedriver.exe'

# Initialize WebDriver for Edge
service = EdgeService(executable_path=msedgedriver_path)
driver = webdriver.Edge(service=service)
driver.get('https://web.whatsapp.com')

# Wait for the user to scan the QR code and log in to WhatsApp Web
print("Please scan the QR code to log in to WhatsApp Web.")
time.sleep(20)

def check_for_new_messages():
    try:
        # Locate chat list items
        chat_list_items = driver.find_elements(By.CSS_SELECTOR, "div[aria-label='Chat list'] div[role='row']")

        for chat_item in chat_list_items:
            # Check if the chat item has an unread message indicator
            unread_indicator = chat_item.find_elements(By.CSS_SELECTOR, "span[aria-label*='unread message']")
            if unread_indicator:
                # Click on the chat item to open the chat
                chat_item.click()
                time.sleep(2)  # Wait for chat to open

                # Get the chat input box and send a message
                message_box = driver.find_element(By.XPATH, "//div[@contenteditable='true'][@data-tab='10']")
                message_box.click()
                message_box.send_keys("Hi, how are you?")
                message_box.send_keys(Keys.RETURN)

                print("Sent automated response.")
                time.sleep(2)  # Wait a bit before checking again
                break  # Only respond to one new message per check to avoid spamming

    except Exception as e:
        print(f"An error occurred: {e}")

# Main loop to keep checking for new messages
while True:
    check_for_new_messages()
    time.sleep(10)  # Check every 10 seconds
