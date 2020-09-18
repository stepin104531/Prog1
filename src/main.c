#include "Calculator.h"
#include<stdio.h>
 int main(){
 int a,b;
 scanf("%d%d",&a,&b);
 printf("Sum is %d",sum(a,b));
 printf("Sum is %d",sub(a,b));
 printf("Sum is %d",mul(a,b));
 printf("Sum is %d",div(a,b));
 printf("Sum is %d",mod(a,b));
 return 0;
 }
