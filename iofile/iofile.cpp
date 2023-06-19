#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string baris;

    //memasukkan file spesifik
    //string namafile;
    //cout << "Masukkan namafile : ";
    //cin >> namafile;

    //membuka file dalam mode menulis
    ofstream outfile;
    //menunjuk ke sebuah nama file
    outfile.open("contohfile.txt");
    //outfile.open(namafile+".txt",ios::out)
    //outfile.open("D:\Pemrograman Dasar\contoh.txt")

    cout << ">= Menulis file, \'q\' untuk keluar" << endl;

    //unlimited loop untuk menulis
    while (true) {
        cout << '- ';
        //mendapatkan setiap karakter dalam satu baris
        getline(cin, baris);
        //loop akan berhenti jika anda memasukkan karakter  q
        if (baris == "q") break;
        //menulis dan memasukkan nilai dari 'baris' ke dalam file
        outfile << baris << endl;
    }
}

