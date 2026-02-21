#include <stdio.h>

int main() {

    int num1,num2,result;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    printf(" \n1 add");
    printf("\n2 sub");
    printf("\n3 mul");
    printf("\n4 div");
    printf("\n5 modulo");

    printf("\nchoose a operator:\n");
    scanf("%d",&result);

    switch (result)
    {
    case 1:
      result=num1+num2;
      printf("addition is %d",result);
        break;

     case 2:
      result=num1-num2;
      printf("subtraction is %d",result);
        break;

     case 3:
      result=num1*num2;
      printf("multiplication is %d",result);
        break;  

     case 4:
       result=num1/num2;
      printf("division is %d",result);
        break;

     case 5:
    result=num1%num2;
      printf("module is %d",result);
        break; 

     default:
     printf("something wrong");
        break;
    }

    return 0;



  
}