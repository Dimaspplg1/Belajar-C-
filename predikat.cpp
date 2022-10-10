#include <iostream>
using namespace std;

int main(){
	int nilai ;
	cout<< "Masukan Nilai = "; cin>>nilai;
	if(nilai>78){
		cout<< "lulus";
	}
	else if(nilai ==78){
		cout<< "kkm";
	}else{
		cout<<"Tidak Lulus";
	}
}
