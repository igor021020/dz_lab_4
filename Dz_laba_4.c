#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL, "RUS");
    int a, b;
    printf("Введите номер рабочего места Анны (A): ");
    if (scanf("%d", &a) != 1) {
        printf("Ошибка ввода.\n");
        return 1;
    }
    printf("Введите номер рабочего места Бориса (B): ");
    if (scanf("%d", &b) != 1) {
        printf("Ошибка ввода.\n");
        return 1;
    }

    int is_a_even = (a % 2 == 0);
    int is_b_even = (b % 2 == 0);
    if (is_a_even != is_b_even) {
        printf("\nРезультат: Кофе готовится! (Условие выполнено)\n");
    }
    else {
        printf("\nРезультат: Кофе не готовится. (Условие не выполнено)\n");
    }

    return 0;
}