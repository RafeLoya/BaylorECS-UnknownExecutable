// Visual studio specific, enables use of scanf
#pragma warning(disable : 4996)

#include <windows.h>
#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <ctime>

using namespace std;

typedef unsigned int uint;

/* pause
 * Description: calls sleep function to delay the program by
 *   a given amount of milliseconds
 * Precondition: int given
 * Postcondition: program delayed by specified # of milliseconds
 */
void pause(int milliseconds) {
    Sleep(milliseconds);
    return;
}

/* bombExplosion
 * Description: the "explosion" of the bomb
 * Precondition: int passed to parameters
 * Postcondition: game ends
 */
void bombExplosion(int level) {
    printf("\nLevel %d: BOOM!\n", level);
    puts("Bomb exploded!");
    printf("Shutting down...\n");
    pause(1000);
    exit(0);
}

/* levelTransition
 * Description: transition between game levels
 * Precondition: current level passed as int
 * Postcondition: current level printed to screen
 */
void levelTransition(int level) {
    puts("-----------");
    printf("  LEVEL %d \n", level);
    puts("-----------");
    return;
}

/* exponent
 * Description: calculates number ^2
 * Precondition: two integers passed as param
 * Postcondition: return id^2
 */
int exponent(int processListSize, int id) {
    return id * id;
}

/* Levelpassed
 * Description: starts next level
 * Precondition: none
 * Postcondition: next level output to screen
 */
void levelPassed(int level) {
    printf("\nLevel %d: Passed\n\n", level);
    return;
}

/* WinScreen
 * Description: win screen for game
 * Precondition: none
 * Postcondition: prints out a win message
 */
void winScreen() {
    printf("If you see this, you win!\n\n");
    return;
}

// The "Guessing game"
void wordGuessingGame(void) {
    int userChar;
    size_t stringLength;
    int i;

    // Guessing Game
    levelTransition(1);
    puts("I\'m thinking of a word...Guess the word correctly to move on.\n");
    i = 0;
    while (true) {
        stringLength = strlen("Penland");
        if (stringLength <= (uint)i) break;
        stringLength = exponent(i, i);
        // Read in a single character from input
        userChar = getchar();
        if ((char)userChar != "Penland"[i]) {
            bombExplosion(1);
        }
        i = i + 1;
    }

    levelPassed(1);
    return;
}

// The "Fibonacci number game"
void fibonacciGame(void) {
    int userInput;
    int valDown;
    int i;
    int assignOne;
    int assignZero;
    int zero;

    // Fibonacci number game
    levelTransition(2);
    puts("You got lucky...but, do you know the first 10 fibonacci numbers?");
    pause(2000);
    puts("If so, input them one at a time:\n");
    valDown = 0;
    assignZero = 0;
    assignOne = 1;
    // Loop to enter fib. numbers
    for (i = 0; i < 10; i = i + 1) {
        scanf("%d", &userInput);
        if (assignOne != userInput) {
            bombExplosion(2);
        }
        // Nonsense
        zero = assignZero;
        valDown = assignZero;
        assignZero = assignOne;
        assignOne = assignOne + zero;
    }
    levelPassed(2);
    return;
}

// Modulus String Game, starts at 'j'
void modulusStringGame(void) {
    int userChar;
    char commandMaybe;
    char answerChar;

    levelTransition(3);
    puts("Enter your modulus based string, one at a time, to continue");
    pause(2000);
    printf("Y\'alls starts with \'%c\'\n\n", 0x6a);
    answerChar = 'j';
    while (true) {
        //userChar = getchar();
        std::cin >> userChar;
        if ((char)userChar != answerChar) {
            bombExplosion(3);
        }
        if (answerChar == 'u') break;
        if ('s' < answerChar) {
            answerChar = answerChar + -0x1a;
        }
        answerChar = answerChar + '\a';
    }
    levelPassed(3);
    return;
}

