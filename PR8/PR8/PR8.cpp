#include <cstdlib>
#include <ctime>
#include <string>
#include <iostream>
#include <cctype>
#include <vector>
#include <algorithm>

using namespace std;

// 1

void firstAndLastName() {

    string name, surname;
    cout << "Введите Фамилию: ";
    cin >> surname;

    cout << "Введите имя:";
    cin >> name;

    cout << surname << " " << name;
}

// 2

void stolic() {
    
    string country, capital;

    cout << "Введите название государства: ";
    cin >> country;

    cout << "Введите название столицы: ";
    cin >> capital;
    
    cout << "Столица государства " << country << " – город " << capital << endl;
}


// 3

void compareTwoSurnamesLonger() {
    string surname1, surname2;

    cout << "Введите первую фамилию: ";
    cin >> surname1;

    cout << "Введите вторую фамилию: ";
    cin >> surname2;

    if (surname1.length() > surname2.length()) {
        cout << "Первая фамилия длиннее: " << surname1 << endl;
    }
    else if (surname2.length() > surname1.length()) {
        cout << "Вторая фамилия длиннее: " << surname2 << endl;
    }
    else {
        cout << "Фамилии одинаковой длины" << endl;
    }
}

// 4

void printThirdCharSimple() {
    string word;
    cout << "Введите слово: ";
    cin >> word;
    cout << "Третий символ: " << word[2] << endl;
}

// 5 
void cloun() {
    string cloun = "клоун";
    string uklon, kolun;
    uklon = cloun[3] + cloun[0] + cloun[1] + cloun[2] + cloun[4];
    kolun = cloun[0] + cloun[2] + cloun[1] + cloun[3] + cloun[4];


    cout << "Третий символ: " << uklon << endl;
    cout << "Третий символ: " << kolun << endl;
}

// 6 

int vhod(string str) {

    int count = 0;
    int len = str.length();

    if (len < 2) {
        return 0;
    }

    for (int i = 0; i < len - 1; i++) {
        if (str[i] == 'р' && str[i + 1] == 'а') {
            count++;
        }
    }
    return count;
}

// 7 

int vhod2(string str) {
    int counter = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '.' || str[i] == '!' || str[i] == '?') {
            counter += 1;
        }
    }
    return counter;
}

// 8 

void parseFileName(const string& fullPath) {
    int start = 0;
    int pos = fullPath.find('\\');

    while (pos != string::npos) {
        cout << fullPath.substr(start, pos - start) << endl;
        start = pos + 1;
        pos = fullPath.find('\\', start);
    }

    cout << fullPath.substr(start) << endl;
}

// 9

int sumDigitsInText(string text) {
    int sum = 0;
    for (int i = 0; text[i] != '\0'; i++) {
        if (isdigit(text[i])) {
            sum += static_cast<int>(text[i] - '0');
        }
    }
    return sum;
}

// 10

int sumDigitsInText1(string text) {
    int sum = 0;
    for (int i = 0; text[i] != '\0'; i++) {
        if (isdigit(text[i])) {
            sum *= static_cast<int>(text[i] - '0');
        }
    }
    return sum;
}

// 11

void size(string text) {
    int size = 0;
    for (int i = 0; text[i] != '\0'; i++) {
        size++;
    }
}

// 12

bool isPalindrome(string s) {
    if (s.empty()) {
        return true; // Пустая строка считается палиндромом
    }

    int left = 0;
    int right = s.length() - 1;

    while (left < right) {

        if (left < right && !isalnum(s[left])) left++;
        else if (left < right && !isalnum(s[right])) right--;

        if (tolower(s[left]) != tolower(s[right])) {
            return false;
        }

        left++;
        right--;
    }

    return true;
}

// 13

void ransStr() {
    int n;
    cout << "Сколько букв нужно? ";
    cin >> n;

    srand(time(0));
    string s = "";

    for (int i = 0; i < n; i++) {
        if (rand() % 2 == 0) {
            s += 'A' + rand() % 26;
        }
        else {
            s += 'a' + rand() % 26;
        }
    }
    cout << "Результат: " << s << endl;
}

// 14

string caesarEncrypt(string text, int key) {
    string result = "";

    for (int i = 0; i < text.length(); i++) {
        if (isupper(text[i]))
            result += char(int(text[i] + key - 65) % 26 + 65);
        else if (islower(text[i]))
            result += char(int(text[i] + key - 97) % 26 + 97);
        else
            result += text[i];
    }

    return result;
}

// 15
 
void realStr(string str) {

    bool isNumber = true;

    for (int i = 0; i < str.length(); i++) {
        if (str[i] < '0' || str[i] > '9') {
            isNumber = false;
            break;
        }
    }

    if (isNumber && !str.empty()) {
        cout << "Это число!";
    }
    else {
        cout << "Это не число";
    }
}
// 16

void inter(string s) {

    string result = "";

    for (int i = 0; i < s.length(); i++) {

        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')) {
            char letter = s[i];
            i++;

            int num = 0;
            while (i < s.length() && s[i] >= '0' && s[i] <= '9') {
                num = num * 10 + (s[i] - '0');
                i++;
            }
            i--;

            for (int j = 0; j < num; j++) {
                result += letter;
            }
        }
    }

    cout << "Результат: " << result << endl;
}

// 2.1



// 2.2

vector<string> getAllSubsets(const string& str) {
    int n = str.length();
    vector<string> result;

    for (int mask = 0; mask < (1 << n); mask++) {
        string subset = "";
        for (int i = 0; i < n; i++) {
            if (mask & (1 << i)) {
                subset += str[i];
            }
        }
        result.push_back(subset);
    }
    
    sort(result.begin(), result.end(), [](const string& a, const string& b) {
        if (a.length() != b.length()) {
            return a.length() < b.length();
        }
        return a < b;
        });

    return result;
}

int main() {
    setlocale(LC_ALL, "Russian");

    realStr("55sadf");

    return 0;
};