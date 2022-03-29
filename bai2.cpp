#include <iostream.h>
#include <iomanip.h>
using namespace std;
class Giaovien
{
	private:
		char ht[30];
		int t;
		char bc[15];
		char cn[20];
		float bl,lcb;

	public:
		void nhap()
		{
			fflush(stdin);
			cout << " Nhap ho ten giao vien : ";
			cin.getline(ht, 30);
			cout << " Nhap bang cap : ";
			cin.getline(bc, 15);
			cout << " Nhap chuyen ngang : ";
			cin.getline(cn, 20);
			cout << " Nhap bac luong : ";
			cin >> bl;
			cout << " Nhap tuoi giao vien : ";
			cin >> t;
			cout << "----------------------------------------" << endl;
			
		}
		void tieude()
		{
		   cout << " --------------------------------------------> THONG TIN GIAO VIEN  <---------------------------------------" << endl ;
           cout << "+===========================================================================================================+"<< endl;
           cout << "!" << setw(13) << " HO TEN "       << setw(3)
                << "!" << setw(14) << " TUOI "         << setw(3)
                << "!" << setw(13) << " BANG CAP "     << setw(5) 
                << "!" << setw(15) << " CHUYEN NGANH " << setw(5) 
                << "!" << setw(13) << " BAC LUONG "    << setw(5)
                << "!" << setw(13) << " LUONG CO BAN " << setw(6)  << "!" << endl;	
           cout << "+===========================================================================================================+"<< endl;			 
		}
		void luong()
		{
			lcb = bl * 610;
		}
		void xuat()
		{
			tieude();
 	        cout << "!" << setw(13) << ht  << setw(3)
                 << "!" << setw(14) << t   << setw(3)
                 << "!" << setw(13) << bc  << setw(5) 
                 << "!" << setw(15) << cn  << setw(5) 
                 << "!" << setw(13) << bl  << setw(5)
                 << "!" << setw(13) << lcb << setw(5) << "!" << endl;
            cout << "+===========================================================================================================+"<< endl;			 
		}
		void min ()
		{
			if (lcb < 2000)
			{
				xuat();
			}
		}
};
		
int main()
{
	int n, i;
	cout << " Nhap so luong giao vien : ";
	cin >> n;
	Giaovien a[n];
	fflush(stdin); 
	cout << " Nhap thong tin giao vien thu " << i+1 << endl;
	for (int i = 0; i < n; i++)
	{
		a[i].nhap();
	}
	cout << " Giao vien thu " << i+1 <<endl;
	for (int i = 0; i < n; i++)
	{
		a[i].xuat();
	}
	cout << " Giao vien co tien luong nho hon 2000 la : " << endl;
	for (int i = 0; i < n; i++)
	{
		a[i].min();
	}
	return 0;
} 
