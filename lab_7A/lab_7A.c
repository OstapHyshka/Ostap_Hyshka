// Приклад 1
#include <stdio.h>
#include <conio.h>
int main()
{
    printf("Числа типу int займають %d байт.\n", sizeof(int));
    printf("Числа типу char займають %d байт.\n", sizeof(char));
    printf("Числа типу float займають %d байт.\n", sizeof(float));
    printf("Числа типу double займають %d байт.\n", sizeof(double));
    getch();
}
------------------------------------------------------------------------
// Числа типу int займають 4 байт.
// Числа типу char займають 1 байт.
// Числа типу float займають 4 байт.
// Числа типу double займають 8 байт.

// Приклад 2
// Префіксний та постфіксний 
// інкремент ++ і декремент --
#include <stdio.h>
#include <conio.h>
int main()
{
    int n = 3;
    printf("n=%d\n", n);
    // n++
    printf("prefix: ++n=%d\n", ++n);
    printf("postfix: n++=%d\n", n++);
    printf("after-postfix: n=%d\n", n);
    // n--
    printf("prefix: --n=%d\n", --n); //якщо забрати попередні рядки відповідь інша???
    printf("postfix: n--=%d\n", n--);
    printf("after-postfix: n=%d\n", n);
}
------------------------------------------------------------------------
// n=3
// prefix: ++n=4
// postfix: n++=4
// after-postfix: n=5
// prefix: --n=4
// postfix: n--=4
// after-postfix: n=3

// Приклад 3
#include <stdio.h>
#include <conio.h>
int main()
{
    int n=1,m=1, res1, res2;
        res1=n+(--m-++n);
        printf("res1=%d\n",res1);
            res2=m*(n/n++);
            printf("res2=%d\n",res2);
    return 0;
}
------------------------------------------------------------------------
// res1=0
// res2=0

// Приклад 4
#include <stdio.h>
#include <conio.h>
int main()
{
    int a, b=3; 
    float c;
    c = b%2 + (a = ++b/2) + 1.1;
    printf("a=%d,c=%4.1f\n",a,c);
}
------------------------------------------------------------------------
// a=2,c=4.1
  
// Приклад 5
#include <stdio.h>
int main()
{
    int x=2,z;
    float y = 2.1;
    z = x++*y+y/x*3;
    printf("x=%d z=%d\n",x,z);
}
------------------------------------------------------------------------
// x=3 z=6
  
// Приклад 6
#include <stdio.h>
int main()
{
    float x = 1.1, y = 0, z;
    int a;
    z=(a=x++)*y + 3*x;
    printf("z=%4.1f\n",z);
} 
------------------------------------------------------------------------
//z=6.3

