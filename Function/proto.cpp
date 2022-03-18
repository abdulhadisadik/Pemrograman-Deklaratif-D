#include <iostream>
using namespace std;
//prototype
void cetakPesan();
int tambah(int a, int b);

//Tujuan dari penggunaan prototipe fungsi adalah 
//membuat struktur penulisan program bahasa C++ 
//yang lebih baik sekaligus memudahkan kita 
//mengontrol fungsi-fungsi yang ada dalam 
//program beserta tipe dan parameternya.

int main () {
    cetakPesan();
    cout<<"tambah(5,6) = "<<tambah(5,6)<<endl;
 
    return 0;
}
 
void cetakPesan (){
    cout<<"Pemrograman Deklaratif E"<<endl<<endl;
}
 
int tambah (int a, int b){
    return a+b;
}
