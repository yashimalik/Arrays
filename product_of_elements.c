#include<stdio.h>
int main(){
int x=1;
int i;
int arr[5]={1,2,3,4,5};
  for(i=0; i<5; i++){
    x=x*arr[i];
  }
  printf("%d", x);
  return 0;
}
