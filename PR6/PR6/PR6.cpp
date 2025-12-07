#include <iostream>
#include <cstdlib>
#include <vector>
#include <ctime>

using namespace std;

// 1

void swap(int* num1, int* num2) {
    int num3 = *num1;
    *num1 = *num2;
    *num2 = num3;
}

void swapRun() {
    int num1;
    int num2;

    cout << "Vvedite chisla";
    cin >> num1;
    cin >> num2;

    swap(&num1, &num2);

    cout << num1 << " " << num2 << endl;
}

// 2


void plusOneZnach(int znach) {
    znach++;
}

void plusOneLink(int& znach) {
    znach++;
}

void plusOneRun() {
    int num;
    cout << "Vvedi chislo: ";

    cin >> num;

    plusOneZnach(num);

    cout << num << endl;

    plusOneLink(num);

    cout << num << endl;
}

// 3

int arrSum(int* arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += *(arr + i);
    }
    return sum;
}

void arrSum() {
    const int size = 5;
    int arr[size] = { 1, 2, 3, 4, 5 };

    cout << "Summ: " << arrSum(arr, size);
}

// 4

void doubleArr() {
    const int size = 5;
    int numbers[size] = { 9, 65, 0, 87, 8 };

    for (double num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    for (int& num : numbers) {
        num *= 2;
    }

    for (double num : numbers) {
        cout << num << " ";
    }
    cout << endl;
}

// 5

void findMinMax(int* arr, int size, int& minVal, int& maxVal) {
    minVal = *arr;
    maxVal = *arr;

    for (int i = 1; i < size; i++) {
        if (*(arr + i) < minVal) {
            minVal = *(arr + i);
        }
        if (*(arr + i) > maxVal) {
            maxVal = *(arr + i);
        }
    }
}

void findMinMaxRun() {

    const int size = 6;
    int arr[size] = { 5, 2, 8, 1, 9, 3 };
    int minVal, maxVal;

    findMinMax(arr, size, minVal, maxVal);

    cout << "Arr: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Min: " << minVal << endl;
    cout << "Max: " << maxVal << endl;
}

// 6

void reverseArr(int* arr, int size) {
    int* start = arr;
    int* end = arr + size - 1;

    while (start < end) {
        int temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

void reversArrRun() {
    int arr[] = { 1, 2, 3, 4, 5 };
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Arr: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    reverseArr(arr, size);

    cout << "Revers arr: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// 7

int* randomArr(int size) {
    int* arr = new int[size];

    srand(time(0));
    for (int i = 0; i < size; i++) {
        *(arr + i) = rand() % 100;
    }

    return arr;
}

void randomArrRun() {
    int size = 5;
    int* arr = randomArr(size);

    cout << "Arr: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    delete[] arr;
}

// 8

bool compareArrays(int* arr1, int* arr2, int size) {
    for (int i = 0; i < size; i++) {
        if (*(arr1 + i) != *(arr2 + i)) {
            return false;
        }
    }
    return true;
}

void compareArraysRun() {
    int arr1[] = { 1, 2, 3, 4, 5 };
    int arr2[] = { 1, 2, 3, 4, 5 };
    int arr3[] = { 1, 2, 3, 4, 6 };
    int size = 5;

    cout << "arr1 = arr2: " << (compareArrays(arr1, arr2, size) ? "true" : "false") << endl;
    cout << "arr1 = arr3: " << (compareArrays(arr1, arr3, size) ? "true" : "false") << endl;
}

// 9 

void copyArr(int* src, int* dest, int size) {
    for (int i = 0; i < size; i++) {
        *(dest + i) = *(src + i);
    }
}

void copyArrRun() {
    int src[] = { 1, 2, 3, 4, 5 };
    int dest[5];

    copyArr(src, dest, 5);

    for (int i = 0; i < 5; i++) {
        cout << dest[i] << " ";
    }
}

// 10

double calculateAverage(int* arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += *(arr + i);
    }
    return static_cast<double>(sum) / size;
}

void calculateAverageRun() {
    int arr[] = { 10, 20, 30, 40, 50 };
    double avg = calculateAverage(arr, 5);
    cout << "Average: " << avg;
}

// 11

int splitString(char* str, char** words, int maxWords) {
    int wordCount = 0;
    words[wordCount++] = str;

    for (char* ptr = str; *ptr; ptr++) {
        if (*ptr == ' ') {
            *ptr = '\0';
            if (wordCount < maxWords) {
                words[wordCount++] = ptr + 1;
            }
        }
    }

    return wordCount;
}

void splitStringRun() {
    char text[] = "C++ Pointers and References Practice";
    const int MAX_WORDS = 10;
    char* words[MAX_WORDS];

    int wordCount = splitString(text, words, MAX_WORDS);

    cout << "Words:\n";
    for (int i = 0; i < wordCount; i++) {
        cout << words[i] << "\n";
    }
}

// 12

void addBytes(const unsigned char* a, const unsigned char* b, unsigned char* result, int n) {
    int carry = 0;

    for (int i = 0; i < n; ++i) {
        int sum = a[i] + b[i] + carry;
        result[i] = static_cast<unsigned char>(sum & 0xFF);
        carry = sum >> 8;
    }
}

void addBytesRun() {
    const int N = 4;
    unsigned char num1[N] = { 0x01, 0x02, 0x03, 0x04 };
    unsigned char num2[N] = { 0xFF, 0xFE, 0xFD, 0xFC };
    unsigned char result[N];

    addBytes(num1, num2, result, N);

    cout << "Result: ";
    for (int i = 0; i < N; ++i) {
        cout << hex << (int)result[i] << " ";
    }
    cout << endl;
}

// 14

double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

void calculate(double (*operation)(double, double), double x, double y) {
    double result = operation(x, y);
    cout << "Result: " << result << endl;
}

void RynCalculate() {
    double num1, num2;
    char operation;

    cout << "Vvedite 2 chisla: ";
    cin >> num1 >> num2;

    cout << "+/-: ";
    cin >> operation;

    if (operation == '+') {
        calculate(add, num1, num2);
    }
    else if (operation == '-') {
        calculate(subtract, num1, num2);
    }
    else {
        cout << "Error" << endl;
    }
}

// A1

struct Rectangle {
    double width;
    double height;
};

double calculateArea(const Rectangle* rect) {
    if (rect == nullptr) {
        cout << "Error" << endl;
        return 0.0;
    }
    return rect->width * rect->height;
}

void calculatorAreaRun() {
    Rectangle rect;
    rect.width = 5.5;
    rect.height = 3.2;

    double area = calculateArea(&rect);
    cout << "Площадь прямоугольника: " << area << endl;
}


int main(int argc, char* argv[])
{
    RynCalculate();

}
