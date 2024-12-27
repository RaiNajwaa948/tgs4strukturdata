#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

int data[100];
int n;

struct mahasiswa
{
    string nim;
    string nama;
    string alamat;
    float ipk;
};

mahasiswa sikc[30];

int pos = -1;

void dMenu()
{
    system("cls");
    cout << "Aplikasi Struct & Array" << "\n";
    cout << "1. Masukkan data" << "\n";
    cout << "2. Tampilkan data" << "\n";
    cout << "3. Perbaikan data" << "\n";
    cout << "4. Menghapus data" << "\n";
    cout << "5. Exit" << "\n";
    cout << "Masukan angka :";
}

void masukanData(){
    pos++;
    system("cls");
    fflush(stdin);
    cout << "Masukkan NIM: ";
    getline(cin, sikc[pos].nim);
    cout << "Masukkan Nama: ";
    getline(cin, sikc[pos].nama);
    cout << "Masukkan Alamat: ";
    getline(cin, sikc[pos].alamat);
    cout << "Masukkan IPK: ";
    cin >> sikc[pos].ipk;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

int main() {
    masukanData();
    return 0;
}