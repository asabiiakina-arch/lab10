#ifndef RING_UTILS_H
#define RING_UTILS_H

#include <iostream>

using namespace std;

// Структура для кіл
struct Ring
{
    double R1;
    double R2;

    double S1;
    double S2;
    double S3;
};

// Обчислення площ
void calculateRingAreas(Ring* r);

#endif