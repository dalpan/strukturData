//Coded by Danang Avan Maulana
//Hapus comment ? Dasar IT ccd !!
#include <iostream>
#include <termios.h>
#include <stdio.h>

using namespace std;

int main () {
	int angka;
	
	cout<<"Masukan Angka :";
	cin>>angka;
	cout<<"\n";
	
	if (angka==0){
		cout<<"Ini adalah bilangan 0";
	} else if (angka%2==0){
		cout<<"Ini adalah bilangan genap";
	} else {
		cout<<"Ini adalah bilangan ganjil";
	}
	
	return 0;

}
