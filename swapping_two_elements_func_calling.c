#include <stdio.h>
void func(int x[]){
  int temp;
  temp=x[0];
  x[0]=x[1];
  x[1]=temp;
  return;
}
int main(){
  int arr[2]={2,9};
  func(arr);
    printf(" %d, %d", arr[0], arr[1]);
  return 0;
}
