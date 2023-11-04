#include <stdio.h>

int main(void) {
 int num,sum=0;
  printf("Enter a number: ");
  scanf("%d",&num);
  int cnt=0;
  while(num>0){
    int b=num%10;
    sum+=b;
    num/=10;
    cnt++;
  }
  printf("Sum of digits=%d",sum);
  printf("\nthe input number has %d digits",cnt);
  return 0;
}
