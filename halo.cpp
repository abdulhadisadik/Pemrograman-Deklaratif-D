#include<iostream>
using namespace std;

void gagen(int a[],int &gen,int &gan){
	for(int i=0;i<10;i++){
		if(a[i] % 2==0){
			gen++;
		}
		else{
			gan++;
		}
	}
}

main(){
	int genap = 0,ganjil = 0;
	int data[10] = {1,2,3,4,5,6,7,8,9,10};
	gagen(data,genap,ganjil);
	cout<<"Jumlah genap = "<<genap<<endl;
	cout<<"Jumlah ganjil = "<<ganjil<<endl;
}
