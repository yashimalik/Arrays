#include<stdio.h>
int main(){
  int i;
  int count=0;
  int arr[7]={1,2,3,4,5,6,7};
    for(i=0; i<7; i++){
      if(arr[i]>2){
        count+=1;
      }
    }
  printf("%d", count);
  return 0;
}
