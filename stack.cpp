#include <curses.h>
#include <iostream>
#include <stdio.h>
#define max 10 // definisi max dengan nilai 10

using namespace std;

struct tumpukan{ // pembuatan struct tumpukan yang berisi int atas, dan array char data
	int atas;
	char data[max];
};

tumpukan tumpuk; // deklarasi struct tumpukan

void push(){ // fungsi untuk menambah data
	char baru;

	if(tumpuk.atas == max) { // jika jumlah data yang dimasukkan nilainya sama dengan max maka akan dihentikan
		cout << "\nTUMPUKAN PENUH\n";
		getch();
	}else { // eksekusi akan dilanjutkan jika jumlah data yang dimasukkan masih dibawah max
		cout << "Data yang akan dimasukkan (char): ";
		cin >> baru;
		tumpuk.atas++;
		tumpuk.data[tumpuk.atas] = baru;
	}
}

void pop(){ // fungsi untuk mengambil data
	if(tumpuk.atas == 0) { // jika jumlah data sama dengan 0, maka eksekusi dihentikan
		cout << "\nTUMPUKAN KOSONG\n";
		getch();
	}else { // eksekusi akan dijalankan jika jumlah data lebih besar dari 0
		cout << "Data yang akan dipop: " << tumpuk.data[tumpuk.atas] << endl;
		tumpuk.atas--;
	}
}

void tampilkan(){ // fungsi untuk menampilkan data
	if(tumpuk.atas == 0){ // jika jumlah data sama dengan 0, maka akan menampilkan output "TUMPUKAN KOSONG"
		cout << "\nTUMPUKAN KOSONG\n";
		getch();
	}else{ // akan menampilkan semua data yang telah dimasukkan ketika jumlah data lebih besar dari 0
		cout << "Data yang dimasukkan:" << endl;
		for(int i = 1; i <= tumpuk.atas; i++){
			cout << tumpuk.data[tumpuk.atas] << endl;
		}
	}
}

main(){
	int pilihan;

	mulai:
		cout << "1. Masukkan data\n";
		cout << "2. Ambil data\n";
		cout << "3. Tampil data\n";
		cout << "4. Keluar\n";
		cout << "Pilih ";
		cin >> pilihan; // menyimpan inputan ke variable pilihan

		if(pilihan == 1){ // jika pilihan sama dengan 1 maka akan memanggil fungsi push()
			push();
			goto mulai;
		}else if(pilihan == 2){ // jika pilihan sama dengan 2 maka akan memanggil fungsi pop()
			pop();
			goto mulai;
		}else if(pilihan == 3){ // jika pilihan sama dengan 3 maka akan memanggil fungsi tampilkan()
			tampilkan();
			goto mulai;
		}else{ // jika pilihan selain dari 1,2 atau 3 maka akan menghentikan program
			clear(); 
			getch();
		}
}
