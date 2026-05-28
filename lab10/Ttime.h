#ifndef TTIME
#define TTIME

#include <iostream>
#include <limits>
#include <iomanip>
using namespace std;

// Опис типу TTime
struct TTime {
    int Hour, Min, Sec;
};

int CheckTime(TTime T);
void input_time(TTime &t);
void output_time(const TTime &t);

#endif
