#include <stdio.h>
int main(){
  int i; 
  int x=0;
  int y=0;
  int arr[5]={1,2,3,4,5};
  for(i=0; i<5; i++){
    if(i%2==0){
      x=x+arr[i];  
    }
    else{
      y=y+arr[i];
    }
  }
printf("%d", x-y);  
return 0;
}
