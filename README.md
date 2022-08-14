### print something
```
#include <stdio.h>

int main() {
printf("This is RobinTrigon");
return 0;
}
// result:- This is RobinTrigon
```
### mathmetics
```
#include <stdio.h>
int main() {
printf("%d\n",5*5);
    return 0;
}
// result:- 10
```
### variables
```
#include <stdio.h>
int main() {
int lol = 1337;
printf(" sir you are %d\n ",lol);
    return 0;
}
// result:- sir you are 1337
```
### calculate

```
#include <stdio.h>
int main() {
int a =10;
int b=20;
printf("%d + %d = %d\n", a,b,a+b); //a + b = a+b | 10 + 20 = 30
printf("%d - %d = %d\n", a,b,a-b); //a - b = a-b | 10 - 20 = -20
printf("%d * %d = %d\n", a,b,a*b); //a * b = a+b | 10 * 20 = 200
printf("%d / %d = %d\n", a,b,a/b); //a + b = a/b | 10 / 20 = 0
    return 0;
}
// result:- calculate all result
```
### Deta Type
```
#include <stdio.h>
int main() {
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
    return 0;
}
// result:- 45,50.549999,R,50
```
### reserved keywords
```
None can use these keyword as a variable,function,identifire- if, else, switch, case, default, break, int, float, char, double, long, for, while, do, void, goto, auto, signed, const, extern, register, unsigned, return, continue, enum, sizeof, struct, typedef, union, volatile.
```
### user input
```
#include <stdio.h>
int main() {
int m;
scanf("%d",&m);
printf("Welcome ID:%d hava a nice day!\n",m);
return 0;
}
// result:- Welcome ID:4 hava a nice day!
```
### calculator
```
#include <stdio.h>
int main() {
float numb1, numb2, numb3, result;
printf("please enter two number example(4 4): ");
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
// result:- calculate your input.
```
### signed Integer data 
```
#include <stdio.h>

int main() {
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

return 0;
}
// result:- lets run...
```
### floating data
```
#include <stdio.h>

int main() {

// float -> %f
float fd = 489.123F;
printf(" I'm float %f\n",fd);
// Double -> %lf
double df = 1337.33;
printf(" I'm double float %lf\n",df);
// Long Double -> %Lf
long double lf = 133333337.33; 
printf(" I'm long double float %Lf\n",lf);// you can use %.2Lf for print 133333337.33
return 0;
}
// result:- lets run...
```
