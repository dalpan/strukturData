//Coded by Danang Avan Maulana
//Web : https://dalpan.web.id/
#include <iostream>
#include <conio.h>
 
using namespace std;
 
//Membuat Struktur Data Terlebih Dahulu
struct {
    int jam,menit,detik;
} pertama, terakhir, selisih;
int main(){
    cout<<"Nama : Danang Avan Maulana \n";
    cout<<"Nim  : 5180411091 \n";
    cout<<"Tugas Menghitung Selisih Waktu \n\n";
   
    //Input Waktu Pertama
    cout<<"Masukan Waktu Pertama :) \n\n";
    cout<<"Masukan Jam : ";
    cin>>pertama.jam;
    cout<<"Masukan Menit : ";
    cin>>pertama.menit;
    cout<<"Masukan Detik : ";
    cin>>pertama.detik;
   
    //Hasil Waktu Pertama
    cout<<"Waktu Pertama : ";
    cout<<""<<pertama.jam<<":" <<pertama.menit<<":"<<pertama.detik;
    cout<<"\n\n";
   
    //Input Waktu Kedua
    cout<<"Masukan Waktu Kedua :) \n\n";
    cout<<"Masukan Jam : ";
    cin>>terakhir.jam;
    cout<<"Masukan Menit : ";
    cin>>terakhir.menit;
    cout<<"Masukan Detik : ";
    cin>>terakhir.detik;
   
    //Hasil Waktu Kedua
    cout<<"Waktu Kedua : ";
    cout<<""<<terakhir.jam<<":" <<terakhir.menit<<":"<<terakhir.detik<<"\n";
   
    //Menghitung Selisih Detik
    if((terakhir.detik-pertama.detik)<0){
        selisih.detik=(60+terakhir.detik)-pertama.detik;
        terakhir.menit;
    }
    else {
        selisih.detik=terakhir.detik-pertama.detik;
    }
   
    //Menghitung Selisih Menit
    if ((terakhir.menit-pertama.menit)<0){
        selisih.menit=(60+terakhir.menit)-pertama.menit;
        terakhir.jam;
    }
    else {
        selisih.menit=terakhir.menit-pertama.menit;
    }
   
    //Menghitung Selisih Jam
    selisih.jam=terakhir.jam-pertama.jam;
   
    cout<<"\n";
   
    cout<<"Selisih Dalam Satuan Detik : "<<selisih.jam*3600+selisih.menit*60+selisih.detik<<"\n";
    cout<<"\n";
    cout<<"Selisih Jam : "<<selisih.jam<<":"<<selisih.menit<<":"<<selisih.detik;
 
    return 0;
}
