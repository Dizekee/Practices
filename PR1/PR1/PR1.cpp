#include <iostream>
#include <string>
using namespace std;

// 1

void greeting_the_user() {
    
    string name;
    int age;

    cout << "Введите ваше имя: ";
    cin >> name;

    cout << "Введите ваш возраст: ";
    cin >> age;
    
    cout << "Привет, " << name << "! Вам " << age << " лет." << endl;

}

// 2 

void calculator() {

    int num1, num2;

    cout << "Введите первое число: ";
    cin >> num1;

    cout << "Введите второе число: ";
    cin >> num2;

    cout << "cложение " << num1 + num2 << endl;
    cout << "вычитание " << num1 - num2 << endl;
    cout << "умножение " << num1 * num2 << endl;

    if (num2 != 0) {
        cout << "деление " << num1 / num2 << endl;
    }
    else {
        cout << "Деление на ноль невозможно!" << endl;
    }
}

// 3

void transformation_units_of_time() {
    
    int meters;

    cout << "Введите длину в метрах: ";
    cin >> meters;

    cout << "Длина в сантиметрах: " << meters * 100 << " см" << endl;
    cout << "Длина в миллиметрах: " << meters * 1000 << " мм" << endl;
    cout << "Длина в километрах: " << meters / 1000 << " км" << endl;
}

// 4

void converter_currency() {
    
    double rubles;

    cout << "Введите сумму в рублях: ";
    cin >> rubles;

    double dollars = rubles / 75;

    cout << "В долларах: " << rubles / 75;

}

// 5

void definition_age() {

    int birth_year, current_year;

    cout << "Введите год вашего рождения: ";
    cin >> birth_year;

    cout << "Введите текущий год: ";
    cin >> current_year;

    cout << "Ваш возраст: " << current_year - birth_year;
}

// 6

void calculation() {

    int numb;

    cout << "Введите длину в метрах: ";
    cin >> numb;

    cout << "x^2 -6x + 9 = " << numb * numb - 6 * numb + 9;
}

int main()
{
    
}
