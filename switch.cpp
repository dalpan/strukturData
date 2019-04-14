#include <iostream>
#include <conio.h>
#include <stdio.h>
#define phi 3.14

using namespace std;

int main(){
	int pilih;
	cout<<"---------------------------------------\n";
	cout<<"Coded by Danang Avan Maulana          |\n";
	cout<<"---------------------------------------\n\n";
	cout<<"Pilih program yang akan kalian jalankan \n\n";
	cout<<"1. Menghitung Konversi Suhu \n";
	cout<<"2. Menghitung Total Belanja \n";
	cout<<"3. Menghitung Luas dan volume Bola \n\n";
	cout<<"Tulis (1-3) :";
	cin>>pilih;
	
	switch (pilih){
	case 1 :
		float cel, far, rea;
		cout<<"Masukan suhu Celcius : "; cin>>cel;
		
		far=cel*=1.8+32;
		rea=cel*0.8;
		
		cout<<"Suhu dalam Fahrenheit :"<<far<<endl;
		cout<<"Suhu dalam Reamur :"<<rea<<endl;
		
		break;
	case 2 :
		int total, diskon, member, bayar;
		int b1,b2,b3,b4,b5,b6,b7,b8;
		char y;
		
		cout<<"Menghitung Total Belanja \n\n";
		cout<<"List barang yang dibeli  \n\n";
		cout<<"Telur,  Harganya : ";cin>>b1;
		cout<<"Beras,  Harganya : ";cin>>b2;
		cout<<"Minyak, Harganya : ";cin>>b3;
		cout<<"Kopi,   Harganya : ";cin>>b4;
		cout<<"Tempe,  Harganya : ";cin>>b5;
		cout<<"Bayem,  Harganya : ";cin>>b6;
		cout<<"Susu,   Harganya : ";cin>>b7;
		cout<<"Teh,    Harganya : ";cin>>b8;
		
		total = b1+b2+b3+b4+b5+b6+b7+b8;
		diskon = total*0.15;
		member = total-diskon-20000;
		bayar = total-diskon;
		
		cout<<"Total belanja : ";cout<<total<<endl;
		cout<<"Promo diskon 15% \n";
		cout<<"Total pembayaran setelah mendapat diskon : ";cout<<bayar<<endl;
		cout<<"Apakah anda member ? Jawab y/n : ";cin>>y;
	{
		if (y){
		cout<<"Anda Mendapat potongan lagi sebesar 20000 \n\n";
		cout<<"Jadi sekarang anda membayar : ";cout<<member;
		} else {
			cout<<"Anda bukan member, jadi anda tetap membayar : ";cout<<bayar;
		}
	}
		break;
		
	case 3 :
		int jari, luas, vol;
		cout<<"Menghitung luas permukaan dan volume bola \n\n";
		cout<<"Masukan jari-jari : ";cin>>jari;
		
		luas = 4*phi*jari*jari;
		vol = (4*phi*jari*jari*jari)/3;
		
		cout<<"Luas Permukaan Bola Adalah : ";cout<<luas<<endl;
		cout<<"Volume Bola Adalah : ";cout<<vol;
		
		break;
	}
	return 0;
}
