#include <iostream> //pemanggilan library output input
#include <limits> //pemangggilan library pembatas jenis data

using namespace std; //agar cout atau cin tidak perlu tulis std::

int factorial(int n) { //funsi faktorial
    if (n <= 1) { // jika user input angka kurang dari sama dengan 1
        return 1; //hasil 1
    } else {
        return n * factorial(n - 1); //selain itu, input user dikali input yang dikurang 1
    }
}

int main() { //fungsi utama
    char choice; //menyimpan pilihan user untuk mengulang program
    do {
        int number; //deklarasi tipe data angka
        
        cout << "Masukkan sebuah bilangan: "; //menampilkan
        while (!(cin >> number)) { //agar input cuma angka
            cout << "Input tidak valid. Masukkan sebuah bilangan: "; //kalau bukan angka muncul pesan ini
            cin.clear(); //clear dan ignore untuk membersihkan input yang bukan angka
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        
        cout << "Faktorial dari " << number << " adalah: " << factorial(number) << endl;
        
        cout << "Apakah Anda ingin mencoba lagi? (Y/y untuk Ya): ";
        cin >> choice;
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); //ini untuk mengabaikan kesalahan input user

    } while (choice == 'Y' || choice == 'y');

    return 0;
}