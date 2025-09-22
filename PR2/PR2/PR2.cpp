#include <iostream>
using namespace std;

//3.1

void converter_santim() {

    int ras;
    cout << "Введите расстояние в см: ";
    cin >> ras;

    cout << ras * 0.01 << "метров.";
}

//3.2

void converter_kg() {
    int mass;
    cout << "Введите значение в кг: ";
    cin >> mass;

    cout << int(mass * 0.01) << " центнеров.";
}

//3.3

void days() {
    int den;
    cout << "Сколько дней прошло?";
    cin >> den;

    cout << den / 7 << " недель";
}

//3.4

void apples() {

    int korz;
    cout << "Сколько яблок в козине? ";
    cin >> korz;

    cout << "У детей по " << korz / 2 << " яблок\n";
    cout << "В корзине осталось " << korz % 2 << " ябок";
}

//3.5

void kvadrat() {
    int polH, polW, cvadr;
    cout << "Длина: ";
    cin >> polH;

    cout << "Ширина: ";
    cin >> polW;

    cout << "Сторона квадрата: ";
    cin >> cvadr;

    if (polH > cvadr && polW > cvadr) {
        cout << "Получится " << ((polH / cvadr) * (polW / cvadr));
    }
    else {
        cout << "Слишком маленькое поле";
    }
}

// 3.6

void kupe() {
    int mesto;
    cout << "Введите место: ";
    cin >> mesto;

    cout << "Купе " << (mesto / 4 + 1);
}

//3.7

void search_floor1() {

    int flat;
    cout << "Введите номер квартиры с 1 по 15: ";
    cin >> flat;
    
    int floor = flat / 3;

    if (floor >= 0 && floor < 5) {
        cout << "Этаж " << floor + 1;
    }
    else if (floor == 5) {
        cout << "Этаж " << floor;
    }
    else { 
        cout << "Введите правитьный номер квартиры";
    }
}

//3.8

void time() {
    int sec;

    cout << "Сколько сек прошло?";
    cin >> sec;

    cout << "Прошло " << sec / 3600 << "часов\n";
    cout << "Прошло " << (sec % 3600) / 60 << "минут\n";
    cout << "Прошло " << sec % 60 << "секунд\n";
}

//3.9

void search_of_the_day() {
    int k, n, d;

    cout << "Введите число k (1 <= k <= 365): ";
    cin >> k;

    n = (k - 1) % 7;
    cout << "1. n = " << n << endl;

    n = (k - 1) % 7;
    cout << "2. n = " << n << endl;

    cout << "Введите число d (1 <= d <= 7): ";
    cin >> d;
    n = (k - 1 + d - 1) % 7;
    cout << "3. n = " << n << endl;
}

//3.12

void search_floor() {
    int number;
    cout << "Введите номер квартиры c 1 по 20: ";
    cin >> number;

    int floor = (number - 1) / 5;
    int position = (number - 1) % 5;

    cout << "Квартира находится на " << floor << " этаже" << endl;
    cout << "Это " << position << "-я квартира на этаже" << endl;
}

//3.13

void strings() {

    int num;
    cout << "Введите число: ";
    cin >> num;

    int row = num / 5;

    cout << (row + 1) << endl;
}

//3.14

void house() {
    int num;
    cout << "Введите номер квартиры: ";
    cin >> num;

    const int floors = 9;
    const int flats = 9 * 6;

    int entrance = num / flats + 1;
    int floor = (num % flats) / 7;
    int position = (num % 6) + 1;

    cout << "Подъезд " << entrance << endl;
    cout << "Этаж" << floor << endl;
    cout << "По счету " << position << endl;
}

//3.15

void warehouse() {

    int num;
    cout << "Введите номер: ";
    cin >> num;

    int tier = num / 9;
    int section = (num % 15 * 8) / 16;

    cout << "Секция: " << section << endl;
    cout << "Ярус: " << tier << endl;       
}

//3.16

void threedigit_number() {
    
    int num;
    cout << "Введите трехзначное число: ";
    cin >> num;

    int units = num % 10;
    int tens = (num / 10) % 10;
    int hundreds = num / 100; 

    cout << "число единиц " << units << endl;
    cout << "число десятков " << tens << endl;
    cout << "сумма " << units + tens + hundreds << endl;
    cout << "произведение " << units * tens * hundreds << endl;
}

//3.17

void number4() {

    int num;
    cout << "Введите число: ";
    cin >> num;

    int thousands = num / 1000;
    int hundreds = (num / 100) % 10;
    int tens = (num / 10) % 10;
    int units = num % 10;

    int reverse = units * 1000 + tens * 100 + hundreds * 10 + thousands;

    int swap_pairs = hundreds * 1000 + thousands * 100 + units * 10 + tens;

    int swap_middle = thousands * 1000 + tens * 100 + hundreds * 10 + units;

    int swap_groups1 = tens * 1000 + units * 100 + thousands * 10 + hundreds;

    cout << "1. " << reverse << std::endl;
    cout << "2. " << swap_pairs << std::endl;
    cout << "3. " << swap_middle << std::endl;
    cout << "4. " << swap_groups1 << " (с выделением цифр)" << endl;
}

int main() {
    setlocale(LC_ALL, "rus");

    number4();

}