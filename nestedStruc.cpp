#include  <iostream>
using namespace std;
struct  Jarak { int feet;
			   double inches; };
struct  Kamar { Jarak Panjang;
			     Jarak Lebar;
};
main()
{
Kamar  Makan;
Makan.Panjang.inches   = 6.5;
Makan.Lebar.feet	= 10;
Makan.Lebar.inches	= 5.0;
double P = (Makan.Panjang.feet + Makan.Panjang.inches)/12;
double L  = (Makan.Lebar.feet + Makan.Lebar.inches)/12;
double Luas = P * L;
cout << "Luas kamar makan = ";
cout.width(7); cout.precision(2);
cout << Luas << " feet^2"<<endl;
}

