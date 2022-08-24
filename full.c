#include <stdio.h>
#include <stdbool.h>

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

// signed Integer data 
printf("-----------signed Integer data------------\n");
// Short -> %d , %hi
short int pk = 45; 
printf("I'm short %hi\n", pk);
// Int -> %d %i
signed int ps = 100000;
printf("I'm int %i\n",ps);
// long -> %ld ,%li
long int pl = 1337l;
printf("I'm long %ld\n", pl);
// Long Long %lld, %lli
long long int pll =  13337LL;
printf("I'm long long %lld\n", pll);
// Octal int -> %o
int oc = 077;// need to use 0 at 1st.
printf("I'm octal %o\n",oc);
printf("decimal of %o is %d\n",oc, oc);// convert octal to decimal
// hex int -> %x .%X
int hx = 0xfff;// need to use 0x at 1st.
printf("I'm hex %x\n",hx);
printf(" decimal of %x is %d\n",hx, hx);// convert hex to decimal

// unsigned Integer data 
printf("-----------unsigned Integer data------------\n");
//unsinged means all positive data

//unsigned short -> %hu
unsigned short us = 41;
printf(" I'm Unsigned short %hu\n",us);

//unsigned int -> %u
unsigned int ui = 45;
printf(" I'm Unsigned int %u\n",ui);

//unsigned long -> %lu
unsigned long ul = 55;
printf(" I'm Unsigned long %lu\n",ul);

//unsigned long long -> %llu
unsigned long long ull = 133337;
printf(" I'm Unsigned long long %llu\n",ull);

// if we stored negative number into unsinged
unsigned short negative = -2;
printf(" I'm Unsigned negative %hu\n",negative); // it give us a unexpected result coz , binary of -2 is 1111111111111110 and decimal of this binary value is 65534. so we can see '65534' as a result.


// floating data 
printf("-----------floating data------------\n");

// float -> %f
float fd = 489.123F;
printf(" I'm float %f\n",fd);
// Double -> %lf
double df = 1337.33;
printf(" I'm double float %lf\n",df);
// Long Double -> %Lf
long double lf = 133333337.33; 
printf(" I'm long double float %Lf\n",lf);// you can use %.2Lf for print 133333337.33

// character data //
printf("-----------character data------------\n");
// char -> %c
char cha = 'A';
printf("I'm a character -%c\n",cha);
//it actually work by decimal value .for example:

char chad = 65;
printf("I'm a character -%c\n",chad); // it will print 'I'm a character A '
// more:
char chadd = 'A';
printf("I'm a character -%d\n",chadd); // it will print 'I'm a character 65 '
// more:
char chaddd = 'A' + 2;
printf("My Decimal value is -> %d and character value is -> %c\n",chaddd,chaddd);

// String data
printf("-----------String data------------\n");

// string -> %s
char string[80] = "Hey I'm RobinTrigon. I'm a Gammer | Pentaster | Writer | Student | Hacker";
printf("%s\n",string);

// Boolean data 
printf("-----------Boolean data------------\n");

short is_logged_in = 1;
// we just use a simple condition. in machine language 1 mean true and 0 mean false
if (is_logged_in){
printf("User logged in. \n");
}else{
printf("User logged out.\n");
}
short iis_logged_in = 0;
if (iis_logged_in){
printf("User logged in. \n");
}else{
printf("User logged out.\n");
}
// another rule . we need to incude a libriry "#include <stdbool.h>"
bool admin_logged_in = true;
if (admin_logged_in){
printf("admin logged in. \n");
}else{
printf("admin logged out.\n");
}
bool addmin_logged_in = false;
if (addmin_logged_in){
printf("admin logged in. \n");
}else{
printf("admin logged out.\n");
}

//Type conversion
printf("-----------Type conversion------------\n");

// 1.implecid conversion 2.explecid conversion
//implecid conversion
char imp = 'R';
printf("[+] character,decimal,hex value of 'R' -> %c  %d  %x\n", imp, imp ,imp);
//explecid conversion
char exp = 'R'; 
printf("[+] explecid conversion is -> %d\n",(int)exp);//we want to convert 'R' from char to int.

//Oparator
printf("----------- Oparator ------------\n");

printf("mainly three typs of operator avalable-");
printf(" 1.Unary (a++)  2.Binary(a+b)  3.Ternary");
printf("Binary Oparator- 1.Arithmetic 2.Relational 3.Logical 4.Assignment 5.Bitwise                                                                                ");
// Arithmetic Oparator( + - * / )
printf("-----------Arithmetic Oparator ------------\n");

int ao1 = 30;
int ao2 = 5;
printf("Addition: %d\n", ao1 + ao2); 
printf("Subtraction: %d\n", ao1 - ao2); 
printf("Multiplication: %d\n", ao1 * ao2); 
printf("Division: %d\n", ao1 / ao2); 


return 0;
}


