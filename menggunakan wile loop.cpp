#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Masukkan jumlah bintang pada baris pertama: ";
    cin >> n;

    int i = n;
    while (i >= 1) {
        int j = 1;
        while (j <= i) {
            cout << "* ";
            ++j;
        }
        cout << endl;
        --i;
    }

    return 0;
}
