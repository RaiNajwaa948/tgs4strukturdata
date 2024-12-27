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

void tampilkanData(int p) {
    cout << sikc[p].nim << " , " << sikc[p].nama << " , " << sikc[p].alamat << " , " << sikc[p].ipk << endl;
}

void perbaikanData(int p) {
    system("cls");
    fflush(stdin);
    cout << "Masukkan Nama Baru: ";
    getline(cin, sikc[p].nama);
    cout << "Masukkan Alamat Baru: ";
    getline(cin, sikc[p].alamat);
    cout << "Masukkan IPK Baru: ";
    cin >> sikc[p].ipk;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

void hapusData(int p) {
    for (int i = p; i < pos; i++) {
        sikc[i] = sikc[i + 1];
    }
    pos--;
    cout << "Data berhasil dihapus.\n";

int main() {
    masukanData();
    masukanData();
    tampilkanData(0);
    hapusData(0);
    tampilkanData(0);
    return 0;
}