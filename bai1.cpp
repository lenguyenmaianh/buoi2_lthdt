#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

struct ngay_sinh
{
   	int ngay, thang, nam;
};
class khach_hang
{
	private:
	   char ht[30];
       ngay_sinh ns;
	   char cmt[10];
	   char hk[50];
		friend void sap_xep(khach_hang a[],int n );
		friend void tim_kh(khach_hang a[],int n );
    public : 
    
    	void nhap()
    	{
    		cout<<" Ho Ten: "; fflush(stdin); gets(ht);
 			cout<<" Ngay : "; fflush(stdin); cin >> ns.ngay; 
			cout<<" Thang: "; fflush(stdin); cin >> ns.thang; 
			cout<<" Nam: "; fflush(stdin); cin >> ns.nam;
 			cout<<" Cmt: "; fflush(stdin); gets(cmt);
 			cout<<" Hk: "; fflush(stdin); gets(hk);
		}
    	void xuat()
    	{
			cout<<"\n-----------------------\n";
			cout<<" Ho Ten: "<<ht<<endl;
			cout<<" Ngay sinh:"<<ns.ngay<<endl;
			cout<<" Thang sinh:"<<ns.thang<<endl;
			cout<<" Nam sinh:"<<ns.nam<<endl;
			cout<<" CMT: "<<cmt<<endl;
			cout<<" ho khau: "<<hk<<endl;
			
			
		}
    	friend void sap_xep(khach_hang a[],int n);
    	friend void tim_kh(khach_hang a[],int n );

};

void  nhapds(khach_hang a[], int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<" nhap khach hang thu "<<i+1<<endl;
		a[i].nhap();
	}
}

void xuatds(khach_hang a[], int n)
{
	for(int i=0;i<n;i++)
	{
		a[i].xuat();
	}
}

void sap_xep(khach_hang a[],int n )
{
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(strcmp(a[i].ht,a[j].ht)>0)
			{
				khach_hang tg = a[i];
				a[i] =a[j];
				a[j] =tg;
			}
		}
	}
}

void tim_kh(khach_hang a[],int n )
{
	for(int i=0;i<n;i++)
	{
		if(a[i].ns.thang == 12)
		{
			cout<<"khach hang co thang sinh 12 la : "<<i+1<<endl;
		}
	}
}


int main ()
{
	
	khach_hang a;
	int n;
	cout<<" nhap thong tin cua khach hang a:"<<endl;
	a.nhap();
	cout<<" xuat thong tin cua khach hang a:"<<endl;
	a.xuat();
	cout<<"So luong khach hang can nhap la: "<<endl;
	cin>>n;
	khach_hang b[n];
	nhapds(b,n);
	xuatds(b,n);
	cout<<" sap xep ho ten theo chieu tang dan";
	sap_xep(b,n);
	xuatds(b,n);
	cout<<" xuat danh sach khach hang sinh thang 12"<<endl;
	tim_kh(b,n);		
}
