/* 
Expt no.1
Question: simulation of simple calculator 
Name :mr dhannush 
Roll no : N07
Date: 30.12.2021
*/
# include <stdio.h>
int main()
{
   char op;
   int num1,num2,result;
  printf("enter the operator\n");
  scanf ("%c",&op);
  printf(" enter two integers/n");
  scanf ("%d%d", &num1,&num2); 

  if (op == '+')   
    
     {result = num1+num2; 
     }

 else  if (op == '-')
     {result =num1-num2;  
     }

  else if (op == '*')
     {result = num1*num2;
     }

  else if (op == '*') 
     { result = num1*num2 ;
     } 

  else if (op == '/')
     {   
       if (num2 == 0) 
       
        {printf (" divide by zero error \n");
         return 1; 
     	}  
     	else
     	
       	result = num1/num2; 
        }
        else if (op == '%')
        { if  (num2 == 0)
         { printf ("divide by zero error\n");
        return 2;
        } 
       else 
       result = num1%num2;  
     } 
     else  
     { printf ("invalid operator");
return 3;
 
     } 
    printf("result of %d %c %d = %d\n",num1,op,num2,result); 
  return 0;
     }
   
