#include <curses.h>   	
#include <iostream> 
#include <stdlib.h>  
#include <malloc.h> 
 
using namespace std; 
 
struct node { // pembuatan struct node yang berisi int data dan pointer next
   int data;
   struct node *next;
};
 
class stack { // pembuatan class stack
   struct node *top; 
   public:
      stack() { // konstruktor 
	 top=NULL;
      }
      void push(); // untuk memasukkan data
      void pop();  // untuk mengambil data
      void show(); // untuk menampilkan data
};

void stack::push() { // fungsi untuk menambah data
   int value;
   struct node *ptr;

   cout<<"\nPUSH Operation\n";
   cout<<"Enter a number to insert: ";
   cin>>value; // menerima input kemudian disimpan dalam variable value

   ptr=new node;
   ptr->data=value; // inisialisasi data dengan nilai dari hasil inputan
   ptr->next=NULL;

   if(top!=NULL)
      ptr->next=top; 

   top=ptr;
   cout<<"\nNew item is inserted to the stack!!!";
   getch();
}
 
void stack::pop() { // fungsi untuk mengambil data
   struct node *temp;

   if(top==NULL) { // jika data masih kosong maka akan menampilkan output "The stack is empty!!!" dan menghentikan eksekusi
      cout<<"\nThe stack is empty!!!";
      getch();
      return;
   }

   temp=top;
   top=top->next;
   cout<<"\nPOP Operation........\nPoped value is "<<temp->data;
   delete temp; // dealokasi memory
   getch();
}
 
// Show stack
void stack::show() { // fungsi untuk menampilkan data yang telah dimasukkan
   struct node *ptr1=top;

   cout<<"\nThe stack is\n";

   while(ptr1!=NULL) { // looping sebanyak jumlah data yang telah dimasukkan kemudian menampilkan output data yang telah dimasukkan
      cout<<ptr1->data<<" ->";
      ptr1=ptr1->next;
   }

   cout<<"NULL\n"; // jika data masih kosong maka akan menampilkan output "NULL"
   getch();
}
 
// Main function
int main() {
   clear();
   stack s;
   int choice;

   while(1) { 
      cout<<"\n-----------------------------------------------------------";
      cout<<"\n\t\tSTACK USING LINKED LIST\n\n";
      cout<<"1:PUSH\n2:POP\n3:DISPLAY STACK\n4:EXIT";
      cout<<"\nEnter your choice(1-4): ";
      cin>>choice; // menerima input kemudian menyimpannya di variable choice
      switch(choice) { // mengecek hasil inputan
      	case 1: // jika hasilnya 1 maka akan memanggil fungsi push() untuk menambah data
	  		s.push();
	  		break;
       case 2: // jika hasilnya 2 maka akan memanggil fungsi pop() untuk mengambil data
	  		s.pop();
	 		 break;
       case 3: // jika hasilnya 3 maka akan memanggil fungsi show() untuk menampilkan data
	  		s.show();
	  		break;
       case 4: // jika hasilnya 4 maka akan menghentikan program
	  		exit(0);
	  		break;
       default: // jika hasil bukan 1,2,3 atau 4 maka akan menampilkan pesan "Please enter correct choice(1-4)!!"
	  		cout<<"Please enter correct choice(1-4)!!";
	  		getch();
	  		break;
       }
   }
   
   return 0;
}
