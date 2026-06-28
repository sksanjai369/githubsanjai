#include<stdio.h>
 int main()
 {
    float num1,num2,result;
    char op;
    printf("Enter the first number:");
    scanf("%f",&num1);
    printf("Enter the operator(+,-,*,/):");
    scanf(" %c",&op);

    printf("Enter the second number:");
    scanf("%f",&num2);
     if(op=='+')
     {
        result=num1+num2;
        printf("Result:%.2f\n",result);
     }
     else if(op=='-')
     {
        result=num1-num2;
        printf("Result:%.2f\n",result);
     }
      else if(op=='*')
     {
        result=num1*num2;
        printf("Result:%.2f\n",result);
     }
      else if(op=='/')
     {
        if(num2==0)
        {
            printf("Error:cannot divide by zero.\n");
        }
        else
        {
        result=num1/num2;
        printf("Result:%.2f\n",result);
        }
    }  
      else 
      {
        printf("Invalid operator.\n");
      } 
      return 0;

     }   