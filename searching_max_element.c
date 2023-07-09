#include<stdio.h>
int main(){
int i;
int arr[5]={2, 34, 46, 21, 1};
int max=arr[0];
  for(i=0; i<5; i++){
    if(arr[i]>max){
      max=arr[i];
      }
    }
  printf("%d", max);
return 0;
}
