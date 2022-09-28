#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
 cout << "Nilai kehadiran,tugas, uts, uas"<<endl;
    cout << "masukkan nilai kehadiran =";
    int kehadiran;
    cin >> kehadiran;           
    cout << "masukkan nilai tugas =";
    int tugas;
    cin >> tugas;
    cout << "masukkan nilai uts =";
    int uts;
    cin >> uts;
    cout << "masukkan nilai uas =";
    int uas;
    cin >> uas;
    int hasil;
    hasil = (kehadiran+tugas+uts+uas)/4;
    cout << "hasil nilai ="<<hasil;
}