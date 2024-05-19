// Приклад 1
#include <stdio.h>
main()
{
    int a=67;
    int b=33;
    int c=a+b+7;
    printf("a+b+7=%d\n", c);
}
-----------------------------------------------------
// a+b+7=107

// Приклад 2
#include <stdio.h>
main()
{
    int a=8;
    int b=7;
    int c=a+5*b;
    printf("c=%d\n",c);
}
-----------------------------------------------------
// C=43

// Приклад 3
#include <stdio.h>
main()
{
    int a=8;
    int b=7;
    int c=(a+5)*b;
    printf("c=%d\n",c);
}
-----------------------------------------------------
// C=91

// Приклад 4
#include <stdio.h>
main()
{
    int a=8;
    int b= ++a;
    printf("a=%d\n",a);
    printf("b=%d\n",b);
}
-----------------------------------------------------
// A=9
// B=9

// Приклад 5
#include <stdio.h>
main()
{
    int a=8;
    int b= a++;
    printf("a=%d\n",a);
    printf("b=%d\n",b);
}
-----------------------------------------------------
// A=9
// B=8

// Приклад 6
#include <stdio.h>
main()
{
    int a=8;
    int b= a--;
    printf("a=%d\n",a);
    printf("b=%d\n",b);
}
-----------------------------------------------------
// A=7
// B=8

// Приклад 7
#include <stdio.h>
main()
{
    int a=8;
    int b= --a;
    printf("a=%d\n",a);
    printf("b=%d\n",b);
}
-----------------------------------------------------
// A=7
// B=7

// Приклад 8
// Додано пропущені дужки {} для функції main.
// Додано int перед main() для вказання типу повернення функції main.
// Додано крапку з комою ; після оголошення масиву char name[50];.
// Виправлено sizeof PRAISE на sizeof(PRAISE) у функції printf.
#include <stdio.h>
#include <string.h>
#define PRAISE "О, яке чудове імʼя!"
int main() 
{
    char name[50];
    printf("Як Вас звати?\n");
    scanf("%s", name);
    printf("Привіт, %s. %s\n", name, PRAISE);
    printf("Ваше ім'я складається з %lu літер і займає %lu комірок пам'яті.\n", strlen(name), sizeof(name));
    printf("Вітальна фраза складається з %lu літер і займає %lu комірок пам'яті.\n", strlen(PRAISE), sizeof(PRAISE));
    return 0;
}
-----------------------------------------------------
// Як Вас звати?
// остап
// Привіт, остап. О, яке чудове імʼя!
// Ваше ім'я складається з 10 літер і зай�ає 50 комірок пам'яті.
// Вітальна фраза складається з 33 літер і займає 34 комірок пам'яті.

// Приклад 9
#include <stdio.h>
#include <string.h>
void main()
{
    float x=1.4,y=2.0;
    int z;
    z=x/2*7 + y/4-1;
    printf("z=%d\n",z);
    getch();
}
-----------------------------------------------------
// Z=4

// Приклад 10
#include <stdio.h>
#include <string.h>
void main()
{
    int x=2,z;
    float y;
    z=0.5*(y=2.3*x) +x++/3*y;
    printf("z=%d\n",z);
    getch();
}
-----------------------------------------------------
// Z=2

// Приклад 11
#include <stdio.h>
#include <string.h>
void main()
{
    int x, y=3;
    float z;
    z=1.1*(x=++y/2.)+0.3*x;
    printf("z=%d\n",z);
    getch();
}
-----------------------------------------------------
// Z=118281368

