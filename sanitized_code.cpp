// Visual studio specific, enables use of scanf
#pragma warning(disable : 4996)

#include <windows.h>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <ctime>

using namespace std;

typedef unsigned int uint;

/* emptyFunction1
 * Description: does nothing
 * Precondition: none
 * Postcondition: none
 */
void emptyFunction1(void) {
  return;
}

/* emptyFunction2
 * Description: does nothing
 * Precondition: none
 * Postcondition: none
 */
void emptyFunction2(void) {
  return;
}

/* forceSleep
 * Description: calls sleep function to delay the program by
 *   a given amount of milliseconds
 * Precondition: int given
 * Postcondition: program delayed by specified # of milliseconds
 */
void forceSleep(int milliseconds) {
  Sleep(milliseconds);
  return;
}

/* potentiallyShutDownOS
 * Description: the "explosion" of the bomb, originally shut down OS
 * Precondition: int passed to parameters
 * Postcondition: shuts down OS
 */
void potentiallyShutDownOS(int cashionID) {
  printf("\nLevel %d: BOOM!\n", cashionID);
  puts("Bomb exploded!");
  printf("Shutting down...");
  forceSleep(1000);
  //system("C:\\WINDOWS\\System32\\shutdown /s /t 0");
  // WARNING: Subroutine does not return
  //_exit(1);s
}

/* levelTransition
 * Description: transition between game levels
 * Precondition: current level passed as int
 * Postcondition: current level printed to screen
 */
void levelTransition(int cashionID) {
  puts("-----------");
  printf("  LEVEL %d \n", cashionID);
  puts("-----------");
  //malloc(cashionID);
  return;
}

/* memoryBomb
 * Description: allocated 1000 bytes of memory, disabled
 * Precondition: none
 * Postcondition: nothing
 */
void memoryBomb(void) {
  //malloc(1000);
  return;
}

/* RabbitholeEnd
 * Description: the end of the rabbit hole of functions
 * Precondition: none
 * Postcondition: prints taunt to screen
 */
void RabbitholeEnd(void) {
  printf("You have reached the bottom of the rabbit hole...Why did you enter?!?!");
  return;
}

/* Rabbithole3
 * Description: third part of rabbit hole, originally allocated 1000 bytes of memory
 * Precondition: none
 * Postcondition: enter end of rabbit hole
 */
void Rabbithole3(void) {
  RabbitholeEnd();
  //malloc(1000);
  return;
}

/* Rabbithole2
 * Description: second part of rabbit hole, originally allocated 1000 bytes of memory
 * Precondition: none
 * Postcondition: enter 3rd part of rabbit hole
 */
void Rabbithole2(void) {
  memoryBomb();
  Rabbithole3();
  return;
}

/* Rabbithole
 * Description: first part of rabbit hole
 * Precondition: none
 * Postcondition: enter 2nd part of rabbit hole
 */
void Rabbithole(void) {
  emptyFunction1();
  emptyFunction2();
  Rabbithole2();
  return;
}

/* exponentialID
 * Description: calculates number ^2
 * Precondition: two integers passed as param
 * Postcondition: return id^2
 */
int exponentialID(int processListSize, int id) {
  return id * id;
}

/* endlessHorse
 * Description: originally allocated random memory and opened "endless.horse"
 * Precondition: none
 * Postcondition: nothing
 */
void endlessHorse(void) {
  //malloc(500);
  //system("start chrome http://endless.horse/");
  //system("start microsoft-edge:http://endless.horse/");
  return;
}

/* corndogAndOpenThings
 * Description: prints "What is going on?!?!" many times and opens
 *   hundreds of windows-specific applications
 * Precondition: none
 * Postcondition: nothing
 */
void corndogAndOpenThings(void) {
  int j;
  int i;

  for (i = 0; i < 500; i = i + 1) {
    printf("What is going on?!?!");
  }
  //malloc(200);
  for (j = 0; j < 25; j = j + 1) {
    //system("start chrome http://corndog.io/");
    //system("start microsoft-edge:http://corndog.io/");
    //system("start notepad");
    //system("start Paint");
    //system("start Photos");
    //system("start OneNote");
    //system("start Outlook");
  }
  return;
}

/* openCornDog
 * Description: starts next level and opens corndogAndOpenThings
 * Precondition: none
 * Postcondition: next level output to screen
 */
