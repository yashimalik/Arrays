#include<stdio.h>
int main(){
  int i, j;
  int count=0;
  int x=12;
  int arr[5]={1,4,6,11,8};
    for(i=0; i<5; i++){
      for(j=i+1; j<5; j++){
        if(arr[i]+arr[j]==x){
          count+=1;
          printf("(%d, %d) \n", arr[i], arr[j]);
        }
      }
    }
  printf("%d", count);
  return 0;
}
