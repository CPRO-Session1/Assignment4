//Olivier Gabison - Hangman Game
//NOTE: I don't understand the error here as well?

#include <stdio.h>

/*
WORD TO GUESS: CHOCOLATE
NUMBER OF MAXIMUM ERRORS: 5
*/

int main(){

  int errors = 5;
  char answer = {'c','h','o','c','o','l','a','t','e','\0'};
  char guess = {'_','_','_','_','_','_','_','_','_','\0'};
  char incorrect[50];

  printIncorrectLetters();
  printRemainingLetters();
  printf("Please input your first guess.\n");
  char guess1;
  scanf("%c",&guess1);

  for(int i = 0; i < 9; i++){
    int x = 1; // If x = 1, guess is incorrect. if x = 0, guess is right
    if(guess1 == answer[i]){
      guess[i] = answer[i];
      x = 0;
    }
    if(x == 0){
      printf("You guessed incorrectly!\n");
      errors--;
      break;
    }
  }

  printIncorrectLetters();
  printRemainingLetters();
  printf("Please input your second guess.\n");

  char guess2;
  scanf("%c",&guess2);

  for(int i = 0; i < 9; i++){
    int x = 1;
    if(guess2 == answer[i]){
      guess[i] = answer[i];
      x = 0;
    }
    if(x == 0){
      printf("You guessed incorrectly");
      errors--;
      break;
    }
  }

  printIncorrectLetters();
  printRemainingLetters();
  printf("Please input your third guess.\n");

  char guess3;
  scanf("%c",&guess3);

  for(int i = 0; i < 9; i++){
    int x = 1;
    if(guess3 == answer[i]){
      guess[i] = answer[i];
      x = 0;
    }
    if(x == 0){
      printf("You guessed incorrectly!\n");
      errors--;
      break;
    }
  }

  printIncorrectLetters();
  printRemainingLetters();
  printf("Please input your fourth guess.\n");

  char guess4;
  scanf("%c",&guess4);

  for(int i = 0; i < 9; i++){
    int x = 1;
    if(guess4 == answer[i]){
      guess[i] = answer[i];
      x = 0;
    }
    if(x == 0){
      printf("You guessed incorrectly!\n");
      errors--;
      break;
    }
  }

  printIncorrectLetters();
  printRemainingLetters();
  printf("Please input your fifth guess.\n");

  char guess5;
  scanf("%c",&guess5);

  for(int i = 0; i < 9; i++){
    int x = 1;
    if(guess5 == answer[i]){
      guess[i] = answer[i];
      x = 0;
    }
    if(x == 0){
      printf("You guessed incorrectly!\n");
      errors--;
      break;
    }
  }

  if(errors < 1){
    printf("You lose!");
    exit();
  }

  printIncorrectLetters();
  printRemainingLetters();
  printf("Please input your sixth guess.\n");

  char guess6;
  scanf("%c",&guess6);

  for(int i = 0; i < 9; i++){
    int x = 1;
    if(guess6 == answer[i]){
      guess[i] = answer[i];
      x = 0;
    }
    if(x == 0){
      printf("You guessed incorrectly!\n");
      errors--;
      break;
    }
  }

  if(errors < 1){
    printf("You lose!");
    exit();
  }

  printIncorrectLetters();
  printRemainingLetters();
  printf("Please input your seventh guess.\n")

  char guess7;
  scanf("%c",&guess7);

  for(int i = 0; i < 9; i++){
    int x = 1;
    if(guess7 == answer[i]){
      guess[i] = answer[i];
      x = 0;
    }
    if(x == 0){
      printf("You guessed incorrectly!\n");
      errors--;
      break;
    }
  }


  if(errors < 1){
    printf("You lose!");
    exit();
  }

  printIncorrectLetters();
  printRemainingLetters();
  printf("Please input your eigth guess.\n");

  char guess8;
  scanf("%c",&guess8);

  for(int i = 0; i < 9; i++){
    int x = 1;
    if(guess8 == answer[i]){
      guess[i] = answer[i];
      x = 0;
    }
    if(x == 0){
      printf("You guessed incorrectly!\n");
      errors--;
      break;
    }
  }


  if(errors < 1){
    printf("You lose!");
    exit();
  }

  printIncorrectLetters();
  printRemainingLetters();
  printf("Please input your ninth guess.\n");

  char guess6;
  scanf("%c",&guess9);

  for(int i = 0; i < 9; i++){
    int x = 1;
    if(guess9 == answer[i]){
      guess[i] = answer[i];
      x = 0;
    }
    if(x == 0){
      printf("You guessed incorrectly!\n");
      errors--;
      break;
    }
  }


  if(errors < 1){
    printf("You lose!");
    exit();
  }

  printIncorrectLetters();
  printRemainingLetters();
  printf("Please input your tenth guess.\n");

  char guess10;
  scanf("%c",&guess10);

  for(int i = 0; i < 9; i++){
    int x = 1;
    if(guess10 == answer[i]){
      guess[i] = answer[i];
      x = 0;
    }
    if(x == 0){
      printf("You guessed incorrectly!\n");
      errors--;
      break;
    }
  }


  if(errors < 1){
    printf("You lose!");
    exit();
  }

  printIncorrectLetters();
  printRemainingLetters();
  printf("Please input your eleventh guess.\n");

  char guess11;
  scanf("%c",&guess11);

  for(int i = 0; i < 9; i++){
    int x = 1;
    if(guess11 == answer[i]){
      guess[i] = answer[i];
      x = 0;
    }
    if(x == 0){
      printf("You guessed incorrectly!\n");
      errors--;
      break;
    }
  }


  if(error < 1){
    printf("You lose!");
    exit();
  }

  printIncorrectLetters();
  printRemainingLetters();
  printf("Please input your twelfth guess.\n");

  char guess12;
  scanf("%c",&guess12);

  for(int i = 0; i < 9; i++){
    int x = 1;
    if(guess12 == answer[i]){
      guess[i] = answer[i];
      x = 0;
    }
    if(x == 0){
      printf("You guessed incorrectly!\n");
      errors--;
      break;
    }
  }


  void printRemainingLetters{
    for(int i = 0; i < 9; i++){
      printf("%c ", guess[i]);
    }
  }

  void printIncorrectLetters{
    printf("Incorrect Letters: \n");
    for(int i = 0; i < 50; i++){
      printf("%c, ",incorrect[i]);
    }
  }

  return 0;
}
