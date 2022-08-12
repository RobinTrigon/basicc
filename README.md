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

### writing....
