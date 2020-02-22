#include<bits/stdc++.h>
using namespace std;
class Date
{
	private:
		int day;
		int month;
		int year;
	public:
		void nhap();
		void xuat();	
};
class Person
{
	protected:
		char hoten[50];
		Date ngaysinh;
		char quequan[50];
};
class Kysu : private Person
{
	private:
		char nganh[30];
		int namTN;
	public:
		void nhap();
		void xuat();
		friend void namTN_max(Kysu KS[], int n);
};

void Date::nhap()
{
	cout<<"		nhap vao day: "; cin>>day;
	cout<<"		nhap vao month: "; cin>>month;
	cout<<"		nhap vao year: "; cin>>year;
}
void Date::xuat()
{
	cout<<day<<"/ "<<month<<"/ "<<year;
}
void Kysu::nhap()
{
	cout<<"nhap vao ho ten: ";
	fflush(stdin);
	gets(hoten);
	cout<<"nhap vao ngay sinh: "<<endl;
	ngaysinh.nhap();
	cout<<"nhap vao que quan: ";
	fflush(stdin);
	gets(quequan);
	cout<<"nhap vao nganh: ";
	fflush(stdin);
	gets(nganh);
	cout<<"nhap vao nam tot nghiep: ";
	cin>>namTN;	
}
void Kysu::xuat()
{
	cout<<hoten<<setw(10);
	ngaysinh.xuat();
	cout<<setw(15)<<quequan<<setw(10)<<nganh<<setw(10)<<namTN<<endl;
}
void hienthi()
{
	cout<<"Ho ten"<<setw(10)<<"	    ngay sinh"<<setw(15)<<"que quan"<<setw(10)<<"nganh"<<setw(10)<<"nam TN"<<endl;
}
void namTN_max(Kysu KS[], int n)
{
	int max=KS[0].namTN;
	for(int i=1;i<n;i++)
	{
		if(KS[i].namTN>max)
			max=KS[i].namTN;
	}
	for(int i=0;i<n;i++)
	{
		if(KS[i].namTN==max)
			KS[i].xuat();
	}
}
int main()
{
	Kysu *KS;
	int n;
	cout<<"nhap vao so ky su: ";cin>>n;
	KS=(Kysu*) malloc(n*sizeof(Kysu));
	cout<<"Nhap vao danh sach ky su: "<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<"Ky su "<<i<<": "<<endl;
		KS[i].nhap();
	}
	cout<<"------------------------------------------------------"<<endl;
	hienthi();
	for(int i=0;i<n;i++)
	{
		KS[i].xuat();
	}
	cout<<"-------------------------------------------------------"<<endl;
	cout<<"thong tin cac ky su tot nghiep gan day nhat: "<<endl;
	hienthi();
	namTN_max(KS,n);
	free(KS);
	return 0;
}
