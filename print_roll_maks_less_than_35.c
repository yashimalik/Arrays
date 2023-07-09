#include <stdio.h>
int main(){
int i;
int arr[10]={23, 33, 34, 37, 56, 100, 99, 23, 9, 11};
    for(i=0; i<10; i++){
      if(arr[i]<35){
        printf("%d ", i);
      }
   } 
return 0;
}
