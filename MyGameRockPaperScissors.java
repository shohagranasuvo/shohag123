import java.util.*;

public class MyGameRockPaperScissors {
    static {
       
            System.out.println("Now it's time for a game \nHere is a 5-round game of RockPaperScissors between you and me \nLet's start \n \n \n");

    }

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        Random rn = new Random();
        int test = 5;
        String firstChoice;
        int choice;
        int myWin = 0, computerWin = 0;
        int count = 1;

        while (test != 0) {

            System.out.println("Round Number " + count);
            count++;

            System.out.println("\nChoice an option \n 1.Rock \n 2.Paper \n 3.Scissors\n");
            firstChoice = sc.nextLine();
            char finalChoice = firstChoice.charAt(0);

            if (firstChoice.length() == 1) {
                if (Character.isDigit(finalChoice)) {
                    choice = Character.getNumericValue(finalChoice);

                    if (choice >= 1 && choice <= 3) {
                        switch (choice) {
                            case 1 -> System.out.println("\nYour choice Rock");
                            case 2 -> System.out.println("\nYour choice Paper");
                            case 3 -> System.out.println("\nYour choice Scissors");
                        }

                        int computer = rn.nextInt(3) + 1;

                        switch (computer) {
                            case 1 -> System.out.println("\nMy choice Rock\n");
                            case 2 -> System.out.println("\nMy choice Paper\n");
                            case 3 -> System.out.println("\nMy choice Scissors\n");
                        }

                        if (choice == computer) {
                            System.out.println("\nIt's a tie. So, round again \n");
                            test++;
                            count--;

                        } else if ((choice == 1 && computer == 3) || (choice == 2 && computer == 1) || (choice == 3 && computer == 2)) {
                            System.out.println("\nYou won the round\n");
                            myWin++;

                        } else {
                            System.out.println("\nI won the round\n");
                            computerWin++;
                        }

                    } else {
                        System.out.println("\nIt's a digit but you need to enter between 1 to 3\n");
                        test++;
                        count--;
                    }

                } else {
                    System.out.println("\nYour input is invalid because it's not a digit.\n");
                    test++;
                    count--;
                }

            } else {
                System.out.println("\nInvalid. Input length is too long\n");
                test++;
                count--;
            }

            test--;

            int needWin = 3 - myWin;
            if (needWin == 2 && test >= needWin) {
                System.out.print("You win " + myWin + " time. I won " + computerWin + " time");
                if (computerWin > 1) {
                    System.out.println("s \n");
                } else {
                    System.out.println("\n");
                }
                System.out.print("For win the match you need to win " + needWin + " time");

                if (needWin > 1) {
                    System.out.println("s \n");
                } else {
                    System.out.println("\n");
                }

            } else if (needWin == 1 && test >= needWin) {
                System.out.print("You win " + myWin + " time. I won " + computerWin + " time");
                if (computerWin > 1) {
                    System.out.println("s \n");
                } else {
                    System.out.println("\n");
                }
                System.out.println("For win the match you need to win " + needWin + " time\n");

            } else if (needWin <= 0) {
                System.out.println("You are already win the game. Because you win " + myWin + " Times \n");

            } else if (test < needWin) {
                System.out.print("You win " + myWin + " time");
                if (myWin > 1) {
                    System.out.println("s \n");
                } else {
                    System.out.println("\n");
                }
                System.out.print("I won " + computerWin + " time");
                if (computerWin > 1) {
                    System.out.println("s \n");
                } else {
                    System.out.println("\n");
                }
                System.out.print("You never can win the game. Because you need " + needWin + " Times win, but round has " + test + " time");

                if (test > 1) {
                    System.out.println("s \n");
                } else {
                    System.out.println("\n");
                }
            }

        }

        if (myWin > computerWin && computerWin == 1) {
            System.out.println("\n\n FINAL RESULT:\n You win " + myWin + " Times\n" + "I win " + computerWin + " Time \n \n CONGRATULATION \n \n YOU ARE WINNER");

        } else if (myWin > computerWin && computerWin > 1) {
            System.out.println("\n\nFINAL RESULT:\nYou win " + myWin + " Times\nI win " + computerWin + " Times\n \n CONGRATULATION \n \n !!!YOU ARE WINNER!!!");

        } else {
            System.out.println("\n\n\nCONGRATULATE ME BECAUSE I'M THE WINNER!!!\n");
            if (myWin == 1) {
                System.out.println("You win " + myWin + " Time\n" + "I win " + computerWin + " Times");
            } else {
                System.out.println("You win " + myWin + " Times\nI win " + computerWin + " Times");
            }
        }

    }
}
