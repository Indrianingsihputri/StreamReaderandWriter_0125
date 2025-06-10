#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string baris;
    //membuka file dalam mode menulis
    ofstream outfile;
    //menunjuk ke sebuah nama file
    outfile.open("contohfile.txt");
    cout << ">= menulis file, \'q\' untuk keluar";
    //unlimited loop untuk menulis

    while (true) {
        cout << "- ";
        //mendapatkan setiap karakter dalam satu baris
        getline(cin, baris);
        //loop akan berhenti jika anda memasukkan karakter q
        if (baris == "q") break;
        //menulis dan memasukkan nilai dari 'baris' kedalam file
        outfile << baris << endl;
    }

    //selesai dalam menulis sekarang tutup filenya
    outfile.close();
    //membuka file dalam mode membaca
    ifstream infile;
    //menujuk ke sebuah file
    infile.open("contohfile.txt");
    cout << endl << ">= membuka dan membaca file " << endl;
    //jika file ada maka
     if(infile.is_open())
    {

        while (getline(infile, baris))
        {
            cout << baris <<'\n';
        }

        infile.close();
    }

    else cout << "unable to open file";
    return 0;
}