#include <iostream>
using namespace std;

int main() {
    // Deklarasi dan inisialisasi sebuah array dua dimensi (3x3)
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // Menampilkan isi dari matriks
    cout << "Isi matriks:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl; // Pindah ke baris berikutnya
    }

    return 0;
}
