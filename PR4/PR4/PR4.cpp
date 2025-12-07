#include <iostream>
#include <cmath>
#include <vector>
#include <map>
#include <set>
#include <string>

using namespace std;

//4.1.1

void stolbic() {
    int arr[5] = { 1245, 13, 24, 54, 64 };
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << endl;
    }
}

//4.1.2

void sredn() {
    int arr[5] = { 45, 13, 24, 54, 64 };
    int sum = 0;
    int max_i = 0;
    int max_v = 0;
    int min_i = 0;
    int min_v = 0;


    for (int i = 0; i < 5; i++) {
        sum += arr[i];

        if (arr[i] > max_v) {
            max_v = arr[i];
            max_i = i;
        }

        if (arr[i] < min_v) {
            min_v = arr[i];
            min_i = i;
        }
    }

    cout << "Среднее значение: " << sum / 5 << endl;
    cout << "Максимальное значение: " << max_v << endl;
    cout << "Минимальное значение: " << min_v << endl;
    cout << "Индекс максимального значения: " << max_i << endl;
    cout << "Индекс минимального значения: " << min_i << endl;
    cout << "Максимальное значение больше минимального на: " << max_v - min_v << endl;
}

//4.1.3

void sred() {
    int arr[5] = { 45, 13, 24, 54, 64 };
    int sum = 0;
    int max_i = 0;
    int max_v = 0;
    int min_i = 0;
    int min_v = 0;


    for (int i = 0; i < 5; i++) {
        sum += arr[i];
    }

    for (int i = 0; i < 5; i++) {
        if (arr[i] > sum / 5) {
            cout << arr[i];
        }
    }
}

//4.1.4

void sdvig() {
    const int n = 10;
    int arr[n] = { 45, 13, 24, 54, 64, 56, 12, 24, 36, 49 };
    int shifted[n];
    int shift = 8;

    for (int i = 0; i < n; i++) {
        int newIndex = (i + shift) % n;
        shifted[newIndex] = arr[i];
    }

    cout << "Исходный массив: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "После сдвига вправо на 8 позиций: ";
    for (int i = 0; i < n; i++) {
        cout << shifted[i] << " ";
    }
    cout << endl;
}

//4.1.5

void vivod() {
    const int n = 10;
    int arr[n] = { 45, 13, 24, 54, 64, 56, 12, 24, 36, 49 };
    int a = 5;
    int b = 9;

    for (int i = a; i <= b; i++) {
        cout << arr[i] << " ";
    }
}

//4.1.6

void znak() {
    const int n = 10;
    int arr[n] = { 45, 13, -24, 54, -64, 56, -12, -24, 36, 49 };
    int znak = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] * arr[i + 1] < 0) {
            znak++;
        }
    }
    cout << znak / 2;
}

//4.1.7

void dio() {
    const int N = 10;
    double arr[N];

    srand(time(0));

    for (int i = 0; i < N; i++) {
        arr[i] = static_cast<double>(rand()) / RAND_MAX;
    }

    for (int i = 0; i < N; i++) {
        cout << string(i, ' ') << arr[i] << endl;
    }
}

//4.1.8

void glav_dio() {
    const int N = 4;
    char arr[N];

    for (int i = 0; i < N; i++) {
        cout << "Введите элемент [" << i << "]: ";
        cin >> arr[i];
    }

    cout << "\nРезультат вывода по побочной диагонали:\n";

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N - 1 - i; j++) {
            cout << " ";
        }
        cout << arr[i] << endl;
    }
}

//4.1.9

void search_target() {
    int arr[5] = { 1245, 13, 24, 54, 64 };
    int target;
    int index = -1;

    cout << "Введите значение для поиска: ";
    cin >> target;

    for (int i = 0; i < 5; i++) {
        if (arr[i] == target) {
            index = i;
            break;
        }
    }

    if (index != -1) {
        cout << "Элемент " << target << " найден по индексу: " << index << endl;
    }
    else {
        cout << "Элемент " << target << " не найден в массиве." << endl;
    }

}

//4.1.10

void nums_counter() {
    int n;
    cout << "Введите натуральное число: ";
    cin >> n;

    bool* digits = new bool[10];

    for (int i = 0; i < 10; i++) {
        digits[i] = false;
    }

    int temp = n;

    while (temp > 0) {
        int digit = temp % 10;
        digits[digit] = true;
        temp /= 10;
    }


    int count = 0;
    for (int i = 0; i < 10; i++) {
        if (digits[i]) {
            count++;
        }
    }

    cout << "Количество различных цифр в числе " << n << ": " << count << endl;

    delete[] digits;
}


//4.1.11

void replacement() {
    int N;
    cout << "Введите число N (0-999999): ";
    cin >> N;

    if (N == 0) {
        cout << 1 << endl;
    }

    vector<int> digits;
    int temp = N;
    while (temp > 0) {
        digits.push_back(temp % 10);
        temp /= 10;
    }

    for (int i = 0; i < digits.size(); i++) {
        if (digits[i] % 2 == 0) {
            digits[i] += 1;
        }
    }

    int result = 0;
    for (int i = 0; i < digits.size(); i++) {
        result += digits[i] * pow(10, i);
    }

    cout << "Результат: " << result << endl;
}

//4.1.12

void proizv() {
    
}

//4.1.13

void infa() {
    
    const int n = 22;
    int grades[n];

    cout << "Введите оценки 22 учеников: ";
    for (int i = 0; i < n; i++) {
        cin >> grades[i];
    }

    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum += grades[i];
    }
    double average = sum / n;

    int count = 0;
    cout << "Номера учеников с оценкой ниже средней: ";
    for (int i = 0; i < n; i++) {
        if (grades[i] < average) {
            cout << i << " ";
            count++;
        }
    }

    cout << "\nКоличество учеников с оценкой ниже средней: " << count << endl;
}

