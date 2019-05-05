#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <termios.h>

using namespace std;
struct angka{
int data;
angka *next;
};
angka *head;
int data_kosong(){
if (head==NULL)
return 1;
else return 0;
}
void data_depan(int databaru){
angka *baru;
baru = new angka;
baru->data = databaru;
baru->next = NULL;
if (data_kosong()==1){
head=baru;
head->next=NULL;
}else{
baru->next=head;
head=baru;
}
printf("| Angka %d Berhasil di Simpan\n", databaru);
printf("| ===========================\n");
}
void tampil_data(){
angka *bantu;
bantu=head;
if(data_kosong()==0){
printf("===================================\n");
printf("Data yang telah di Masukkan :\n\n");
while(bantu != NULL) {
printf(" %d ", bantu->data);
bantu=bantu->next;
}
printf("\n==================================\n");
} else printf("\nData Kosong!!!\n\n");
}
void hapus_depan() {
angka *hapus;
int depan;
if (data_kosong()==0){
if (head->next!= NULL) {
hapus=head;
depan=hapus->data;
head=head->next;
delete hapus;
}else{
depan=head->data;
head=NULL;
}
printf("\nAngka %d Terhapus\n",depan);
printf("\n==================================\n");
} else printf("Data Kosong!!!\n\n");
}
void hapus_belakang(){
angka *hapus,*bantu;
int belakang;
if (data_kosong()==0){
if(head->next != NULL){
bantu=head;
while(bantu->next->next!=NULL){
bantu=bantu->next;
}
hapus=bantu->next;
belakang=hapus->data;
bantu->next=NULL;
delete hapus;
}else{
belakang=head->data;
head=NULL;
}
printf("\nAngka %d Terhapus\n", belakang);
printf("\n==================================\n");
}else printf("Data Kosong!!!\n\n");
}
void hapus_data(){
angka *hapus, *bantu;
bantu=head;
while(bantu !=NULL){
hapus=bantu;
bantu=bantu->next;
delete hapus;
}head=NULL;
printf("\nSemua Data Terhapus\n");
printf("\n==================================\n");
}
void data_belakang (int databaru){
angka *baru,*bantu;
baru=new angka;
baru->data=databaru;
baru->next=NULL;
if(data_kosong()==1){
head=baru;
head->next=NULL;
}else{
bantu=head;
while(bantu->next!=NULL){
bantu=bantu->next;
}
bantu->next = baru;
}
printf("Angka %d Berhasil di Simpan\n", databaru);
printf("\n==================================\n");
}
int main(){
int databaru;
int pilihan;
menu :
printf("\n==================================\n");
printf("-----------LINKED LIST------------\n\n");
printf(" -MENU-\n\n");
printf("1. Masukkan Data dari Depan\n");
printf("2. Masukkan Data dari Belakang\n");
printf("3. Tampilkan Data\n");
printf("4. Hapus dari Depan\n");
printf("5. Hapus dari Belakang\n");
printf("6. Hapus Semua Data\n");
printf("7. Keluar\n");
printf("\n==================================\n");
while (true){
printf("Pilih Menu : ");scanf("%d", &pilihan);
if(pilihan==1){
printf("\n==================================\n");
printf("Masukkan Data : ");scanf("%d", &databaru);
printf("\n");
data_depan(databaru); goto menu;
}else if (pilihan==2){
printf("\n==================================\n");
printf("tMasukkan Data : ");scanf("%d", &databaru);
printf("\n");
data_belakang(databaru); goto menu;
}else if(pilihan==3){
tampil_data(); goto menu;
}else if(pilihan==4){
hapus_depan(); goto menu;
}else if(pilihan==5){
hapus_belakang(); goto menu;
}else if(pilihan==6){
hapus_data(); goto menu;
}else if(pilihan==7){
break;
return EXIT_SUCCESS;
}
}
printf("\nTekan untuk Keluar...");
printf("\n==================================\n");

return 0;
}
