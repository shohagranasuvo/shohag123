#include <iostream>
#include <conio.h>

using namespace std;

int main() {
  // Initialize the game variables
  int width = 20;
  int height = 15;
  int x = 10;
  int y = 10;
  char direction = 'd';
  int fruitX = rand() % width;
  int fruitY = rand() % height;

  // Create a 2D array to store the snake's body
  bool snake[width][height];
  for (int i = 0; i < width; i++) {
    for (int j = 0; j < height; j++) {
      snake[i][j] = false;
    }
  }

  // Add the head of the snake to the array
  snake[x][y] = true;

  // Start the game loop
  while (true) {
    // Clear the screen
    system("cls");

    // Draw the snake
    for (int i = 0; i < width; i++) {
      for (int j = 0; j < height; j++) {
        if (snake[i][j]) {
          cout << "X";
        } else {
          cout << " ";
        }
      }
      cout << endl;
    }

    // Move the snake
    switch (direction) {
      case 'w':
        y--;
        break;
      case 'a':
        x--;
        break;
      case 's':
        y++;
        break;
      case 'd':
        x++;
        break;
    }

    // Check if the snake has hit the wall
    if (x < 0 || x >= width || y < 0 || y >= height) {
      break;
    }

    // Check if the snake has eaten the fruit
    if (x == fruitX && y == fruitY) {
      // Generate a new fruit
      fruitX = rand() % width;
      fruitY = rand() % height;

      // Grow the snake
      snake[x][y] = true;
    } else {
      // Remove the tail of the snake
      snake[x - 1][y] = false;
    }

    // Get the user input
    char ch = getch();

    // Change the direction of the snake based on the user input
    if (ch == 'w') {
      direction = 'w';
    } else if (ch == 'a') {
      direction = 'a';
    } else if (ch == 's') {
      direction = 's';
    } else if (ch == 'd') {
      direction = 'd';
    }
  }

  // Game over
  cout << "Game over!" << endl;

  return 0;
}
