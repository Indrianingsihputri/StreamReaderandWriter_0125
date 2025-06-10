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
    // selesai dalam menulis sekarang tutup filenya
    outfile.close();
    // membuka file dalam mode membaca
    ifstream infile;
    // menunjuk ke sebuah file
    infile.open(NamaFile + ".txt", ios::in);
    cout << endl << ">= membuka dan membaca file " << endl;
    // jika file ada maka
    if (infile.is_open()) 
    {
        // membaca setiap baris dari file
        while (getline(infile, baris)) 
        {
            //dan tampilkan di sini
            cout << baris << '\n';
        }
        // tutup file setelah selesai membaca
        infile.close();
    } 
    else cout << "unable to open file" << endl;
    return 0;
}