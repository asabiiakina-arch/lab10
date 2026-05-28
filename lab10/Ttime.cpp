#include "Ttime.h"

// Введення полів структури TTime з перевіркою
void input_time(TTime &t) {
    cout << "\nВведіть години (1-12): ";
    cin >> t.Hour;
    cout << "Введіть хвилини (0-59): ";
    cin >> t.Min;
    cout << "Введіть секунди (0-59): ";
    cin >> t.Sec;
    
    if (cin.fail() || CheckTime(t) != 0) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "\nНе вірний час! ";
        output_time(t);
        cout << "Код помилки: "
             << setfill('0') << setw(3) << CheckTime(t) << endl;
    }
    else {
        cout << "Введено коректний час: ";
        output_time(t);
    }
}

// Функція перевірки часу в 12-годинному форматі
int CheckTime(TTime T) {
    int result = 0; // спочатку помилок немає
    
    // Перевірка годин (0-12)
    if (T.Hour < 0 || T.Hour > 12) result += 100;
    // Перевірка хвилин (0-59)
    if (T.Min < 0 || T.Min > 59) result += 10;
    // Перевірка секунд (0-59)
    if (T.Sec < 0 || T.Sec > 59) result += 1;
    
    return result;
}

// Виведення у форматі hh:mm:ss з ведучими нулями
void output_time(const TTime &t) {
    cout << setfill('0') << setw(2) << t.Hour << ":"
         << setfill('0') << setw(2) << t.Min << ":"
         << setfill('0') << setw(2) << t.Sec << endl;
}
