//Olivier Gabison - Tells you the frequency of letters in a string.
//NOTE: I don't understand the error it's giving me.

#import <stdio.h>

int main(){

  printf("Please input a word\n");

  char word[100];
  char letters[100];
  int values[100];

  scanf("\n%s",&word);

  int arrayLength = sizeof(word)/sizeof(word[0]);
  for(int i = 0; i < arrayLength; i++){
    for(int j = i+1; j < arrayLength; j++){
      if(word[i] == word[j]){
        //Detect if the letter is in the array.
        for(int k = 0; k < 100; k++){
          if(letters[k] == word[i]){
            values[k] += 1;
            break;
          } else {
            letters[i] = word[i];
            values[i] = 1;
          }
        }
      }
    }
  }
  int length = sizeof(letters)/sizeof(letters[0]);
  for(int i = 0; i < length; i++){
    printf("%c: %d\n", letters[i], values[i]);                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        );
  }
  return 0;
}
