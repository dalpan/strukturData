//Coded by Danang Avan Maulana
#include <iostream>
#include <termios.h>

using namespace std;

int main(){
	int total,diskon1,diskon2;
	
	cout<<"Masukan Total Pembelian : "; cin>>total;
	
	{ 
		if (total>1000000) {
			diskon1=total*0.2;
			cout<<"Anda mendapat diskon sebesar ";
			cout<<diskon1;cout<<"\n";
			cout<<"Jadi anda sekarang hanya membayar ";
			cout<<total-diskon1;
		}else if (total>=500000) {
			diskon2=total*0.1;
			cout<<"Anda mendapat diskon sebesar ";
			cout<<diskon2;cout<<"\n";
			cout<<"Jadi anda sekarang hanya membayar ";
			cout<<total-diskon2;
		}else {cout<<"Belanjanya banyakin gan biar dapat diskon";}
	}
	return 0;
}
