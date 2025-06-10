#include <iostream>
#include <exeption>
//untuk objek exeption yang akan digunakan 
#include <array>
//untuk objek array yang akan digunakan
using namespace std;

int main()
{
    cout << "Awal program" << endl;
    try
    {
        array<int, 3> arr = {10, 20, 30,};
        //pesan array dengan 3 elemen
        cout << data.at(5) << endl;
        //memanggil array elemen ke-5 
    }
    catch (exception& e)
    {
        //penangkap menggunakan objek exception
        cout <<e.what() << endl;
        /*akan dieksekusi karena array data hanya memiliki 3 elemen*/
    }
    cout << "baris pemrogram yang berakhir" << endl;
    /*penanda 2: bahan program berjalan tanpa berhenti meskipun terjadi kesalahan*/
    return 0;
}