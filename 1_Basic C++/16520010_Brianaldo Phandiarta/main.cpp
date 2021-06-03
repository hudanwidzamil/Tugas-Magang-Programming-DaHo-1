#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;

    cout << "Input:" << endl;
    cin >> n;

    string nama[n]; 
    int umur[n];

    for (int i = 0; i < n; i++) {
        cin >> nama[i] >> umur[i];
    }

    cout << endl << endl << "Output:" << endl;

    for (int i = 0; i < n; i++) {
        int max_idx_umur;

        max_idx_umur = i;

        for (int j = i + 1; j < n; j++) {
            if (umur[max_idx_umur] <= umur[j]) {
                max_idx_umur = j;
            }
        }

        int max_idx_nama;

        max_idx_nama = max_idx_umur;

        for (int j = i + 1; j < n; j++) {
            if (umur[max_idx_umur] == umur[j] && nama[max_idx_nama] > nama[j]) {
                max_idx_nama = j;
            }
        }

        int temp_umur;
        string temp_nama;

        temp_umur = umur[i];
        temp_nama = nama[i];

        umur[i] = umur[max_idx_nama];
        nama[i] = nama[max_idx_nama];

        umur[max_idx_nama] = temp_umur;
        nama[max_idx_nama] = temp_nama;

    }

    for (int i = 0; i < n; i++) {
        cout << nama[i] << ' ' << umur[i] << endl;
    }

    return 0;
}

// Perintah run
// g++ -o main main.cpp
// ./main
// Input:
// 3
// Andini 25
// Bambang 19
// Andi 25
//
//
// Output:
// Andi 25
// Andini 25
// Bambang 19