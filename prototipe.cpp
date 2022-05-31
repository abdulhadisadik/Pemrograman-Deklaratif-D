#include <iostream>
using namespace std;
//deklarasi variabel
int bil[10];
//prototipe fungsi
int nilai_terbesar();
int nilai_terkecil();
int jumlah_nilai();
void urutkan_data();
 main()
{
int i;
//pemasukan data pada variabel array bil
//dengan menggunakan pengulangan
for(i=0;i,i<10;i++)
{
cout <<"Masukan bilangan pertama ke [" <<i+1<<"]: ";
cin >>bil[i];
}
//memanggil fungsi pengurutan data
urutkan_data();
//menampilkan hasil proses
cout <<"\nData Setelah diurutkan ";
cout <<"\n=-=-=-=-=-=-=-=-=-=-=-=" << endl;
for(i=0;i,i<10;i++)
{
cout <<bil[i]<<endl;
}
cout <<"\n=-=-=-=-=-=-=-=-=-=-=-=" << endl;
//memanggil fungsi nilai terbesar, terkecil dan jumlah bilangan
cout <<endl <<"Bilangan Terbesar :" <<nilai_terbesar();
cout <<endl <<"Bilangan Terkecil :" <<nilai_terkecil();
cout <<endl <<"Jumlah Total :" <<jumlah_nilai() << endl;
}
int nilai_terbesar()
{
//variabel local
int i,max;
max = 0;
for(i=0; i<10;i++) {
if (max < bil[i]) {
max = bil[i];
}
}
return max;
}
int nilai_terkecil()
{
//variabel local
int i, min;
min = 1000;
for(i=0; i<10;i++) {
if (min > bil[i]) {
min = bil[i];
}
}
return min;
}
int jumlah_nilai()
{
//variabel local
int i, jumlah;
jumlah = 0;
for(i=0; i<10;i++) {
jumlah +=bil[i];
}
return jumlah;
}
void urutkan_data(){
//variabel local
int i,j, tmp;
//proses untuk melakukan sorting Bubble Sort:
for(i=0;i<9;i++)
{
	for(j=i; j<10;j++)
		{
		if (bil[i]>bil[j])
			{
			tmp = bil[i];
			bil[i] = bil[j];
			bil[j] = tmp;
			}
		}
	}
}
