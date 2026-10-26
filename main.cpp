#include "ArrayTemplate.h"


int main() {

    int size = 0;
    int* a = nullptr;

    cout << "input size: ";
    cin >> size;

    a = new int[size] {0};

    randArray(a, size, -100, 100);
    printArray(a, size);




}