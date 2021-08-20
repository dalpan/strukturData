// Program parkir menggunakan queue

#include <iostream>
#include <queue>
#include <stack>
#include <time.h>
#include <ctime>
#include <termios.h> //untuk sistem operasi linux, jika windows ganti dengan <windows.h>
#include <iomanip>
#include <cstring>
#define capacity 3 // Mendeklarasikan maksimal kapasitas parkir

using namespace std;

typedef struct Car {
	string License="";
	double begin=0;
	double end=0;
	string begin_time;
	string end_time;
	int order_number=0;
	double cost=0;
}Car;
struct cmp2 {
	bool operator ()(Car& a, Car& b) {
		return a.begin > b.begin;
	}
};
int total = 0;
int money = 3000;
bool vis[200];
queue<Car> Waiting;
stack<Car> Parking;
priority_queue<Car,vector<Car>,cmp2> history;
string getTime()
{
	time_t timep;
	time(&timep);
	char tmp[64];
	strftime(tmp, sizeof(tmp), "%Y-%m-%d %H:%M:%S", localtime(&timep));
	return tmp;
}
void Wait(string license)
{
	Car temp;
	temp.License = license;
	temp.begin_time = getTime();
	temp.order_number = ++total;
	Waiting.push(temp);
	cout << temp.License << " Menunggu Antrian " << endl;
}
void Add(string license)
{
	if (Parking.size()>=capacity)
	{
		Wait(license);
	}
	else
	{
		Car temp;
		size_t t = clock();
		temp.License = license;
		temp.begin= t;
		temp.begin_time = getTime();
		temp.order_number = ++total;
		Parking.push(temp);
		cout << temp.License << " Masuk Parkir, dimulai dari waktu : " << temp.begin_time << "\n" << endl;
	}
}
void Leave(string license, int t_out)
{
	stack<Car> temp;
	int cnt = Parking.size();
	while(!Parking.empty())
	{
		Car car=Parking.top();
		Parking.pop();
		if (car.License == license)
		{
			cout << car.License << "\n Keluar Parkir \n";
			size_t t = clock();
			car.end = t;
			car.end_time = getTime();

			if(t_out <= 1)
			{
				car.cost = 3000;
				cout << "Biaya Parkir : " << car.cost << endl;
			}else
			{
			    car.cost = (money + 2000);
				cout << "Biaya Parkir : " << car.cost << endl;
			}
			history.push(car);
			break;

		}
		else
		{
			temp.push(car);
		}
	}
	if (temp.size() == cnt)
	{
		cout << "Nomor Kendaraan Tidak Terdaftar \n" << endl;
		while (!temp.empty())
		{
			Parking.push(temp.top());
			temp.pop();
		}
	}
	else
	{
		while(!temp.empty())
		{
			Parking.push(temp.top());
			temp.pop();
		}
		if (!Waiting.empty())
		{
			Car car = Waiting.front();
			Waiting.pop();
			Add(car.License);
		}
	}
}
void Check()
{
	if (!Parking.empty())
	{
		cout << "Daftar Kendaraan di parkiran: \n" << endl;
		stack<Car> temp = Parking;
		while (!temp.empty())
		{
			Car x = temp.top();
			cout << "Plat Nomor : "<< x.License << "\nMasuk pada waktu : " << x.begin_time << endl;
			temp.pop();
		}
	}
	else
	{
		cout << "\nTidak Ada Mobil Parkir " << endl;
	}
	if (!Waiting.empty())
	{
		cout << "Daftar Mobil Menunggu masuk parkir : " << endl;
		queue<Car> temp1 = Waiting;
		while (!temp1.empty())
		{
			Car x = temp1.front();
			cout <<"No Polisi Yang menunggu : "<<x.License << "\n Menunggu masuk parkir pada waktu : " << x.begin_time << endl;
			temp1.pop();
		}
	}
	else
	{
		cout << "Tidak ada Waiting List Kendaraan " << endl;
	}
}
void History_Check()
{
	cout << "total" << history.size() << "\n Waktu Kendaraan Berhenti \n" << endl;
	priority_queue<Car, vector<Car>, cmp2> temp = history;
	int i = 1;
	while (!temp.empty())
	{

		Car x = temp.top();
		temp.pop();
		cout <<" "<<i++<<"\n Plat Nomor Mobil:"<<x.License << "\n Waktu Pemberhentian:" << x.begin_time << "\n Waktu Keluar:" << x.end_time << "\n Biaya Parkir Adalah:" << x.cost << endl;
	}
}

int main()
{
            cout << "---------------------Struktur Data----------------------\n";
			cout << "------------Selamat Datang di Parkir Sistem-------------\n";
			cout << "1. Kendaraan Masuk \n";
			cout << "2. Kendaraan Keluar \n";
			cout << "3. Tampil Status Parkir \n";
			cout << "4. Tampil History Parkir \n";
			cout << "5. Tentang saya \n";
			cout << "6. Bersihkan layar \n";
	while (1) {
		int i;
		cout << "Pilih Menu: ";
		cin >> i;
		switch (i)
		{
		case 1:
			{
				string in;
				cout << "Silakan Masukan Plat Nomor Masuk : ";
				cin >> in;
				Add(in);
			}
			break;
		case 2:
			{
				string out;
				int t_out;
				cout << "Silakan Masukan Plat Nomor Keluar : ";
				cin >> out;
				cout << "Silakan Masukan Lama Waktu : ";
				cin >> t_out;
				Leave(out, t_out);
			}
			break;
		case 3:
		{
			Check();
			break;
		}
		case 4:
		{
			memset(vis, false, sizeof(vis));
			History_Check();
			break;
		}
		case 5:
		{
			cout << "Nama : Nadia Mega Vemitania \n";
            cout << "NIM : 5180411125 \n";
            cout << "Mata Kuliah : Struktur Data (UAS)\n";
            break;
		}
		case 6:
        {
            system("clear");
            cout << "---------------------Struktur Data----------------------\n";
			cout << "------------Selamat Datang di Parkir Sistem-------------\n";
			cout << "1. Kendaraan Masuk \n";
			cout << "2. Kendaraan Keluar \n";
			cout << "3. Tampil Status Parkir \n";
			cout << "4. Tampil History Parkir \n";
			cout << "5. Tentang saya \n";
			cout << "6. Bersihkan layar \n";

        }
		break;
		}
	}
}

