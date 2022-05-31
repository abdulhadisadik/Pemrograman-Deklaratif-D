#include<iostream>
using namespace std;
int jam,menit,detik;
void konversi(int detik){
	jam = detik /(60*60);
    detik = detik-((60*60)*jam);
    menit = detik / 60;
    detik = detik -(60*menit);
}
main(){
    
    cout<<" ----- Program Konversi detik ke jam menit dan detik ------ "<<endl;
    cout<<" Masukan Jumlah detik yang mau dihitung : ";
    cin>>detik;
    konversi(detik);
    cout<<" Maka Waktunya Adalah : "<<endl;
    cout<<" Jam : "<<jam<<endl;
    cout<<" Menit : "<<menit<<endl;
    cout<<" Detik : "<<detik;
}
