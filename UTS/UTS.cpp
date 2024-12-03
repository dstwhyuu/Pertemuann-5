#include <iostream>
using namespace std;


double add(double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);
double divide(double a, double b);
void printMenu();


double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    if (b == 0) {
        cout << "Error! Division by zero." << endl;
        return 0;
    }
    return a / b;
}

void printMenu() {
    cout << "--------------------" << endl;
    cout << "     KALKULATOR" << endl;
    cout << "--------------------" << endl;
    cout << "1. Tambah (+)" << endl;
    cout << "2. Kurang (-)" << endl;
    cout << "3. Kali (*)" << endl;
    cout << "4. Bagi (/)" << endl;
    cout << "5. Keluar" << endl;
    cout << "Pilih menu (1,2,3,4,5): ";
}

int main() {
    int choice;
    double num1, num2, result;

    do {
        printMenu();
        cin >> choice;


        if (choice == 5) {
            cout << "Terima kasih telah menggunakan kalkulator." << endl;
            break;
        }


        cout << "Masukkan angka pertama: ";
        cin >> num1;
        cout << "Masukkan angka kedua: ";
        cin >> num2;


        switch (choice) {
            case 1:
                result = add(num1, num2);
                cout << "Hasil: " << result << endl;
                break;
            case 2:
                result = subtract(num1, num2);
                cout << "Hasil: " << result << endl;
                break;
            case 3:
                result = multiply(num1, num2);
                cout << "Hasil: " << result << endl;
                break;
            case 4:
                result = divide(num1, num2);
                cout << "Hasil: " << result << endl;
                break;
            default:
                cout << "Pilihan tidak valid. Coba lagi." << endl;
        }


        char cont;
        cout << "Ingin melanjutkan? (y/n): ";
        cin >> cont;
        if (cont == 'n' || cont == 'N') {
            break;
        }

    } while (true);

    return 0;
}
