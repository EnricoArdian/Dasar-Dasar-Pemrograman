#include <iostream>
using namespace std;
int main()
{
 Int sisiSama, sisiBeda, tinggiAlas, tinggiPrisma,
kelilingAlas, luasAlas, luasPermukaan;
 cout << "Masukkan sisiSama ";
 cin >> sisiSama;
 cout << "Masukkan sisiBeda ";
 cin >> sisiBeda;
 cout << "Masukkan tinggiAlas ";
 cin >> tinggiAlas;
 cout << "Masukkan tinggiPrisma ";
 cin >> tinggiPrisma;
 kelilingAlas = sisiSama + sisiBeda;
 luasAlas = sisiBeda * tinggiAlas / 2;
 luasPermukaan = (2 * luasAlas) + (kelilingAlas *
tinggiPrisma);
 cout << "Luas Permukaan Prisma" << luasPermukaan << endl;
}
