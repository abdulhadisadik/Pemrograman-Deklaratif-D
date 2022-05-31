#include <iostream>
 
using namespace std;
 
int main()
{ 
  int input[100], arr_count, i;
  float total, rata2;
 
  cout << "Input jumlah element array: ";
  cin >> arr_count;
 
  cout << "Input "<< arr_count << " angka (dipisah dengan enter): " ;
  cout << endl;
 
  for(i = 0; i < arr_count; i++){
    cin >> input[i];
  }
 
  cout << endl;
 
  total = 0;
  for(i = 0; i < arr_count; i++){
    total = total+input[i];
  }
 
  rata2 = (total/arr_count);
  cout<<"Total : "<<total<<endl;
  cout << "Nilai rata-rata dari "<< arr_count <<
          " inputan adalah: " << rata2;
 
  cout << endl;
  return 0;
}
