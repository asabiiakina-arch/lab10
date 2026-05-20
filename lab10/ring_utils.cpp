#include "ring_utils.h"

// Обчислення площ кіл і кільця
void calculateRingAreas(Ring* r)
{
    const double PI = 3.14;

    r->S1 = PI * r->R1 * r->R1;

    r->S2 = PI * r->R2 * r->R2;

    r->S3 = r->S1 - r->S2;
}