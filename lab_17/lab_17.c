// Приклад 1
#include <stdio.h>
int main(void){
int x = 99;
int *p1, *p2;
p1 =&x;
p2= p1;
/* друк значення х два рази */
printf("Значення по адресі p1 ip2: %d %d\n", *p1, *p2);
printf("значення вказівника p1 i p2: %p %p", p1, p2);
return 0;
} 
------------------------------------------------------------------
// Значення по адресі p1 ip2: 99 99
// значення вказівника p1 i p2: 0x7fff878f9164 0x7fff878f9164
  
// Приклад 2
#include <stdio.h>
#include <stdlib.h>
#define SIZE 5 
void push(int i); 
int pop(void);
int *tos,*p1,stack[SIZE];
int main(void)
{
    int value;
    tos = stack; // tos посилається на основу стеку 
    p1 = stack; // ініціалізація р1 
    do {
        printf("Ведіть значення:");
        scanf("%d", &value);
        if(value != 0)
            push(value);
        else
            printf("Значення на вершині рівне %d\n", pop());
    } while(value != -1);
    return 0;
}

void push(int i)
{
    p1++;
    if(p1 == (tos+SIZE)) {
        printf("Perepovnennya steka.\n");
        exit(1);
    }
    *p1 = i;
}
int pop(void)
{
    if(p1 == tos) {
        printf("Stek pyctuy.\n");
        exit(1);
    }
    p1--;
    return *(p1+1);
} 
------------------------------------------------------------------
// Ведіть значення:99
// Ведіть значення:-1
  
// Приклад 3
#include <stdio.h>
void main(){
	int a[5];
	int sum=0;
	for (int i=0;i<5;i++){
		scanf("%d",&a[i]);
	}
	for(int j=0;j<5;j++){
		int c = *(a+j);
		sum = sum + c;
	}
	printf("sum = %d",sum);
}
------------------------------------------------------------------
// 5
// 6
// 3
// 5
// 5
// sum = 24
  
// Приклад 4
#include <stdio.h>
// Функція для обчислення суми додатних елементів масиву
int sum_positive_elements(int arr[], int size) {
int sum = 0;
for (int i = 0; i < size; i++) {
if (arr[i] > 0) {
sum += arr[i];}
}
return sum;
}
int main() {
int arr[10]; // Масив розмірністю 10
int size = 10; // Розмір масиву
// Введення елементів масиву з клавіатури
printf("Введіть 10 цілих чисел:\n");
for (int i = 0; i < size; i++) {
printf("Елемент %d: ", i + 1);
scanf("%d", &arr[i]);}
// Виклик функції для обчислення суми додатних елементів
int sum = sum_positive_elements(arr, size);
// Виведення результату
printf("Сума додатних елементів масиву: %d\n", sum);
return 0;}
------------------------------------------------------------------
// Введіть 10 цілих чисел:
// Елемент 1: 1
// Елемент 2: 2
// Елемент 3: 3
// Елемент 4: 4
// Елемент 5: 52
// Елемент 6: 52
// Елемент 7: 63
// Елемент 8: 4
// Елемент 9: 5
// Елемент 10: 7
// Сума додатних елементів масиву: 193
