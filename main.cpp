#include "ArrayTemplate.h"

bool isEven(int num) {
    return num % 2 == 0;
}


int main() {

    int size = 0;
    int* a = nullptr;

    cout << "input size: ";
    cin >> size;

    a = new int[size] {0};

    randArray(a, size, -100, 100);
    printArray(a, size);

    cout << "Amount of even numbers: " << myCountIf<int>(a, size, isEven) << endl;
    cout << "Amount of odd numbers: " << myCountIf<int>(a, size, isOdd) << endl; //непарних
    cout << "Amount of positive numbers: " << myCountIf<int>(a, size, isPos) << endl;//додатніх
    cout << "Amount of negative numbers: " << myCountIf<int>(a, size, isNeg) << endl;//відʼємних
    cout << "Amount of numbers (ends 0): " << myCountIf<int>(a, size, isEndZero) << endl;//які закінчуються на 0


}