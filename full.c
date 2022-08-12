#include <stdio.h>
//print something
//   \n for create a new line.
int main() {
printf("This is RobinTrigon\n");
//mathmetics
printf("-----------Math------------\n");
printf("%d\n",5*5);
//variables
printf("-----------variables------------\n");
int lol = 1337;
printf(" sir you are %d\n ",lol);

//calculate
printf("-----------calculate------------\n");
int a =10;
int b=20;
printf("%d + %d = %d\n", a,b,a+b); //a + b = a+b | 10 + 20 = 30
printf("%d - %d = %d\n", a,b,a-b); //a - b = a-b | 10 - 20 = -20
printf("%d * %d = %d\n", a,b,a*b); //a * b = a+b | 10 * 20 = 200
printf("%d / %d = %d\n", a,b,a/b); //a + b = a/b | 10 / 20 = 0

//Deta Type
printf("-----------Deta Type------------\n");
//number -> integer(1337),float(1337.55),short,double,long,long long
//Text -> Charaecter-> '%','a','A'
//Boolean
//Custom Type

int num = 45;
float num2 = 50.55;
char ch = 'R';
printf("%d\n",num);
printf("%f\n",num2);
printf("%c\n",ch);

num = num2;
printf("%d\n",num); //if we put our float data in integer variable it will remove Decimal value. (50)

//constant variable
printf("-----------constant variable------------\n");

// not changlable data saved here.

const float PI = 3.1416f; // try to use 'f' in float value.
printf("%f\n",PI);
//for example if we define PI=45; it will see a error.
printf("-----------reserved keywords------------\n");

// reserved keywords
printf("None can't use these keyword as a variable,function,identifire- auto,break,case,char,const,continue,default,do,int,long,register,if etc..\n");

//user input
printf("-----------user input------------\n");

int m;
scanf("%d",&m);
printf("Welcome ID:%d hava a nice day!\n",m);

//calculator
printf("-----------calculator------------\n");

float numb1, numb2, numb3, result;
printf("please enter two number(4 4): ");
scanf("%f %f",&numb1, &numb2);

result = numb1 + numb2;
printf("%.2f + %.2f = %.2f \n", numb1, numb2, result);
result = numb1 - numb2;

printf("%.2f - %.2f = %.2f \n", numb1, numb2, result);
result = numb1 * numb2;

printf("%.2f * %.2f = %.2f \n", numb1, numb2, result);
result = numb1 / numb2;

printf("%.2f / %.2f = %.2f \n", numb1, numb2, result);


return 0;
}



