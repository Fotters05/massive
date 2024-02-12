#include <iostream>


using namespace std;

const int Line = 3;
const int Element = 5;

void inputArray(double arr[][Element]) {
    cout << "Введите числа для массива\n";
    int i = 0;
    do {
        cout << "Строка " << i + 1 << ":\n";
        int j = 0;
        do {
            cout << "Элемент " << j + 1 << ": ";
            cin >> arr[i][j];
            ++j;
        } while (j < Element);
        ++i;
    } while (i < Line);
}

double Middle(double row[], int size) {
    double sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += row[i];
    }
    return sum / size;
}

int main() {
    setlocale(LC_ALL, "Russian");
    double array[Line][Element];
    inputArray(array);

    cout << "Средние значения для каждой строки:\n";
    int i = 0;
    do {
        double avg = Middle(array[i], Element);
        cout << "Строка " << i + 1 << ": " << avg << std::endl;
        ++i;
    } while (i < Line);

    return 0;
    system("pause");
}