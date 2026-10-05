#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL, "RUS");
    int a, b;

    // Ввод номеров рабочих мест
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

    // Проверка четности
    // is_a_even будет равен 1 (true), если число четное, и 0 (false) если нет
    int is_a_even = (a % 2 == 0);
    int is_b_even = (b % 2 == 0);

    // Логическое условие:
    // Кофе готовится, если is_a_even И is_b_even имеют РАЗНЫЕ значения.
    // В Си это можно записать через оператор неравенства (!=) или через XOR (^).

    if (is_a_even != is_b_even) {
        printf("\nРезультат: Кофе готовится! (Условие выполнено)\n");
    }
    else {
        printf("\nРезультат: Кофе не готовится. (Условие не выполнено)\n");
    }

    return 0;
}