#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

char ascii[7][24]={
    "***********************\0",
    "*     *               *\0",
    "*     *               *\0",
    "*     *****************\0",
    "*     *\0",
    "*     *\0",
    "*******\0"
};

char human[5][5] = {
    "(._.)",
    " /|\\ ",
    "  |  ",
    " / \\ ",
    " | | ",
};

char words[5][20] = {
    "gnu is not unix\0",
    "lorem ipsum\0",
    "sample text\0",
    "i hate arrays\0",
    "hello world\0"
};

char guessString[20];

int wrongAnswers = 0;

void wrongAnswer(){
    wrongAnswers++;
    switch(wrongAnswers){
        case 1:
            for(int i = 0; i < 5; i++)
                ascii[1][i + 1] =  human[0][i];
            break;
        case 2:
            ascii[2][3] = human[1][2];
            break;
        case 3:
            ascii[3][3] = human[2][2];
            break;
        case 4:
            ascii[2][2] = human[1][1];
            ascii[2][4] = human[1][3];
            break;
        case 5:
            for(int i = 0; i < 5; i++)
                ascii[4][i + 1] =  human[3][i];
            break;
        case 6:
            for(int i = 0; i < 5; i++)
                ascii[5][i + 1] =  human[4][i];
            break;
    }
}

void drawAscii(){
    for(int i = 0; i < 5; i++)
        printf("%s\n", ascii[i]);
    printf("%s %s\n", ascii[5], guessString);
    printf("%s\n", ascii[6]);
}

int main(){
    srand(time(0));
    char word[20];
    strcpy(word, words[rand() % 5]);
    for(int i = 0; i < strlen(word); i++){
        if(word[i] == ' '){
            guessString[i] = ' ';
        }else{
            guessString[i] = '_';
        }
    }
    guessString[strlen(word)] = '\0';
    drawAscii();

    while(1){
        printf("Please guess a character.\n");
        char guessChar = getchar();
        while(getchar() != '\n');

        if(!strchr("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ", guessChar)) continue;

        int matches = 0;
        for(int i = 0; i < strlen(word); i++){
            if(word[i] == guessChar){
                guessString[i] = guessChar;
                matches++;
            }
        }
        if(!matches){
            ascii[1][8 + wrongAnswers] = guessChar;
            wrongAnswer();
        }
        for(int i = 0; i < 9; i++) printf("\033[F");
        drawAscii();
        if(strcmp(word, guessString) == 0){
            printf("\nYou win!\n");
            return 0;
        }else if(wrongAnswers == 6){
            printf("\nYou lose!\n");
            return 0;
        }
    }
    return 0;
}
