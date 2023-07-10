#include <stdio.h>
int main(){
  int i;
  int arr[7]={1,2,3,4,5,6,7};
for(i=0; i<7; i++){
  if(i%2==0){
      arr[i]=arr[i]+10;
  }
  else{
      arr[i]*=2;
  }
}
for(i=0; i<7; i++){
  printf("%d ", arr[i]);
}
return 0;
}
