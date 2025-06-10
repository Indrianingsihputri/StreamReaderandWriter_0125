#include <iostream>
using namespace std;

int main() 
{
    try {
        cout << "selamat belajar di prodi TI UMY" << endl;
        throw 0,5; // melemparkan sebuah intego maka
        cout << "pernyataan ini tidak akan dieksekusi" << endl;
        
    }

    catch (int a) {
        // blok ini akan dieksekusi
        cout << "Pengecualian akan dieksekusi" << a << endl;
    }

}