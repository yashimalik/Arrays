#include <stdio.h>
int main(){
int arr[5];
int i;
for(i=0; i<5; i++){
    printf("enter %dth element \n", i+1);
    scanf("%d", &arr[i]);
  }
for (i=0; i<5; i++){
    printf("%d", arr[i]);
  }
return 0;
}
