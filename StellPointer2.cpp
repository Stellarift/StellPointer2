#include <iostream>
using namespace std;

//Задание 1:копирование массива с использованием указателей
void task1() {
    cout << "Задание 1" << endl;

    const int SIZE = 5;
    int arr1[SIZE] = { 1, 2, 3, 4, 5 };
    int arr2[SIZE];

    //инициализация указателей
    int* ptr1 = arr1;
    int* ptr2 = arr2;

    cout << "Исходный массив: ";
    for (int i = 0; i < SIZE; i++) {
        cout << *(ptr1 + i) << " ";
    }
    cout << endl;

    //копирование массива с использованием арифметики указателей
    for (int i = 0; i < SIZE; i++) {
        *(ptr2 + i) = *(ptr1 + i);
    }

    cout << "Скопированный массив: ";
    for (int i = 0; i < SIZE; i++) {
        cout << *(ptr2 + i) << " ";
    }
    cout << endl << endl;
}

//Задание 2:обратный порядок элементов в массиве
void task2() {
    cout << "Задание 2" << endl;

    const int SIZE = 6;
    int arr[SIZE] = { 10, 20, 30, 40, 50, 60 };

    //Инициализация указателя на начало массива
    int* ptr = arr;

    cout << "Исходный массив: ";
    for (int i = 0; i < SIZE; i++) {
        cout << *(ptr + i) << " ";
    }
    cout << endl;

    //Реверсирование массива с использованием указателей
    int* start = arr;
    int* end = arr + SIZE - 1;

    while (start < end) {
        //Обмен значений через разыменование указателей
        int temp = *start;
        *start = *end;
        *end = temp;

        //Перемещение указателей
        start++;
        end--;
    }

    cout << "Массив в обратном порядке: ";
    for (int i = 0; i < SIZE; i++) {
        cout << *(ptr + i) << " ";
    }
    cout << endl << endl;
}

//задание 3: копирование с реверсом
void task3() {
    cout << "Задание 3" << endl;

    const int SIZE = 7;
    int arr1[SIZE] = { 5, 10, 15, 20, 25, 30, 35 };
    int arr2[SIZE];

    //инициализация указателей
    int* ptr1 = arr1;
    int* ptr2 = arr2;

    cout << "Исходный массив: ";
    for (int i = 0; i < SIZE; i++) {
        cout << *(ptr1 + i) << " ";
    }
    cout << endl;

    //копирование массива в обратном порядке
    for (int i = 0; i < SIZE; i++) {
        //копируем из конца первого массива в начало второго
        *(ptr2 + i) = *(ptr1 + (SIZE - 1 - i));
    }
    cout << "Скопированный массив в обратном порядке: ";
    for (int i = 0; i < SIZE; i++) {
        cout << *(ptr2 + i) << " ";
    }
    cout << endl;
}

int main() {
    setlocale(LC_ALL, "ru");
    task1();
    task2();
    task3();

    return 0;
}
