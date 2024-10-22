#include <iostream>
using namespace std;

int main() {
    int n;

    do {
        cout << "Masukkan jumlah bintang (1 sampai 10): ";
        cin >> n;
    } while (n < 1 || n > 10);

    int i = n;
    do {
        int j = 1;
        do {
            cout << "* ";
            ++j;
        } while (j <= i);
        cout << endl;
        --i;
    } while (i >= 1);

    return 0;
}
