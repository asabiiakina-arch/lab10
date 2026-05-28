#include "knight_utils.h"

// Функція перевірки ходу коня
void checkKnightMove(KnightMove* km)
{
    int dx = abs(km->x1 - km->x2);
    int dy = abs(km->y1 - km->y2);

    km->canMove = (dx == 2 && dy == 1) || (dx == 1 && dy == 2);
}
