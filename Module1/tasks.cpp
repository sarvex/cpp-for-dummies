// Copyright 2022 Zener
// Created by Zener on 7/18/2022.
//
// Список задач, которые можно решить, проходя первый модуль.
// Решение всех задач гарантирует понимание и запоминание всего материала
// первого модуля

#include <iostream>

// TODO(Zener) Принять число - год.
//  Вывести, является этот год високосным или нет
void is_leap() {
    int year;
    std::cin >> year;

    // Способ 1 - много конструкций if
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                std::cout << "Високосный" << std::endl;
            } else {
                std::cout << "Не високосный" << std::endl;
            }
        } else {
            std::cout << "Високосный" << std::endl;
        }
    } else {
        std::cout << "Не високосный" << std::endl;
    }


    // Способ 2 - использование && и ||
    if (!(year % 4) && year % 100 || !(year % 400))
        std::cout << "Високосный" << std::endl;
    else
        std::cout << "Не високосный" << std::endl;

    // Способ 3 - использование тернарного оператора
    std::cout << ((!(year % 4) && year % 100 || !(year % 400))
                          ? "Високосный"
                          : "Не високосный")
              << std::endl;
}


// TODO(Zener) Посчитать, является ли число простым или нет
void is_prime() {
    int n;  // Число, которое надо проверить
    std::cin >> n;
    int i = 2;           // Делители
    bool check = false;  // нашли хотя бы 1 делитель или нет
    while (i < n / 2) {
        if (n % i) {
            check = true;
            break;
        }
    }

    if (check) std::cout << "Число не простое" << std::endl;
    else
        std::cout << "Число простое" << std::endl;
}


// TODO(Zener) Найти наибольший общий делитель двух чисел
void BCD() {
    int a, b;  // 2 числа, у которых надо найти НОД
    std::cin >> a >> b;

    // Алгоритм Евклида
    while (a > 0 && b > 0) {
        if (a > b) a = a % b;
        else
            b = b % a;
    }

    if (a == 0) std::cout << b << std::endl;
    else
        std::cout << a << std::endl;
}


// TODO(Zener) Найти число фибоначчи с номером n.
//  n - любое положительное число
void find_fibonacci() {
    int n;
    std::cin << n;

    int prev = 0, actual = 1;  // предыдущее число и текущее
    int i = 0;
    while (i < n) {
        int temp = actual;
        actual += prev;
        prev = temp;
    }

    std::cout << actual << std::endl;
}


// TODO(Zener) Найти сумму чисел от 1 до n, где n - любое положительное число
void find_sum() {
    int n;
    std::cin >> n;
    int sum = 0;  // сумма чисел
    while (n > 0) sum += n--;
}


// TODO(Zener) Дана последовательность, заканчивающаяся на 0.
//  Написать самое большое число из последовательности
void find_the_biggest() {
    int x;                      // Каждое число из последовательности
    int the_biggest = INT_MIN;  // Самое большое число будет тут

    do {
        std::cin >> x;
        if (the_biggest < x) the_biggest = x;
    } while (x != 0);

    std::cout << the_biggest << std::endl;
}
