//Rizky Anggian Matondang
//16720470


#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;
vector<string> nama;
vector<int> umur;

//Prosedur memasukkan nama dan umur
void input_nama(string label){
  cout << label << endl ;
  string n;
  int u, b, i;

  cin >> b ;
  for (i = 0 ; i < b ; i++){
    cin >> n;
    cin >> u;
    nama.push_back(n);
    umur.push_back(u);
  }
}
//Prosedur memasukkan nama dan umur


//Prosedur output
void print(string label){
  cout << label << endl;
  for (int i = 0; i<nama.size(); ++i)
    cout << nama[i] <<" " << umur[i] << endl;   // output name/age pairs
}
//Prosedur output

//Prosedur ubah urutan umur dan nama
void ubah_urutan_umur (){
    int temp;
    string temp_nama;
    for ( int i=0 ; i < umur.size() ; i++){
        for ( int j = i+1 ; j < umur.size() ; j++){
            if (umur[j] > umur [i]){
                temp = umur [i];
                umur [i] = umur[j];
                umur [j] = temp;
                temp_nama = nama [i];
                nama [i] = nama [j];
                nama [j] = temp_nama;

            }
        }
    }
}
//Prosedur ubah urutan umur dan nama



//Prosedur pengurutan nama dengan umur yang sesuai
int find_index(vector<string>& v, const string n){
// find n's index in v
  for (int i = 0; i < v.size(); i++)
  {
    if (n == v[i])
    {
      v[i] = "";  // remove name in case two of same name
      return i;
    }
  }
}
//Prosedur pengurutan nama dengan umur yang sesuai


int main(){
  input_nama("Input:"); // Input nama
  cout << "\n";
  vector<string> original_names = nama;   // duplikasi array nama
  vector<int> original_ages = umur;    // duplikasi array umur

  sort(nama.begin(), nama.end());     // pengurutan nama sesuai abjad

  for (int i = 0; i < nama.size(); i++)   // perubahan letak umur setelah nama diurutkan
    umur[i] = original_ages[find_index(original_names, nama[i])];

  ubah_urutan_umur(); // perubahan urutan umur dan nama
  print("Output:");   // output

}
