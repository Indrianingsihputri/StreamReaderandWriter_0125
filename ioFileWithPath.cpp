#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main(){
    string baris;
    srtring NamaFile;
    cout << "Masukkan nama file: ";
    cin >> NamaFile;
    // membuka file dalam mode menulis
    ofstream outfile;
    // menunjuk ke sebuah nama file
    outfile.open(NamaFile + ".txt", ios::out);
    cout << ">= menulis file, \'q\' untuk keluar" << endl;

    while (true) {
        cout << "- ";
        // mendapatkan setiap karakter dalam satu baris
        getline(cin, baris);
        if (baris == "q") break;
        // menulis dan memasukkan nilai dari 'baris' ke dalam file
        outfile << baris << endl;
    }
}