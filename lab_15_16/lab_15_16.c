// Приклад 1
#include <stdio.h>
#include <string.h>
int main(void) {
    char s1[80], s2[80];
        printf("Введіть перший рядок:");
    fgets(s1, sizeof(s1), stdin);
        printf("Введіть другий рядок: ");
    fgets(s2, sizeof(s2), stdin);
        printf("Довжина:%zu %zu\n", strlen(s1), strlen(s2));
        if (!strcmp(s1, s2))
        printf("Рядки рівні:\n");
        strcat(s1, s2);
    printf("%s\n", s1);
        strcpy(s1, "Перевірка.\n");
    printf("%s", s1);
        return 0;
}
---------------------------------------------------------------------
// Введіть перший рядок: привт
// Введіть другий рядок: 123
// Довжина:12 4
//  привт
// 123

// Перевірка.

// Приклад 2
#include <stdio.h>
int main(void) {
int x[100]; //оголошення масиву цілого типу з 100 чисел
int t;
for(t=0;t<100;++t) x[t]=t; //присвоєння значення від0 до 99
for(t=0;t<100;++t) printf("%d\n",x[t]);}
-------------------------------------------------
// 0
// 1
// 2
// 3
// 4
// 5
// 6
// 7
// 8
// 9
// 10
// 11
// 12
// 13
// 14
// 15
// 16
// 17
// 18
// 19
// 20
// 21
// 22
// 23
// 24
// 25
// 26
// 27
// 28
// 29
// 30
// 31
// 32
// 33
// 34
// 35
// 36
// 37
// 38
// 39
// 40
// 41
// 42
// 43
// 44
// 45
// 46
// 47
// 48
// 49
// 50
// 51
// 52
// 53
// 54
// 55
// 56
// 57
// 58
// 59
// 60
// 61
// 62
// 63
// 64
// 65
// 66
// 67
// 68
// 69
// 70
// 71
// 72
// 73
// 74
// 75
// 76
// 77
// 78
// 79
// 80
// 81
// 82
// 83
// 84
// 85
// 86
// 87
// 88
// 89
// 90
// 91
// 92
// 93
// 94
// 95
// 96
// 97
// 98
// 99

// Приклад 3
#include<stdio.h>
int main(void){
int t,i, num[3][4];
for(t=0;t<3;++t)
for(i=0;i<4;++i)
num[t][i]=(t*4)+i+1;
//вивід на екран
for(t=0;t<3;++t){
for(i=0;i<4;++i)
printf("%3d",num[t][i]);
printf("\n");
}
return 0;
} 
---------------------------------------------------------------------
  // 1  2  3  4
  // 5  6  7  8
  // 9 10 11 12

// Приклад 4
#include <stdio.h>
#define MAX 100
#define LEN 80
char text[MAX][LEN];
int main(void) {
    int t, i, j;
    printf("Для виходу введіть пустий рядок.\n");
    for (t = 0; t < MAX; t++) {
        printf("%d: ", t);
        gets(text[t]);
        if (!*text[t]) break; } // вихід при пустому рядку    
    for (i = 0; i < t; i++) {
        for (j = 0; text[i][j]; j++)
            putchar(text[i][j]);
        putchar('\n');    }
    return 0;} 
---------------------------------------------------------------------
// Для виходу введіть пустий рядок.
// 0: п
// 1: 12
// 2: 
// п
// 12

// Приклад 5
#include <stdio.h>
#define SIZE 10
int main() {
    int arr[SIZE];
    int sum = 0;
    // Заповнення масиву
    printf("Введіть %d цілих чисел:\n", SIZE);
    for (int i = 0; i < SIZE; i++) {
        printf("Елемент %d: ", i + 1);
        scanf("%d", &arr[i]);
        sum += arr[i]; // Додавання поточного елементу до суми
    }
    // Виведення масиву
    printf("Введений масив: ");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", arr[i]);
    }
    // Виведення суми елементів масиву
    printf("\nСума елементів масиву: %d\n", sum);
    return 0;} 
---------------------------------------------------------------------
// Введіть 10 цілих чисел:
// Елемент 1: 1
// Елемент 2: 2
// Елемент 3: 3
// Елемент 4: 45
// Елемент 5: 65
// Елемент 6: 76
// Елемент 7: 89
// Елемент 8: 3
// Елемент 9: 23
// Елемент 10: 65
// Введений масив: 1 2 3 45 65 76 89 3 23 65 
// Сума елементів масиву: 372
