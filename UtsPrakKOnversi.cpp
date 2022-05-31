#include<iostream>
using namespace std;
void konversi(int detik){
	int jam,menit;
	jam = detik /(60*60);
    detik = detik-((60*60)*jam);
    menit = detik / 60;
    detik = detik -(60*menit);
    cout<<" Setelah di konversi : "<<endl;
    cout<<" Jam : "<<jam<<endl;
    cout<<" Menit : "<<menit<<endl;
    cout<<" Detik : "<<detik<<endl;
}
main(){
    int detik;
    cout<<" ----- Program Konversi detik ke jam menit dan detik ------ "<<endl;
    cout<<" Masukan Jumlah detik yang mau dihitung : ";
    cin>>detik;
    konversi(detik);
}
