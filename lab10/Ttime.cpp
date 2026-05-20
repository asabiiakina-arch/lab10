#include "Ttime.h"

// Перевірка часу у 12-годинному форматі
int CheckTime(TTime T)
{
    int result = 0;

    // Перевірка годин
    if (T.Hour < 1 || T.Hour > 12)
        result += 100;

    // Перевірка хвилин
    if (T.Min < 0 || T.Min > 59)
        result += 10;

    // Перевірка секунд
    if (T.Sec < 0 || T.Sec > 59)
        result += 1;

    return result;
}

// Виведення часу
void output_time(const TTime& t)
{
    cout << setfill('0') << setw(2) << t.Hour << ":"
         << setfill('0') << setw(2) << t.Min << ":"
         << setfill('0') << setw(2) << t.Sec;
}

// Введення часу
void input_time(TTime& t)
{
    cout << "Введіть години (1-12): ";
    cin >> t.Hour;

    cout << "Введіть хвилини (0-59): ";
    cin >> t.Min;

    cout << "Введіть секунди (0-59): ";
    cin >> t.Sec;

    int result = CheckTime(t);

    if (cin.fail() || result != 0)
    {
        cin.clear();

        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout << "\nНевірний час: ";

        output_time(t);

        cout << "\nКод помилки: "
             << setfill('0') << setw(3)
             << result << endl;
    }
    else
    {
        cout << "\nКоректний час: ";

        output_time(t);

        cout << endl;
    }
}