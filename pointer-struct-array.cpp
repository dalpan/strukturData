#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;

struct tanggal
{
    int tgl,bln,thn;
};

struct node{
    tanggal ttl;
    int jam;
    char pinjem[20];
    node *next;
};

node* baru, *head ,*tail;
int hasil,member1,member2,total,total1,temporary = 0,bayar,dikembalikan;
int berapa,berapa1;
int harga=0;
int pilih;
char lagi,member[20],ada;
bool ketemu = false;

struct kst
{
    char judul[20],kode[20];
    int harga;
}kaset[10];

char user[20],pass[20];
char *user1="fuu",*pass1="123";

void penyewa()
{
    do{
    baru=new node;
    cout<<"Sekarang Tanggal : ";cin>>baru->ttl.tgl;
    cout<<"         Bulan   : ";cin>>baru->ttl.bln;
    cout<<"         Tahun   : ";cin>>baru->ttl.thn;cin.ignore();
    cout<<"Mau pinjem kaset apa mas? ";
    cin.getline(baru->pinjem,20);
    for(int k =0 ; k<berapa ; k++ )
    {
        if(strcmp(baru->pinjem,kaset[k].judul)==0)
        cout<<"Harganya Segini ya mas Rp "<<kaset[k].harga<<endl;
        harga = kaset[k].harga;
    }
    cout<<"Pinjem Berapa Hari? ";
    cin>>baru->jam;
    dikembalikan = baru->jam + baru->ttl.tgl;
    cout<<"Harus Dikembalikan Tanggal "<<dikembalikan<<"-"<<baru->ttl.bln<<"-"<<baru->ttl.thn<<endl;
    hasil = baru->jam * harga;
    cout<<"Harganya Rp"<<hasil<<" ya"<<endl;
    temporary = temporary + hasil;
    baru->next=NULL;
    if (head==NULL)
    tail=baru;
    else
    {
        baru->next = head;
        head = baru;
    }
    cout<<"Pinjem Lagi? ";
    cin>>lagi;
    }
    while(lagi == 'y');
}

void lihat_buku()
{
    for(int k = 0;k<berapa;k++)
    {
        cout<<"Judul Kaset      : "<<kaset[k].judul<<endl;
        cout<<"Harga Kaset      : "<<kaset[k].harga<<endl;
    }
    cin.get();
}

void totalan()
{
    char mam;
    cout<<"Total Harganya : Rp "<<temporary<<endl;
    cout<<"Anda Member Atau tidak??";cin>>mam;cin.ignore();
    if (mam == 'y')
    {
    cout<<"Masukkan kode member : ";cin.getline(member,20);
    for(int i=0 ; i<berapa ; i++)
    {
if(strcmp(member,kaset[i].kode))
    ketemu = true;
}
if(ketemu = true)
{
    member1 = temporary * 15 /100;
    member2 = temporary - member1;
cout<<"Bayar mas : ";cin>>bayar;
if (bayar<temporary)
    cout<<"Uangnya Kurang mas";
else if (temporary > 120000 )
{
    total = member2 * 22 / 10;
    total1 = temporary - total;
    cout<<"Hore Dapet diskon Rp "<<total<<endl;
    cout<<"Kembaliannya ya mas Rp "<<bayar - total1<<endl;
}
else if(temporary < 120000)
{
    cout<<"Hore Dapet diskon Rp "<<member1<<endl;
    cout<<"Kembaliannya ya mas Rp "<<bayar - member2<<endl;
}
}
}
else
{
    cout<<"Bayar mas : ";cin>>bayar;
if (bayar<temporary)
    cout<<"Uangnya Kurang mas";
else if (temporary > 120000 )
{
    total = temporary * 22 / 10;
    total1 = temporary - total;
    cout<<"Hore Dapet diskon Rp "<<total;
    cout<<"Kembaliannya ya mas Rp"<<bayar - total1;
}
else if (temporary < 120000)
{
    cout<<"Kembaliannya ya mas Rp "<<bayar - temporary<<endl;
}
}
}

void menu_penyewa()
{
    menu :
    cout<<"1. Pinjam Buku"<<endl;
    cout<<"2. Lihat Buku dan Harga"<<endl;
    cout<<"3. Totalan"<<endl;
    cin>>pilih;cin.ignore();
    switch(pilih)
    {
        case 1 : system("clear");
                 penyewa();
                 goto menu;
                 break;
        case 2 : system("clear");
                 lihat_buku();
                 goto menu;
                 break;
        case 3 : system("clear");
                 totalan();
                 break;
    }

}

void data_admin()
{
    char ada;
    Admin :
    system("clear");
    cout<<"Mau ngapain min?"<<endl;
    cout<<"1. Nambah stock kaset"<<endl;
    cout<<"2. Nambah member"<<endl;
    cout<<"3. Ada Penyewa"<<endl;
    cin>>pilih;cin.ignore();
    switch(pilih)
    {
    case 1 : system("clear");
    cout<<"TAMBAH STOCK KASET"<<endl;
    cout<<"Nambah Berapa Kaset : ";
    cin>>berapa;cin.ignore();
    for(int i=0 ; i<berapa ; i++)
    {
        cout<<"Judul Kaset      : ";cin.getline(kaset[i].judul,20);
        cout<<"Harga Kaset      : ";cin>>kaset[i].harga;cin.ignore();
}
        goto Admin;
    break;
    case 2 : system("clear");
    cout<<"Nambah berapa member : ";
    cin>>berapa1;cin.ignore();
    for(int i =0 ; i<berapa1;i++)
    {
    cout<<"Kode Member          : ";cin.getline(kaset[i].kode,20);
    }
    goto Admin;
    break;
    case 3 : system("clear");
                menu_penyewa();break;
    }
}

void admin()
{
    login :
    cout<<"Masukkan Username : ";
    cin.getline(user,20);
    if (strcmp(user,user1)==0)
    {
    password :
    cout<<"Masukkan Password : ";
    cin.getline(pass,20);
    if (strcmp(pass,pass1)!=0)
    {
    cout<<"Password salah";
    goto password;
    }
    }
    else
    {
    cout<<"Username salah";
    goto login;
    }
    system("clear");
    data_admin();
}

int main()
{
        admin();
}
