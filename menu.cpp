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

int main()
{
    int pos = -1;

    do
    {
        dMenu();
        pl = getch();

        switch (pl)
        {
        case '1':
        {
            pos++;
            system("cls");
            fflush(stdin);
            cout << "masukan nim: ";
            getline(cin, sikc[pos].nim);
            cout << "masukan nama: ";
            getline(cin, sikc[pos].nama);
            cout << "masukan alamat: ";
            getline(cin, sikc[pos].alamat);
            cout << "masukan ipk: ";
            cin >> sikc[pos].ipk;
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            break;
        }
        case '2':
        {
            cout << sikc[p].nim << " , " << sikc[p].nama << " , " << sikc[p].alamat << " , " << sikc[p].ipk << endl;
            break;
        }
        case '3':
        {
            system("cls");
            int index;
            cout << "Masukkan nomor data yang ingin diperbaiki: ";
            cin >> index;
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            if (index >= 0 && index <= pos) {
                perbaikanData(index);
            } else {
                cout << "nomor tidak valid!\n";
            }
            break; 
        }
        case '4':
        {
            system("cls");
            int index;
            cout << "Masukkan nomor data yang ingin dihapus: ";
            cin >> index;
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            hapusData(index);
            getch();
            break; 
        }
        case '5':
            break;
        default:
            system("cls");
            cout << "Pilihan Tidak Tersedia";
            getch();
            break;
        }
    } while (pl != '5');

    return 0;
}