//4.1.14

void double_sum() {
    int n;

    cout << "Введите размер квадратной матрицы: ";
    cin >> n;

    int** matrix = new int* [n];
    for (int i = 0; i < n; i++) {
        matrix[i] = new int[n];
    }

    cout << "Введите элементы матрицы " << n << "x" << n << ":\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "Элемент [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }

    cout << "\nВведенная матрица:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    int* rowSums = new int[n]();
    int* colSums = new int[n]();
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            rowSums[i] += matrix[i][j];
            colSums[j] += matrix[i][j];
        }
    }

    cout << "\nСуммы по строкам:\n";
    for (int i = 0; i < n; i++) {
        cout << "Строка " << i << ": " << rowSums[i] << endl;
    }

    cout << "\nСуммы по столбцам:\n";
    for (int j = 0; j < n; j++) {
        cout << "Столбец " << j << ": " << colSums[j] << endl;
    }

    for (int i = 0; i < n; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;
    delete[] rowSums;
    delete[] colSums;
}

// 4.1.15 и 4.1.16

void transpon() {
    int n;

    cout << "Введите размер квадратной матрицы: ";
    cin >> n;


    int** matrix = new int* [n];
    for (int i = 0; i < n; i++) {
        matrix[i] = new int[n];
    }

    cout << "Введите элементы матрицы " << n << "x" << n << ":\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "Элемент [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }

    cout << "\nИсходная матрица:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    int** transposed = new int* [n];
    for (int i = 0; i < n; i++) {
        transposed[i] = new int[n];
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            transposed[j][i] = matrix[i][j];
        }
    }


    cout << "\nТранспонированная матрица:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << transposed[i][j] << " ";
        }
        cout << endl;
    }

    bool isSymmetric = true;
    for (int i = 0; i < n / 2; i++) {
        for (int j = 0; j < n; j++) {
            if (transposed[i][j] != transposed[n - 1 - i][j]) {
                isSymmetric = false;
                break;
            }
        }
        if (!isSymmetric) break;
    }

    cout << "\nПроверка симметрии относительно горизонтали:\n";
    if (isSymmetric) {
        cout << "Транспонированная матрица симметрична относительно горизонтали.\n";
    }
    else {
        cout << "Транспонированная матрица НЕ симметрична относительно горизонтали.\n";
    }

    for (int i = 0; i < n; i++) {
        delete[] matrix[i];
        delete[] transposed[i];
    }
    delete[] matrix;
    delete[] transposed;
}

//4.1.17

void double_mas() {
    int n;

    cout << "Введите размер квадратной матрицы: ";
    cin >> n;

    int** matrix = new int* [n];
    for (int i = 0; i < n; i++) {
        matrix[i] = new int[n];
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matrix[i][j] = (i == j) ? 1 : 0;
        }
    }

    cout << "\nИсходная матрица с единицами по главной диагонали:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout<< matrix[i][j] << " ";
        }
        cout << endl;
    }

    int row1, row2;
    cout << "\nВведите два номера строк для обмена (от 0 до " << n - 1 << "): ";
    cin >> row1 >> row2;

    if (row1 != row2) {
        for (int j = 0; j < n; j++) {
            int temp = matrix[row1][j];
            matrix[row1][j] = matrix[row2][j];
            matrix[row2][j] = temp;
        }
        cout << "Строки " << row1 << " и " << row2 << " успешно поменяны местами.\n";
    }
    else {
        cout << "Строки одинаковые, обмен не требуется.\n";
    }

    cout << "\nМатрица после обмена строк:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < n; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;
}

//4.1.19

bool isMagicSquare(int** matrix, int n) {

    int magicSum = 0;
    for (int j = 0; j < n; j++) {
        magicSum += matrix[0][j];
    }

    for (int i = 1; i < n; i++) {
        int rowSum = 0;
        for (int j = 0; j < n; j++) {
            rowSum += matrix[i][j];
        }
        if (rowSum != magicSum) {
            return false;
        }
    }

    for (int j = 0; j < n; j++) {
        int colSum = 0;
        for (int i = 0; i < n; i++) {
            colSum += matrix[i][j];
        }
        if (colSum != magicSum) {
            return false;
        }
    }

    int mainDiagSum = 0;
    for (int i = 0; i < n; i++) {
        mainDiagSum += matrix[i][i];
    }
    if (mainDiagSum != magicSum) {
        return false;
    }

    int secondaryDiagSum = 0;
    for (int i = 0; i < n; i++) {
        secondaryDiagSum += matrix[i][n - 1 - i];
    }
    if (secondaryDiagSum != magicSum) {
        return false;
    }

    set<int> uniqueNumbers;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] < 1 || matrix[i][j] > n * n) {
                return false;
            }
            uniqueNumbers.insert(matrix[i][j]);
        }
    }

    if (uniqueNumbers.size() != n * n) {
        return false;
    }

    return true;
}

void is() {
    int n;

    cout << "Введите размер квадратной матрицы: ";
    cin >> n;

    int** matrix = new int* [n];
    for (int i = 0; i < n; i++) {
        matrix[i] = new int[n];
    }

    cout << "Введите элементы матрицы " << n << "x" << n << ":\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    cout << "\nВведенная матрица:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }

    if (isMagicSquare(matrix, n)) {
        cout << "\n✓ Магический квадрат" << endl;
        int magicSum = 0;
        for (int j = 0; j < n; j++) {
            magicSum += matrix[0][j];
        }
        cout << "Магическая сумма: " << magicSum << endl;
    }
    else {
        cout << "\nНе магический квадрат" << endl;
    }

    for (int i = 0; i < n; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;
}


int main()
{
    setlocale(LC_ALL, "rus");

    is();
}
    