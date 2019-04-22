#include <stdio.h>
#include <iostream>
#include <conio.h>
#define MAX 8

using namespace std;

typedef struct{
               int data[MAX];
               int head;
               int tail;
   }Queue;
   Queue antrian;

void Create(){
   antrian.head=antrian.tail=-1;
   }
int IsEmpty(){
   if(antrian.tail==-1)
       return 1;
   else
       return 0;
   }
int IsFull(){
    if(antrian.tail==MAX-1)
        return 1;
    else
        return 0;
}

Enqueue(int data)
{
        if(IsEmpty()==1)
        {
            antrian.head=antrian.tail=0;
            antrian.data[antrian.tail]=data;
            printf("%d sudah dimasukan",antrian.data[antrian.tail]);
        } else
        if(IsFull()==0)
        {
            antrian.tail++;
            antrian.data[antrian.tail]=data;
            printf("%d sudah dimasukan",antrian.data[antrian.tail]);
        }
}
int Dequeue()
{
        int i;
        int e = antrian.data[antrian.head];
        for(i=antrian.head; i<=antrian.tail-1;i++)
        {
            antrian.data[i]=antrian.data[i+1];
        }
        antrian.tail--;
        return e;
}
void Clear()
{
    antrian.head=antrian.tail=-1;
    printf("CLEAR");
}
void Tampil()
{
    if(IsEmpty()==0)
    {
        for(int i=antrian.head;i<=antrian.tail;i++)
        {
            printf(" %d",antrian.data[i]);
        }
    }else printf("data kosong!\n");
}
main()
{
    int pil;
    int data;
    Create();
    do{
      cout<<endl<<endl;
        cout<<"  =============================="<<endl;
        cout<<"  =\t  PROGRAM QUEUE        ="<<endl;
        cout<<"  =============================="<<endl;
        cout<<"  =  1. ENQUEUE                = "<<endl;
        cout<<"  =  2. DEQUEUE                = "<<endl;
        cout<<"  =  3. TAMPIL                 = "<<endl;
        cout<<"  =  4. CLEAR                  = "<<endl;
        cout<<"  =  5. EXIT                   ="<<endl;
      cout<<"  =============================="<<endl;
        cout<<"  Masukan Pilihan : ";cin>>pil;
        switch(pil)
        {
                case 1:
                cout<<"Masukan Data : ";cin>>data;
                Enqueue(data);
                break;

                case 2:
                Dequeue();
                break;

                case 3:
                Tampil();
                break;

                case 4:
                Clear();
                break;

                case 5:
          
                break;
        }

        getch();

    }
   while(pil!=5);
    return 0;
}
