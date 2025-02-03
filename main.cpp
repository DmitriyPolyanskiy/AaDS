#include <iostream>

using namespace std;

int main()
{
    const int n = 3;

    //1. Одномерный массив плавающих чисел;
    float array1[n];

    //2. Указатель на тип float;
    float* pointer2;

    //3. Статический одномерный массив беззнаковых целых чисел;
    static uint32_t array3[n];

    //4. Указатель на массив unsignedint;
    uint32_t (*pointer4)[n];

    //5. Трехмерный массив символов;
    char array5[n][n][n];

    //6. Указатель на двумерный массив символов.
    char (*pointer6)[n][n];

//    cout << "Hello World!" << endl;

    // Проверить, заполнить, проверить
    for(int i = 0; i < n; i++){
        cout << array1[i] << "\n";
    }
    for(int i = 0; i < n; i++){
        cin >> array1[i];
    }
    for(int i = 0; i < n; i++){
        cout << array1[i] << "\n";
    }

    // Указатель
    pointer2 = (float*)&array1;
    cout << "Указатели массива\n";
    for(int i = 0; i < n; i++){
        cout << &array1[i] << "\n";
    }
    cout << "Наш указатель:\n" << pointer2 << "\n";

    return 0;
}

