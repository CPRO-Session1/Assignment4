//Olivier Gabison - Program that removes duplicates in an array. However, I don't know why
// it's creating a huge number for my last number.

#include <stdio.h>

int main(){
//Size of array: 5
  printf("Please input numbers for the array\n");
  int n1;
  scanf("\n%d",&n1);
  int n2;
  scanf("\n%d",&n2);
  int n3;
  scanf("\n%d",&n3);
  int n4;
  scanf("\n%d",&n4);
  int n5;
  scanf("\n%d",&n5);
  //Check for duplicates
int arr[] = {n1,n2,n3,n4,n5};
int finalarr[5];
  for(int i=0; i < 5; i++){
    for(int j=i+1; j < 5; j++){
      if(arr[i] == arr[j]){
        for(int k = j; k < 5; k++){
          arr[k] = arr[k+1];
        }
      } else {
        j++;
      }
    }

    }


  //print final array
  int length = sizeof(arr)/sizeof(arr[0]);
  for(int i = 0; i < length; i++){
    printf("%d,", arr[i]);
  }
  printf("\n");

  return 0;
}
