#include <iostream>
#include <cmath>
#include <string>

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

    cout << "Введеите число: ";
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

    double squares_triangle = 0.5 * c * d;

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

//3.1.12

void kalcul() {
    double a, b;
    int f;

    cout << "Введите первое число: ";
    cin >> a;

    cout << "Введите второе число: ";
    cin >> b;

    cout << "Выбор операции:\n1 - умножение\n2 - деление\n3 - сложение\n4 - вычитание\n";
    cin >> f;

    switch (f) {
    case 1:
        cout << a * b;
        break;
    case 2:
        cout << a / b;
        break;
    case 3:
        cout << a + b;
        break;
    case 4:
        cout << a - b;
        break;
    default:
        cout << "Ошибка";
        break;
    }
}

//3.1.13

void brush() {
    int f;

    cout << "Введите число: ";
    cin >> f;

    switch (f) {
    case 1:
        cout << "Мизинец";
        break;
    case 2:
        cout << "Безымянный";
        break;
    case 3:
        cout << "Средний";
        break;
    case 4:
        cout << "Указательный";
        break;
    case 5:
        cout << "Большой";
        break;
    case 6:
        cout << "Большой";
        break;
    case 7:
        cout << "Указательный";
        break;
    case 8:
        cout << "Средний";
        break;
    case 9:
        cout << "Безымянный";
        break;
    case 10:
        cout << "Мизинец";
        break;
    default:
        cout << "Ошибка";
        break;
    }
}

//3.1.14

void months() {
    int f;

    cout << "Введите число: ";
    cin >> f;

    switch (f) {
    case 1:
        cout << "Январь";
        break;
    case 2:
        cout << "Февраль";
        break;
    case 3:
        cout << "Март";
        break;
    case 4:
        cout << "Апрель";
        break;
    case 5:
        cout << "Май";
        break;
    case 6:
        cout << "Июнь";
        break;
    case 7:
        cout << "Июль";
        break;
    case 8:
        cout << "Август";
        break;
    case 9:
        cout << "Сентябрь";
        break;
    case 10:
        cout << "Октябрь";
        break;
    case 11:
        cout << "Ноябрь";
        break;
    case 12:
        cout << "Декабрь";
        break;
    default:
        cout << "Ошибка";
        break;
    }
}

//3.1.15

void play() {
    int f;

    cout << "Сделайте выбор\n1 - камень\n2 - ножницы\n3 - бумага" << endl;
    cin >> f;

    switch (f) {
    case 1:
        cout << "Бумага";
        break;
    case 2:
        cout << "Камень";
        break;
    case 3:
        cout << "Ножницы";
        break;
    }
}
//3.1.16

void convertor() {
    double num;
    int f;

    cout << "Введите расстояние в метрах: ";
    cin >> num;

    cout << "Сделайте выбор\n1 - км\n2 - см\n3 - мм" << endl;
    cin >> f;

    switch (f) {
    case 1:
        cout << num / 1000 << "км";
        break;
    case 2:
        cout << num * 100 << "см";
        break;
    case 3:
        cout << num * 1000 << "мм";
        break;
    }
}

//3.1.17

void nums() {
    int i = 0;
    while (i < 10) {
        cout << i;
        i++;
    }
}

//3.1.18

void factorial() {

    int i = 1;
    int num;
    int result = 1;

    cout << "Введите число: ";
    cin >> num;

    while (i <= num) {
        result *= i;
        i++;
    }
    cout << result;
}

void cvadr() {

    int start, end;

    cout << "Введите начало диапазона: ";
    cin >> start;
    cout << "Введите конец диапазона: ";
    cin >> end;

    while (start <= end) {
        cout << start << "^2 = " << start * start << endl;
        start++;
    }
}

//3.1.20

void multiplication_table() {
    int num = 1;
    int x = 1;

    while (x < 10) {
        cout << x << " * " << num << " = " << num * x << endl;
        x++;
    }
}

//3.1.21

void calculating_the_amount() {
    int start, end;
    int sum = 0;

    cout << "Введите начало диапазона: ";
    cin >> start;
    cout << "Введите конец диапазона: ";
    cin >> end;

    while (start <= end) {
        if (start % 2 == 0) {
            sum += start;
        }
        start++;
    }
    cout << "Сумма чётных чисел: " << sum;
}

//3.1.22

void number_search() {
    int num = 191;

    while (true) {
         if (num % 117 == 0) {
            cout << "Число " << num << " нацело делится на 117";
            break;
        }
        num++;
     }
}

//3.1.23

void search_() {
    char simb;
    int i = 0;

    cout << "Вводите символы (для завершения введите @):" << endl;

    do {
        cin >> simb;
        if (simb != '@') {
            i++;
        }
    } while (simb != '@');
        cout << "Количество символов до '@': " << i << endl;
}

//3.1.24

void sum_num() {
    string simb;
    int i = 0;
    float sum = 0;

    cout << "Вводите символы (для завершения введите @):" << endl;

    do {
        cin >> simb;
        if (simb != "@") {
            sum += stoi(simb);
            i++;
        }
    } while (simb != "@");
    cout << "Количество символов до '@': " << sum << endl;    
}

//3.1.25

void post() {
    int number;
    cin >> number;

    do {
        cout << number % 10 << endl;
        number /= 10;
    } while (number > 0);
}
//3.1.26

void contribution() {
    double deposit = 1000.0;
    double rate = 0.02;
    int month = 0;

    int month30 = 0;
    int month1200 = 0;

    do {
        month++;
        double increase = deposit * rate;
        deposit += increase;

        if (month30 == 0 && increase > 30.0) {
            month30 = month;
        }

        if (month1200 == 0 && deposit > 1200.0) {
            month1200 = month;
        }

    } while (month30 == 0 || month1200 == 0);

    cout << "a. Величина ежемесячного увеличения превысит 30 руб. в " << month30 << "-й месяц.\n";
    cout << "b. Размер вклада превысит 1200 руб. через " << month1200 << " месяцев.\n";
}

int main() {

    setlocale(LC_ALL, "rus");

    contribution();

}