// The "Math game"
void mathQuizGame(void) {
    int randomValue;
    time_t seedWithTime;
    int Q3_userAnswer;
    int Q2_userAnswer;
    int Q1_userAnswer;
    time_t zero;
    int Q3_answer;
    int Q2_answer;
    int Q1_answer;
    int randomValue2;
    int numBetween_1_and_100;
    int i;

    seedWithTime = time((time_t*)&zero);
    srand((uint)seedWithTime);
    levelTransition(4);
    puts("Lets do some math :)");
    pause(1000);
    puts("Answer these three simple problems to move on\n");

    // Start of questions (3 in total)
    for (i = 0; i < 4; i = i + 1) {
        randomValue = rand();
        numBetween_1_and_100 = randomValue % 100 + 1;
        randomValue = rand();
        randomValue2 = randomValue % 100 + 1;
        // Question 1
        if (i == 1) {
            pause(2000);
            printf("What is %d + %d?\n\n", numBetween_1_and_100, randomValue2);
            Q1_answer = randomValue2 + numBetween_1_and_100;
            scanf("%d", &Q1_userAnswer);
            if (Q1_answer != Q1_userAnswer) {
                bombExplosion(4);
            }
            puts("CORRECT!\n");
        }
        // Question 2
        if (i == 2) {
            pause(2000);
            printf("What is %d - %d?\n\n", numBetween_1_and_100, randomValue2);
            Q2_answer = numBetween_1_and_100 - randomValue2;
            scanf("%d", &Q2_userAnswer);
            if (Q2_answer != Q2_userAnswer) {
                bombExplosion(4);
            }
            puts("CORRECT!\n");
        }
        // Question 3
        if (i == 3) {
            pause(2000);
            printf("What is %d * %d?\n\n", numBetween_1_and_100, randomValue2);
            Q3_answer = numBetween_1_and_100 * randomValue2;
            scanf("%d", &Q3_userAnswer);
            if (Q3_answer != Q3_userAnswer) {
                bombExplosion(4);
            }
            puts("CORRECT!\n");
        }
    }
    levelPassed(4);
    return;
}

// "Guess the number!"
void guessNumberGame(void) {
    int randomValue;
    time_t currTime;
    int userAnswer;
    time_t zero;
    int randomValue2;
    int tries;

    levelTransition(5);
    currTime = time((time_t*)&zero);
    srand((uint)currTime);
    randomValue = rand();
    randomValue2 = randomValue % 100 + 1;
    userAnswer = -1;
    tries = 1;
    // Guessing Game
    puts("I have generated a number between 1 and 100. Try to guess it!");
    pause(2000);
    puts("You have 6 attempts, or the bomb explodes.\n");
    while (randomValue2 != userAnswer) {
        // Lost the game
        if (tries == 7) {
            bombExplosion(5);
        }
        // Hint # 1
        if (tries == 3) {
            if (randomValue2 % 3 == 0) {
                puts("HINT: My number is divisible by 3...");
            }
            else {
                puts("HINT: My number is NOT divisible by 3...");
            }
        }
        else {
            // Hint #2
            if (tries == 5) {
                if ((randomValue2 & 1U) == 0) {
                    puts("HINT: My number is divisible by 2...");
                }
                else {
                    puts("HINT: My number is not divisible by 2...");
                }
            }
        }
        // Prompt for user response
        printf("Attempt %d: Make a guess:\n", tries);
        scanf("%d", &userAnswer);
        // Correct guess
        if (randomValue2 == userAnswer) {
            printf("Wow! You got it! %d is my number. It only took you %d guesses.\n", userAnswer, tries);
        }
        else {
            // Guess too high
            if (randomValue2 < userAnswer) {
                // Guess too low
                puts("Your number is too high...");
            }
            else {
                puts("Your number is too low...");
            }
        }
        // Increment number of tries
        tries = tries + 1;
    }
    levelPassed(5);
    return;
}

// "Enter the numbers 1-100", disabled malicious code
void enterNumbersGame(void) {
    int endOfLoop;
    int i;

    levelTransition(6);
    puts("I\'m just wasting your time at this point...enter the numbers 1-100.\n");
    i = 1;
    endOfLoop = 100;
    while (i != endOfLoop) {
        scanf("%d", &endOfLoop);
        if (i != endOfLoop) {
            bombExplosion(6);
        }
        i = i + 1;
    }
    levelPassed(6);
    return;
}

// Starts the games, disabled malicious code
void bombPuzzleIntro(void) {
    puts("Welcome to the Bomb Puzzle!");
    pause(3000);
    puts("Solve each level to win!");
    pause(3000);
    puts("But fail any level and the bomb will explode...Along with other consequences!\n");
    pause(3000);
    puts("Ready?");
    pause(1000);
    puts("Let\'s start.\n");
    pause(2000);
    return;
}

// The reward for the "winner", starts stack overflow, disabled malicious code
void bombDiffused(void) {
    puts("\nThe bomb has been diffused!");
    pause(1000);
    printf("Congratulations!");
    pause(2000);
    winScreen();
    return;
}

int main(int _Argc, char** _Argv, char** _Env) {
    bombPuzzleIntro();
    wordGuessingGame();
    fibonacciGame();
    modulusStringGame();
    mathQuizGame();
    guessNumberGame();
    enterNumbersGame();
    bombDiffused();
    return 0;
}
