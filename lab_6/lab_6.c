Приклад 1
#include <stdio.h>
main()
{
  int z;
  int w;
  int x=1;
  int y=2;
  z=x+y;
  w=y-x;
  printf("%d",z);
  printf("%d",w);
}
---------------------
// 3
// 1
Приклад 2
#define PI 3.14159
#include <stdio.h>
main()
{
    int a=5;
    float b=23.5;
    int c=31000;
    printf("%d матеріалів тканини коштувало %f гривень.\n",a,b);
    printf("Значення числа PI рівне %f.\n", PI);
    printf("ІВМ сумісні комп'ютери набули широкого розповсюдження. \n");
    printf("%c%d\n",'$', c);
}
---------------------
// 5 метрів тканини коштувало 23.50 гривень 
// Значення числа PI 0.000000 
// IBM сумісні комп'ютери набули широкого розповсюдження.
//  &31000
  
// Приклад 3
#include <stdio.h>
main()
{
    printf("/%d/\n",557);
    printf("/%10d/\n",557);
    printf("/%-10d/\n",557);
    
}
main()
{
    printf("/%8d/\n",21949);
    printf("/%8d/\n",-1611);
    printf("/%8d/\n",-8380);
    printf("/%8d/\n",2143);
}

main()
{
    printf("/%f\n", 6543.21);
    printf("/%e/\n", 6543.21); 
    printf("/%4.2f\n", 6543.21);
    printf("/%3.1f\n", 6543.21);
    printf("/%10.3f/\n", 6543.21);
    printf("/%10.3e//n", 6543.21);
}
---------------------
// /557/
// /       557/
// /557       /
// /   21949/
// /   -1611/
// /   -8380/
// /    2143/
// /6543.210000
// /6.543210e+03/
// /6543.21
// /6543.2
// /  6543.210/
// / 6.543e+03//n

// Приклад 4
#define riadok "Чудова погода"
main()
{
    printf("/%2s/\n", riadok);
    printf("/%15.s/\n", riadok); 
}
main()
{
    printf("%d\n",557);
    printf("%o\n",557);
    printf("%x\n",557);
    printf("%d\n",-557);
}
---------------------
// /Чудова погода/
// /               /
// 557
// 1055
// 22d
// -557
  
// Приклад 5
#include<stdio.h>
main()
{
    int vik;
    char name[30];
    printf("Vash vik?\n");
    scanf("%d",&vik);
    printf("Vvedit vashe imya\n");
    scanf("%s",name);
    printf("Ptyvit %s Jakomy(iy) %d rokiv",name,vik);
}
---------------------
// Vash vik?
// 18
// Vvedit vashe imya
// Остап
// Ptyvit Остап Jakomy(iy) 18 rokiv

// Приклад 6
#include<stdio.h>
#include<conio.h>
#define STOP '*'
main()
{
    char ch;
    ch=getchar();
    ml : if(ch != STOP);
    {
        putchar(ch);
        ch=getchar(); goto ml;} }  
------------------------------------------
// 1
// 1
// 3
// 3
// ^J
// 
