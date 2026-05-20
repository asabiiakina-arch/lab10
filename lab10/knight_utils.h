#ifndef KNIGHT_UTILS_H
#define KNIGHT_UTILS_H

#include <iostream>
#include <cmath>

using namespace std;

// Структура для ходу коня
struct KnightMove
{
    int x1, y1;
    int x2, y2;

    bool canMove;
};

// Перевірка ходу коня
void checkKnightMove(KnightMove* km);

#endif