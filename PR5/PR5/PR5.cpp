#include <iostream>
#include <cstdlib>
#include <ctime>
#include <random>

using namespace std;

void DELIT(int M, int &Max, int &Min) {
    Min = 0;
    Max = 0;
    
    for (int i = 2; i < M; i++) {
        if (M % i == 0) {
            if (Min == 0) {
                Min = i;
            }
            Max = i; 
        }
    }
    
    if (Min == 0) {
        Min = 1;
        Max = M;
    }
}

// рандом
void fillArrayRandom(double arr[], int size) {
    random_device rd;
    mt19937 gen(rd());
    uniform_real_distribution<> dis(0.0, 1.0);

    for (int i = 0; i < size; i++) {
        arr[i] = dis(gen);
    }
}

//ввод

void inputArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << "Введите элемент " << i + 1 << ": ";
        cin >> arr[i];
    }
}

// Функция для поиска минимального значения
int findMin(int arr[], int size) {
    int minVal = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < minVal) {
            minVal = arr[i];
        }
    }
    return minVal;
}

// Функция для вывода массива
void printArray(int arr[], int size) {
    cout << fixed;
    cout.precision(4);
    for (int i = 0; i < size; i++) {
        cout << arr[i];
        if (i < size - 1) {
            cout << " ";
        }
    }
    cout << endl;
}

void printArray(double arr[], int size) {
    cout << fixed;
    cout.precision(4);
    for (int i = 0; i < size; i++) {
        cout << arr[i];
        if (i < size - 1) {
            cout << " ";
        }
    }
    cout << endl;
}

//5.1.6

long long fact(int n) {
    if (n == 0) {
        return 1;
    }
    else {
        return fact(n - 1) * n;
    }
}

//5.1.7

long long fact2(int n) {
    long long result = 1;

    for (int i = 1; i <= n; i++) {
        result *= i;
    }

    return result;
}

//5.1.8

double power(double base, int exponent) {

    if (exponent == 0) {
        return 1;
    }

    else if (exponent < 0) {
        return 1.0 / power(base, -exponent);
    }

    else {
        return base * power(base, exponent - 1);
    }
}

    

//5.1.9

int sumOfDigits(int n) {
    if (n < 0) {
        return sumOfDigits(-n);
    }
    if (n == 0) {
        return 0;
    }
    return (n % 10) + sumOfDigits(n / 10);
}


// 5.1.10

double calculateAverage(int* arr, int size) {
    if (size == 0) return 0.0;

    int sum = 0;
    int* end = arr + size;

    for (int* ptr = arr; ptr < end; ptr++) {
        sum += *ptr;
    }

    return static_cast<double>(sum) / size;
}

// 5.1.11

void splitAndPrint(char* str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            str[i] = '\0';
        }
    }

    cout << "Слова: ";
    for (int i = 0; str[i] != '\0'; i++) {
        if (i == 0 || str[i - 1] == '\0') {
            cout << &str[i] << " ";
        }
    }
}

// 5.1.14

int pluss(int a, int b) { return a + b; }
int minuss(int a, int b) { return a - b; }

int calculate(int x, int y, int (*operation)(int, int)) {
    return operation(x, y);
}

int main() {
    setlocale(LC_ALL, "rus");
    srand(time(0));

    int size, size2;
    cout << "Введите размер первого массива (для ручного ввода): ";
    cin >> size;
    cout << "Введите размер второго массива (для случайного заполнения): ";
    cin >> size2;

    int* arr = new int[size];
    double* arr2 = new double[size2];

    inputArray(arr, size);
    printArray(arr, size);
    int minValue = findMin(arr, size);
    cout << "Минимальное значение в arr: " << minValue << endl;

    fillArrayRandom(arr2, size2);
    cout << "arr2" << endl;
    printArray(arr2, size2);

    delete[] arr;
    delete[] arr2;

    //5.1.5

    int M, Max, Min;

    cout << "Введите число M: ";
    cin >> M;

    if (M <= 0) {
        cout << "Число должно быть положительным!" << endl;
        return 1;
    }

    DELIT(M, Max, Min);

    cout << "Наименьший делитель кроме 1: " << Min << endl;
    cout << "Наибольший делитель кроме самого числа: " << Max << endl;

    //5.1.6

    int n;
    cout << "Введите число n: ";
    cin >> n;

    if (n < 0) {
        cout << "Факториал отрицательного числа не определен!" << endl;
        return 1;
    }

    long long result = fact(n);
    cout << n << "! = " << result << endl;

    //5.1.7

    int n2;
    cout << "Введите число n: ";
    cin >> n2;

    if (n2 < 0) {
        cout << "Факториал отрицательного числа не определен!" << endl;
        return 1;
    }

    long long result2 = fact2(n2);
    cout << n2 << "! = " << result2 << endl;

    //5.1.8

    int base;
    int exponent;

    cout << "Введите основание: ";
    cin >> base;
    cout << "Введите степень: ";
    cin >> exponent;

    int result3 = power(base, exponent);
    cout << base << " в степени " << exponent << " = " << result3 << endl;

    //5.1.9

    int inu;
    cout << "Введите число n: ";
    cin >> inu;

    int ssum = sumOfDigits(inu);
    cout << "sum числа n" << ssum;

    // 5.1.10
    const int size = 5;
    int arr[] = { 3, 6, 9, 12, 15 };

    cout << "Среднее арифметическое: " << calculateAverage(arr, size) << endl;

    // 5.1.15

    int sum = calculate(10, 5, pluss);



    return 0;
}