void openCorndog(int cashionID) {
  printf("\nLevel %d: Passed\n\n", cashionID);
  corndogAndOpenThings();
  return;
}

/* memoryBomb
 * Description: another memory bomb that is unused in the program
 * Precondition: none
 * Postcondition: prints out a win message
 */
int __cdecl memoryBomb(char csi2334students, double wowza) {
  void *returnVal;
  double unused1;
  char unused2;
  int *unused3;
  int i;

  //malloc(5000);
  for (i = 0; i < 10; i = i + 1) {
    //malloc(1000);
  }
  printf("If you see this, you win!");
  //returnVal = malloc(100);
  //return (int)returnVal;
  return 100;
}

/* stackOverflow
 * Description: the "reward" for winning, originally caused a stack overflow
 * Precondition: none
 * Postcondition: prints out a repeated message to screen
 */
void StackOverflow(void) {
  int e;
  int i;

  for (i = 0; i < 25; i = i + 1) {
    //system("start for %i in (1, 1, 10) do start echo YOU_MADE_A_MISTAKE");
    printf("You\'ve made a mistake...");
  }
  //StackOverflow();
  return;
}

// The "Guessing game", disabled malicious code
void add_Z(void) {
  int userChar;
  size_t stringLength;
  char ABCDEFG;
  char *thing;
  int i;

  // ABCDEFG and thing unused

  // Guessing Game
  levelTransition(1);
  puts("I\'m thinking of a word...Guess the word correctly to move on.\n");
  i = 0;
  while (true) {
    // Does nothing
    stringLength = strlen("Penland");
    // Does nothing (?)
    if (stringLength <= (uint)i) break;
    stringLength = exponentialID(i, i);
    // Remove
    //malloc(stringLength);
    // Read in a single character from input
    userChar = getchar();
    if ((char)userChar != "Penland"[i]) {
      potentiallyShutDownOS(1);
    }
    i = i + 1;
  }
  openCorndog(1);
  return;
}

// The "Fibonacci number game", disabled malicious code
void subtract_Z(void) {
  int userInput;
  int valDown;
  int i;
  int assignOne;
  int assignZero;
  int zero;

  // Fibonacci number game
  levelTransition(2);
  puts("You got lucky...but, do you know the first 10 fibonacci numbers?");
  forceSleep(2000);
  puts("If so, input them one at a time:\n");
  valDown = 0;
  assignZero = 0;
  assignOne = 1;
  // Loop to enter fib. numbers
  for (i = 0; i < 10; i = i + 1) {
    scanf("%d", &userInput);
    if (assignOne != userInput) {
      potentiallyShutDownOS(2);
    }
    // Nonsense
    emptyFunction1();
    emptyFunction2();
    zero = assignZero;
    valDown = assignZero;
    assignZero = assignOne;
    assignOne = assignOne + zero;
  }
  openCorndog(2);
  return;
}

// Another "Guessing game", disabled malicious code
void multiply_Z(void) {
  int userChar;
  char commandMaybe;
  int unused1;
  char unused2;
  char unused3;
  char answerChar;

  // Nonsense
  levelTransition(3);
  puts("Enter your modulus based string, one at a time, to continue");
  forceSleep(2000);
  printf("Y\'alls starts with \'%c\'\n\n", 0x6a);
  answerChar = 'j';
  while (true) {
    // Nonsense
    getchar();
    userChar = getchar();
    if ((char)userChar != answerChar) {
      potentiallyShutDownOS(3);
    }
    if (answerChar == 'u') break;
    if ('s' < answerChar) {
      answerChar = answerChar + -0x1a;
    }
    answerChar = answerChar + '\a';
  }
  openCorndog(3);
  return;
}

