//Coded by Danang Avan Maulana
#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

int main(){
	int jabatan;
	cout<<"--------------------\n";
	cout<<"Tugas Pertemuan 4  | \n";
	cout<<"Menghitung Gaji    | \n";
	cout<<"---------------------------------------\n";
	cout<<"Coded by Danang Avan Maulana          |\n";
	cout<<"Visit My Web : https://dalpan.web.id/ | \n";
	cout<<"---------------------------------------\n\n";
	cout<<"1. CEO \n";
	cout<<"2. Manager \n";
	cout<<"3. Supervisor \n";
	cout<<"4. karyawan \n\n";
ulang:
	cout<<"Masukan kode jabatan (1-4) : ";cin>>jabatan;
if (jabatan>=5 || jabatan<=0)goto ulang;
	cout<<"\n";
	int kerja,anak;
			cout<<"Jumlah anak : ";cin>>anak;
			cout<<"Masuk Kerja : ";cin>>kerja;
			cout<<"\n";
	
	switch (jabatan){
		
		case 1 :
			{//Jika anak 0 dan Masuk Kerja 10-15 Hari
				if (anak==0 && kerja>=10 && kerja<=15){
					cout<<"Posisi Anda Sebagai SEO \n";
					cout<<"Gaji Pokok : 5000000 \n";
					cout<<"Tunjangan Anak : 100000 \n";
					cout<<"Bonus Masuk Kerja : 600000 \n";
					cout<<"Total Gaji : "<<5000000+100000+600000;
				}//Jika anak 2 dan Masuk Kerja 16-20 Hari
				else if (anak>=2 && kerja>=16 && kerja<=20){
					cout<<"Posisi Anda Sebagai SEO \n";
					cout<<"Gaji Pokok : 5000000 \n";
					cout<<"Tunjangan Anak : 300000 \n";
					cout<<"Bonus Masuk Kerja : 700000 \n";
					cout<<"Total Gaji : "<<5000000+300000+700000;
				}//Jika anak 0 dan Masuk Kerja 21-30 Hari
				else if (anak==0 && kerja>=21 && kerja<=30){
					cout<<"Posisi Anda Sebagai SEO \n";
					cout<<"Gaji Pokok : 5000000 \n";
					cout<<"Tunjangan Anak : 100000 \n";
					cout<<"Bonus Masuk Kerja : 900000 \n";
					cout<<"Total Gaji : "<<5000000+100000+900000;
				}//Jika anak 2 dan Masuk Kerja 10-15 Hari
				else if (anak>=2 && kerja>=10 && kerja<=15){
					cout<<"Posisi Anda Sebagai SEO \n";
					cout<<"Gaji Pokok : 5000000 \n";
					cout<<"Tunjangan Anak : 300000 \n";
					cout<<"Bonus Masuk Kerja : 600000 \n";
					cout<<"Total Gaji : "<<5000000+300000+600000;
				}//Jika anak 2 dan Masuk Kerja 21-30 Hari
				else if (anak>=2 && kerja>=21 && kerja<=30){
					cout<<"Posisi Anda Sebagai SEO \n";
					cout<<"Gaji Pokok : 5000000 \n";
					cout<<"Tunjangan Anak : 300000 \n";
					cout<<"Bonus Masuk Kerja : 900000 \n";
					cout<<"Total Gaji : "<<5000000+300000+900000;
				}//Jika anak 0 dan Masuk Kerja 16-20 Hari
				else if (anak==0 && kerja>=16 && kerja<=20) {
					cout<<"Posisi Anda Sebagai SEO \n";
					cout<<"Gaji Pokok : 5000000 \n";
					cout<<"Tunjangan Anak : 100000 \n";
					cout<<"Bonus Masuk Kerja : 700000 \n";
					cout<<"Total Gaji : "<<5000000+100000+700000;
				}
				else {
					cout<<"Data yang anda masukan salah";
				}
			}
		break;
			
		case 2 :
			{//Jika anak 0 dan Masuk Kerja 10-15 Hari
				if (anak==0 && kerja>=10 && kerja<=15){
					cout<<"Posisi Anda Sebagai Manager \n";
					cout<<"Gaji Pokok : 3000000 \n";
					cout<<"Tunjangan Anak : 70000 \n";
					cout<<"Bonus Masuk Kerja : 500000 \n";
					cout<<"Total Gaji : "<<3000000+70000+500000;
				}//Jika anak 2 dan Masuk Kerja 16-20 Hari
				else if (anak>=2 && kerja>=16 && kerja<=20){
					cout<<"Posisi Anda Sebagai Manager \n";
					cout<<"Gaji Pokok : 3000000 \n";
					cout<<"Tunjangan Anak : 200000 \n";
					cout<<"Bonus Masuk Kerja : 600000 \n";
					cout<<"Total Gaji : "<<3000000+200000+600000;
				}//Jika anak 0 dan Masuk Kerja 21-30 Hari
				else if (anak==0 && kerja>=21 && kerja<=30){
					cout<<"Posisi Anda Sebagai Manager \n";
					cout<<"Gaji Pokok : 3000000 \n";
					cout<<"Tunjangan Anak : 70000 \n";
					cout<<"Bonus Masuk Kerja : 800000 \n";
					cout<<"Total Gaji : "<<3000000+70000+800000;
				}//Jika anak 2 dan Masuk Kerja 10-15 Hari
				else if (anak>=2 && kerja>=10 && kerja<=15){
					cout<<"Posisi Anda Sebagai Manager \n";
					cout<<"Gaji Pokok : 3000000 \n";
					cout<<"Tunjangan Anak : 200000 \n";
					cout<<"Bonus Masuk Kerja : 500000 \n";
					cout<<"Total Gaji : "<<3000000+200000+500000;
				}//Jika anak 2 dan Masuk Kerja 21-30 Hari
				else if (anak>=2 && kerja>=21 && kerja<=30){
					cout<<"Posisi Anda Sebagai Manager \n";
					cout<<"Gaji Pokok : 3000000 \n";
					cout<<"Tunjangan Anak : 200000 \n";
					cout<<"Bonus Masuk Kerja : 800000 \n";
					cout<<"Total Gaji : "<<3000000+200000+800000;
				}//Jika anak 0 dan Masuk Kerja 16-20 Hari
				else if (anak==0 && kerja>=16 && kerja<=20) {
					cout<<"Posisi Anda Sebagai Manager \n";
					cout<<"Gaji Pokok : 3000000 \n";
					cout<<"Tunjangan Anak : 70000 \n";
					cout<<"Bonus Masuk Kerja : 600000 \n";
					cout<<"Total Gaji : "<<3000000+70000+600000;
				}
				else {
					cout<<"Data yang anda masukan salah";
				}
			}
		break;
			
		case 3 :
			{//Jika anak 0 dan Masuk Kerja 10-15 Hari
				if (anak==0 && kerja>=10 && kerja<=15){
					cout<<"Posisi Anda Sebagai Supervisor \n";
					cout<<"Gaji Pokok : 2000000 \n";
					cout<<"Tunjangan Anak : 50000 \n";
					cout<<"Bonus Masuk Kerja : 400000 \n";
					cout<<"Total Gaji : "<<2000000+50000+400000;
				}//Jika anak 2 dan Masuk Kerja 16-20 Hari
				else if (anak>=2 && kerja>=16 && kerja<=20){
					cout<<"Posisi Anda Sebagai Supervisor \n";
					cout<<"Gaji Pokok : 2000000 \n";
					cout<<"Tunjangan Anak : 100000 \n";
					cout<<"Bonus Masuk Kerja : 500000 \n";
					cout<<"Total Gaji : "<<2000000+100000+500000;
				}//Jika anak 0 dan Masuk Kerja 21-30 Hari
				else if (anak==0 && kerja>=21 && kerja<=30){
					cout<<"Posisi Anda Sebagai Supervisor \n";
					cout<<"Gaji Pokok : 2000000 \n";
					cout<<"Tunjangan Anak : 50000 \n";
					cout<<"Bonus Masuk Kerja : 700000 \n";
					cout<<"Total Gaji : "<<2000000+50000+700000;
				}//Jika anak 2 dan Masuk Kerja 10-15 Hari
				else if (anak>=2 && kerja>=10 && kerja<=15){
					cout<<"Posisi Anda Sebagai Supervisor \n";
					cout<<"Gaji Pokok : 2000000 \n";
					cout<<"Tunjangan Anak : 100000 \n";
					cout<<"Bonus Masuk Kerja : 400000 \n";
					cout<<"Total Gaji : "<<2000000+100000+400000;
				}//Jika anak 2 dan Masuk Kerja 21-30 Hari
				else if (anak>=2 && kerja>=21 && kerja<=30){
					cout<<"Posisi Anda Sebagai Supervisor \n";
					cout<<"Gaji Pokok : 2000000 \n";
					cout<<"Tunjangan Anak : 100000 \n";
					cout<<"Bonus Masuk Kerja : 700000 \n";
					cout<<"Total Gaji : "<<2000000+100000+700000;
				}//Jika anak 0 dan Masuk Kerja 16-20 Hari
				else if (anak==0 && kerja>=16 && kerja<=20) {
					cout<<"Posisi Anda Sebagai Supervisor \n";
					cout<<"Gaji Pokok : 2000000 \n";
					cout<<"Tunjangan Anak : 50000 \n";
					cout<<"Bonus Masuk Kerja : 500000 \n";
					cout<<"Total Gaji : "<<2000000+50000+500000;
				}
				else {
					cout<<"Data yang anda masukan salah";
				}
			}
		break;
		
		case 4 :
			{//Jika anak 0 dan Masuk Kerja 10-15 Hari
				if (anak==0 && kerja>=10 && kerja<=15){
					cout<<"Posisi Anda Sebagai Karyawan \n\n";
					cout<<"Gaji Pokok : 1500000 \n";
					cout<<"Tunjangan Anak : 90000 \n";
					cout<<"Bonus Masuk Kerja : 300000 \n";
					cout<<"Total Gaji : "<<1500000+90000+300000;
				}//Jika anak 2 dan Masuk Kerja 16-20 Hari
				else if (anak>=2 && kerja>=16 && kerja<=20){
					cout<<"Posisi Anda Sebagai Karyawan \n\n";
					cout<<"Gaji Pokok : 1500000 \n";
					cout<<"Tunjangan Anak : 50000 \n";
					cout<<"Bonus Masuk Kerja : 400000 \n";
					cout<<"Total Gaji : "<<1500000+50000+400000;
				}//Jika anak 0 dan Masuk Kerja 21-30 Hari
				else if (anak==0 && kerja>=21 && kerja<=30){
					cout<<"Posisi Anda Sebagai Karyawan \n\n";
					cout<<"Gaji Pokok : 1500000 \n";
					cout<<"Tunjangan Anak : 90000 \n";
					cout<<"Bonus Masuk Kerja : 600000 \n";
					cout<<"Total Gaji : "<<1500000+90000+600000;
				}//Jika anak 2 dan Masuk Kerja 10-15 Hari
				else if (anak>=2 && kerja>=10 && kerja<=15){
					cout<<"Posisi Anda Sebagai Karyawan \n\n";
					cout<<"Gaji Pokok : 1500000 \n";
					cout<<"Tunjangan Anak : 50000 \n";
					cout<<"Bonus Masuk Kerja : 300000 \n";
					cout<<"Total Gaji : "<<1500000+50000+300000;
				}//Jika anak 2 dan Masuk Kerja 21-30 Hari
				else if (anak>=2 && kerja>=21 && kerja<=30){
					cout<<"Posisi Anda Sebagai Karyawan \n\n";
					cout<<"Gaji Pokok : 1500000 \n";
					cout<<"Tunjangan Anak : 50000 \n";
					cout<<"Bonus Masuk Kerja : 600000 \n";
					cout<<"Total Gaji : "<<1500000+50000+600000;
				}//Jika anak 0 dan Masuk Kerja 16-20 Hari
				else if (anak==0 && kerja>=16 && kerja<=20) {
					cout<<"Posisi Anda Sebagai Karyawan \n\n";
					cout<<"Gaji Pokok : 1500000 \n";
					cout<<"Tunjangan Anak : 90000 \n";
					cout<<"Bonus Masuk Kerja : 400000 \n";
					cout<<"Total Gaji : "<<1500000+90000+400000;
				}
				else {
					cout<<"Data yang anda masukan salah";
				}
			}
		break;
		}
	return 0;		
	}
