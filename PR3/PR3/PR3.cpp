#include <iostream>
#include <cmath>

using namespace std;

// 3.1.1

void real_numbers() {

    double a, b;

    cout << "Введите два различных вещественных числа:" << endl;
    cin >> a >> b;

    if (a > b) {
        cout << "Первое число больше: " << a << endl;
        cout << "Второе число меньше: " << b << endl;
    }
    else {
        cout << "Второе число больше: " << b << endl;
        cout << "Первое число меньше: " << a << endl;
    }
}

//3.1.2

void hit() {
    int x, y;

    cout << "Введите координаты точки (x y):" << endl;
    cin >> x >> y;

    if (y == 10) {
        cout << "Точка находится на границе областей" << endl;
    }
    else if (y < 10) {
        cout << "Точка находится в области 1" << endl;
    }
    else {
        cout << "Точка находится в области 2" << endl;
    }
}

//3.1.3

void hit2() {
    int x, y;

    cout << "Введите координаты точки (x y):" << endl;

    cout << "x = ";
    cin >> x;

    cout << "y = ";
    cin >> y;

    if (x == 0 && y == 0) {
        cout << "Точка находится в центре" << endl;
    }
    else if (x > 0 && y > 0) {
        cout << "Точка находится в первой четверти" << endl;
    }
    else if (x > 0 && y < 0) {
        cout << "Точка находится во второй четверти" << endl;
    }
    else if (x < 0 && y < 0) {
        cout << "Точка находится в третьей четверти" << endl;
    }
    else {
        cout << "Точка находится в четвертой четверти" << endl;
    }
}

//3.1.4 

void number_module() {

    int number;

    cout << "Ввдеите число: ";
    cin >> number;
    
    cout << "Модуль числа: " << (number > 0 ? number : number * (-1));
}

//3.1.5

void squares_of_shapes() {
    
    int a, c, d;
    double pi = 3.14159265358979323846;

    cout << "Радиус окружности равен ";
    cin >> a;

    cout << "Основание треугольника равно ";
    cin >> c;

    cout << "Высота треугольника равна ";
    cin >> d;

    double squares_circle = pi * a * a;

    double squares_triangle = 1 / 2 * c * d;

    cout << (squares_circle > squares_triangle ? "Площадь круга больше" : "Площадь треугольника больше") << endl;

}

//3.1.6

void equation() {
    
    int x;
    cout << "Введите X: ";
    cin >> x;

    double sin_x = sin(x);
    double y = (x > 0 ? sin_x * sin_x : 1 - 2 * sin_x * sin_x);

    cout << "Y = " << y << endl;
}

//3.1.7

void chart() {
    
    int x, y;
    cout << "x равен: ";
    cin >> x;

    if (x > 2) {
        y = 2;
    }
    else {
        y = x;
    }

    cout << "y = " << y << endl;
}

//3.1.8

void comparison_of_values() {
    
    double foot = 0.3048;
    double a, b;

    cout << "а: ";
    cin >> a;

    cout << "b: ";
    cin >> b;
    b = b * foot;

    cout << (a > b ? "a > b" : "b > a");
}

//3.1.9

void density() {
    
    double weight1, weight2, volume1, volume2;

    cout << "Масса1: ";
    cin >> weight1;

    cout << "Объем1: ";
    cin >> volume1;

    cout << "Масса2: ";
    cin >> weight2;

    cout << "Объем2: ";
    cin >> volume2;

    cout << (weight1 * volume1 > weight2 * volume2 ? "Материал 1-го тела имеет большую плотность" : "Материал 2-го тела имеет большую плотность");
}

//3.1.10

void three_digit_number() {

    int x;
    cout << "Введите трехзначное число";
    cin >> x;

    int square = x * x;

    int hundreds = x / 100;
    int tens = (x / 10) % 10;
    int units = x % 10;

    cout << (square > pow(hundreds, 3) + pow(tens, 3) + pow(units, 3) ? "Квадрат числа больше" : "Сумма кубов чисел оказалась больше");

}

//3.1.11

void inequality() {

    double a, b, c;
    
    cout << "a: ";
    cin >> a;

    cout << "b: ";
    cin >> b;

    cout << "c: ";
    cin >> c;

    cout << a << " < " << b << " < " << c << (a < b && b < c ? " - верно" : " - неверно");
}


int main() {

    setlocale(LC_ALL, "rus");

    density();

}