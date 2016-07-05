//Olivier Gabison - When inputting the numbers in the array, finds the sum of all the other integers in the array and stores it in that
//value.

#include <stdio.h>

int main(){

//Total of 5 ints in the array

int arr[5];

printf("Please input the numbers in the array\n");
int one, two, three, four, five;
scanf("\n%d",&one);
scanf("\n%d",&two);
scanf("\n%d",&three);
scanf("\n%d",&four);
scanf("\n%d",&five);

arr[0] = one;
arr[1] = two;
arr[2] = three;
arr[3] = four;
arr[4] = five;

int finalarr[5];

for(int i = 0; i < 5; i++){
int sum = 0;
  for(int j = i + 1; j < 5; j++){
    sum += arr[j];
  }
  if(i > 0){
    for(int k = 0; k < i; k++){
      sum += arr[k];
    }
  }
  finalarr[i] = sum;
}

for(int i = 0; i < 5; i++){
  printf("%d, ", finalarr[i]);
}
printf("\n");
  return 0;
}
