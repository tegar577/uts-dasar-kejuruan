#include <iostream>
using namespace std;

int main () 
{
int luas, keliling;
  int r,d;
  const float phi = 3.14;
  cout << "aplikasi hitung luas+keliling lingkaran"<<endl;
  cout << "masukkan jari jari lingkaran ="; cin >> r;
  luas = phi*r*r;
  keliling = 2*phi*r;
  cout << "luas lingkaran ="<<luas<<endl;
  cout << "keliling lingkaran ="<<keliling<<endl;
 }