// The "Math game", disabled malicious code
void divide_Z(void) {
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

  seedWithTime = time((time_t *)&zero);
  srand((uint)seedWithTime);
  levelTransition(4);
  puts("Lets do some math :)");
  forceSleep(1000);
  puts("Answer these three simple problems to move on\n");
  // Start of questions (3 in total)
  for (i = 0; i < 4; i = i + 1) {
    randomValue = rand();
    numBetween_1_and_100 = randomValue % 100 + 1;
    randomValue = rand();
    randomValue2 = randomValue % 100 + 1;
    // Remove this
    //malloc(i * 100);
    // Question 1
    if (i == 1) {
      forceSleep(2000);
      printf("What is %d + %d?\n\n", numBetween_1_and_100, randomValue2);
      Q1_answer = randomValue2 + numBetween_1_and_100;
      scanf("%d", &Q1_userAnswer);
      if (Q1_answer != Q1_userAnswer) {
        potentiallyShutDownOS(4);
      }
      puts("CORRECT!");
      // Remove these
      endlessHorse();
      endlessHorse();
      endlessHorse();
    }
    // Question 2
    if (i == 2) {
      forceSleep(2000);
      printf("What is %d - %d?\n\n", numBetween_1_and_100, randomValue2);
      // Remove this
     // malloc(randomValue2 + numBetween_1_and_100);
      Q2_answer = numBetween_1_and_100 - randomValue2;
      scanf("%d", &Q2_userAnswer);
      if (Q2_answer != Q2_userAnswer) {
        potentiallyShutDownOS(4);
      }
      puts("CORRECT!");
    }
    // Question 3
    if (i == 3) {
      forceSleep(2000);
      printf("What is %d * %d?\n\n", numBetween_1_and_100, randomValue2);
      // malloc(numBetween_1_and_100 * randomValue2);
      Q3_answer = numBetween_1_and_100 * randomValue2;
      scanf("%d", &Q3_userAnswer);
      if (Q3_answer != Q3_userAnswer) {
        potentiallyShutDownOS(4);
      }
      puts("CORRECT!");
    }
  }
  openCorndog(4);
  return;
}

// "Guess the number!", disabled malicious code
void modulus_Z(void) {
  int randomValue;
  time_t currTime;
  int userAnswer;
  time_t zero;
  int randomValue2;
  int tries;

  levelTransition(5);
  currTime = time((time_t *)&zero);
  srand((uint)currTime);
  randomValue = rand();
  randomValue2 = randomValue % 100 + 1;
  userAnswer = -1;
  tries = 1;
  // Guessing Game
  puts("I have generated a number between 1 and 100. Try to guess it!");
  forceSleep(2000);
  puts("You have 6 attempts, or the bomb explodes.\n");
  while (randomValue2 != userAnswer) {
    // Lost the game
    if (tries == 7) {
      potentiallyShutDownOS(5);
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
  openCorndog(5);
  return;
}

// "Enter the numbers 1-100", disabled malicious code
void percent_Z(void) {
  int endOfLoop;
  int i;

  levelTransition(6);
  puts("I\'m just wasting your time at this point...enter the numbers 1-100.\n");
  i = 1;
  endOfLoop = 100;
  while (i != endOfLoop) {
    scanf("%d", &endOfLoop);
    Rabbithole();
    if (i != endOfLoop) {
      potentiallyShutDownOS(6);
    }
    i = i + 1;
  }
  openCorndog(6);
  return;
}

// Starts the games, disabled malicious code
void BombPuzzleIntro(void) {
  endlessHorse();
  puts("Welcome to the Bomb Puzzle!");
  forceSleep(3000);
  puts("Solve each level to win!");
  forceSleep(3000);
  puts("But fail any level and the bomb will explode...Along with other consequences!\n");
  forceSleep(3000);
  puts("Ready?");
  forceSleep(1000);
  puts("Let\'s start.\n");
  forceSleep(2000);
  return;
}

// The reward for the "winner", starts stack overflow, disabled malicious code
void startStackOverflow(void) {
  puts("\nThe bomb has been diffused!");
  forceSleep(1000);
  printf("Congratulations!");
  forceSleep(2000);
  StackOverflow();
  return;
}

int main(int _Argc, char **_Argv, char **_Env) {
  int count;
  int i;

  //___main();
  i = 0;
  BombPuzzleIntro();
  memoryBomb();
  // Remove this
  for (; i < 20; i = i + 1) {
    //system("start chrome https://www.youtube.com/watch?v=s8MDNFaGfT4");
    //system("start microsoft-edge:https://www.youtube.com/watch?v=s8MDNFaGfT4");
    // Remove this later
    //malloc(100);
  }
  add_Z();
  subtract_Z();
  multiply_Z();
  divide_Z();
  modulus_Z();
  percent_Z();
  startStackOverflow();
  return 0;
}