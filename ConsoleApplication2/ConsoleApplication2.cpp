// ConsoleApplication2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <array>
#include <random>
#include <Windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    const int size = 10;
    array<double, size> masyv;

    
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_real_distribution<double> dist(-10.0, 10.0);
    for (int i = 0; i < size; i++) {
        masyv[i] = dist(gen);
    }

    
    cout << "Елементи масиву: ";
    for (int i = 0; i < size; i++) {
        cout << masyv[i];
        if (i < size - 1) {
            cout << ", ";
        }
    }
    cout << endl;

    
    double sum = 0.0;
    for (int i = 0; i < size; i++) {
        if (masyv[i] < 0) {
            sum += masyv[i];
        }
    }

    
    cout << "Сума від'ємних елементів: " << sum << endl;

    return 0;
}