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

        if (nama[max_idx_umur] < nama[i]) {
            int temp_umur;
            string temp_nama;

            temp_umur = umur[i];
            temp_nama = nama[i];

            umur[i] = umur[max_idx_umur];
            nama[i] = nama[max_idx_umur];

            umur[max_idx_umur] = temp_umur;
            nama[max_idx_umur] = temp_nama;
        }

    }

    for (int i = 0; i < n; i++) {
        cout << nama[i] << ' ' << umur[i] << endl;
    }

    return 0;
}

//perintah run
//g++ -o main main.cpp&main.exe
// #output "input :"
// #input
// 3
// Andini 25
// Bambang 19
// Andi 25

//#output "output :"
// Andi 25
// Andini 25
// Bambang 19

