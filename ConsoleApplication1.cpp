#include <iostream>
using namespace std;
enum class months {
    january = 1,
    february,
    march,
    april,
    may,
    june,
    july,
    august,
    september,
    october,
    november,
    december
};
int main()
{
    setlocale(LC_ALL, "Russian");
    int month = -1;
    while (month != 0) {
        cout << "Введите номер месяца: ";
        cin >> month;
        if (month < 0 or month > 12) {
            cout << "Неправильный номер!" << '\n';
        }

        switch (month) {
        case static_cast<int>(months::january):
            cout << "Январь" << '\n';
            break;
        case static_cast<int>(months::february):
            cout << "Февраль" << '\n';
            break;
        case static_cast<int>(months::march):
            cout << "Март" << '\n';
            break;
        case static_cast<int>(months::april):
            cout << "Апрель" << '\n';
            break;
        case static_cast<int>(months::may):
            cout << "Май" << '\n';
            break;
        case static_cast<int>(months::june):
            cout << "Июнь" << '\n';
            break;
        case static_cast<int>(months::july):
            cout << "Июль" << '\n';
            break;
        case static_cast<int>(months::august):
            cout << "Август" << '\n';
            break;
        case static_cast<int>(months::september):
            cout << "Сентябрь" << '\n';
            break;
        case static_cast<int>(months::october):
            cout << "Октябрь" << '\n';
            break;
        case static_cast<int>(months::november):
            cout << "Ноябрь" << '\n';
            break;
        case static_cast<int>(months::december):
            cout << "Декабрь" << '\n';
            break;
        }
      
    }
    cout << "До свидания!";
    return 0;
}
