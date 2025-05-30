#include <iostream>
using namespace std;
int main()
{
 int Luas, Sisi1, Sisi2, Tinggi;
 cout << "masukkanSisi1 ";
 cin >> Sisi1;
 cout << "masukkanSisi2 ";
 cin >> Sisi2;
 cout << "masukkanTinggi ";
 cin >> Tinggi;
 Luas = 0.5*Tinggi*(Sisi1+Sisi2);
 cout << "luasTrapesium" << Luas << endl;
}
