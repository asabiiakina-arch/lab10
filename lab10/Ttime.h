#ifndef TTIME_H
#define TTIME_H

#include <iostream>
#include <limits>
#include <iomanip>

using namespace std;

// Структура часу
struct TTime
{
    int Hour;
    int Min;
    int Sec;
};

// Перевірка правильності часу
int CheckTime(TTime T);

// Введення часу
void input_time(TTime& t);

// Виведення часу
void output_time(const TTime& t);

#endif