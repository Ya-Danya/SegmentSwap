#include <iostream>
#include <string>
#include <chrono>
#include <vector>
#include <algorithm>

using std::cin;
using std::cout;
using std::string;
using std::vector;



string reverseSegmentSwap(std::string str, int n) {
    int m = str.size();
    std::reverse(str.begin(), str.end());
    std::reverse(str.begin(), str.begin() + m - n);
    std::reverse(str.begin() + m - n, str.end());
    return str;
}
void shiftString(std::string& str) {
    int n = str.size();
    char temp = str[0];
    for (int i = 0; i < n-1; i++) {
        str[i] = str[i+1];
    }
    str[n-1] = temp;
}

string simpleSegmentSwap(std::string str, int n) {
    for (int i = 0; i < n; ++i) {
        shiftString(str);
    }

    return str;
}

int main() {
    cout << "Input string\n";
    string str;
    cin >> str;
    cout << "Input index of the first segment's end\n";
    int n;
    cin >> n;

    cout << "Reverse segment swap algo\n";
    // Начало измерения времени
    auto start1 = std::chrono::high_resolution_clock::now();

    cout << reverseSegmentSwap(str, n) << "\n";

    auto end1 = std::chrono::high_resolution_clock::now();

    // Выводим результат
    auto duration1 = std::chrono::duration_cast<std::chrono::nanoseconds>(end1 - start1);

    // Вывод времени выполнения
    cout << duration1.count() << "\n";

    cout << "Simple segment swap\n";

    // Начало измерения времени
    auto start2 = std::chrono::high_resolution_clock::now();

    cout << simpleSegmentSwap(str, n) << "\n";


    auto end2 = std::chrono::high_resolution_clock::now();

    // Выводим результат
    auto duration2 = std::chrono::duration_cast<std::chrono::nanoseconds>(end2 - start2);
    // Вывод времени выполнения
    cout << duration2.count() << "\n";

    cout << "Simple segment swap\n";

    // Начало измерения времени
    auto start3 = std::chrono::high_resolution_clock::now();

    cout << simpleSegmentSwap(str, n) << "\n";


    auto end3 = std::chrono::high_resolution_clock::now();

    // Выводим результат
    auto duration3 = std::chrono::duration_cast<std::chrono::nanoseconds>(end3 - start3);
    // Вывод времени выполнения
    cout << duration3.count() << "\n";

    cout << "Reverse segment swap algo\n";
    // Начало измерения времени
    auto start4 = std::chrono::high_resolution_clock::now();

    cout << reverseSegmentSwap(str, n) << "\n";

    auto end4 = std::chrono::high_resolution_clock::now();

    // Выводим результат
    auto duration4 = std::chrono::duration_cast<std::chrono::nanoseconds>(end4 - start4);

    // Вывод времени выполнения
    cout << duration4.count() << "\n";


    return 0;
}