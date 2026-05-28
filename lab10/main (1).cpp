#include <iostream>
#include <iomanip>

#include "Ttime.h"
#include "ring_utils.h"
#include "knight_utils.h"

using namespace std;

// Функції завдань
void task1();
void task2();
void task3();

int main()
{
    int choice;

    do
    {
        cout << "\n====================================\n";
        cout << "1 - Param72 (Перевірка часу)\n";
        cout << "2 - Begin13 (Площа кіл)\n";
        cout << "3 - Boolean40 (Хід коня)\n";
        cout << "0 - Вихід\n";
        cout << "Ваш вибір: ";

        cin >> choice;

        switch (choice)
        {
        case 1:
            task1();
            break;

        case 2:
            task2();
            break;

        case 3:
            task3();
            break;

        case 0:
            cout << "Програму завершено.\n";
            break;

        default:
            cout << "Помилка! Невірний вибір.\n";
        }

    } while (choice != 0);

    return 0;
}

// ================= Param72 =================
void task1()
{
    const int N = 5;
    TTime times[N];

    for (int i = 0; i < N; i++)
    {
        cout << "\nМомент часу " << i + 1 << endl;
        input_time(times[i]);
    }
}

// ================= Begin13 =================
void task2()
{
    Ring r; 

    cout << "\nВведіть зовнішній радіус R1: ";
    cin >> r.R1;

    cout << "Введіть внутрішній радіус R2: ";
    cin >> r.R2;

    // Перевірка радіусів
    if (r.R1 <= r.R2 || r.R1 <= 0 || r.R2 <= 0)
    {
        cout << "Помилка! Повинно бути R1 > R2 > 0\n";
        return;
    }

    // ВИКЛИК ФУНКЦІЇ
    calculateRingAreas(&r);

    cout << fixed << setprecision(2);

    cout << "\nПлоща першого кола S1 = " << r.S1 << endl;
    cout << "Площа другого кола S2 = " << r.S2 << endl;
    cout << "Площа кільця S3 = " << r.S3 << endl;
}

// ================= Boolean40 =================
void task3()
{
    KnightMove km; 

    cout << "\nВведіть x1 y1: ";
    cin >> km.x1 >> km.y1;

    cout << "Введіть x2 y2: ";
    cin >> km.x2 >> km.y2;

    // Перевірка координат
    if (km.x1 < 1 || km.x1 > 8 ||
        km.y1 < 1 || km.y1 > 8 ||
        km.x2 < 1 || km.x2 > 8 ||
        km.y2 < 1 || km.y2 > 8)
    {
        cout << "Помилка! Координати повинні бути від 1 до 8.\n";
        return;
    }

    // ВИКЛИК ФУНКЦІЇ 
    checkKnightMove(&km);

    cout << "\nРезультат: ";
    if (km.canMove)
        cout << "TRUE - кінь може перейти.\n";
    else
        cout << "FALSE - кінь не може перейти.\n";
}
