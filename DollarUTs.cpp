#include<iostream>
using namespace std;
main(){
	float umur[5],jml = 0, tot = 0;
	float disc = 0;
	for(int i=0;i<5;i++){
		cout<<"Umur ke-"<<i+1<<" : ";cin>>umur[i];
	}
	float diskon ;
	diskon = umur[0];
	for(int i=1;i<5;i++){
		if(umur[i]<diskon){
			diskon = umur[i];
		}
	}
	disc = diskon / 100;
	jml = 50 * disc;
	tot = 50 - jml;
	cout<<"Jumlah yang di bayarkan = "<<tot<<" Dollar"<<endl;
}
