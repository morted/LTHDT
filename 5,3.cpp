#include<bits/stdc++.h>
using namespace std;
class Vehicle
{
	protected:
		char nhanhieu[30];
		int namSX;
		char hang[30];
	public:
		void nhap();
		void xuat();
};
class Oto: public Vehicle
{
	private:
		int sochongoi;
		int dungtich;
	public:
		void nhap();
		void xuat();
};
class Moto: public Vehicle
{
	private:
		int phankhoi;
	public:
		void nhap();
		void xuat();
};
void Vehicle::nhap()
{
	cout<<"	nhap vao nhan hieu: ";
	fflush(stdin);
	gets(nhanhieu);
	cout<<"	nhap vao nam SX: ";
	cin>>namSX;
	cout<<"	nhap vao hang: ";
	fflush(stdin);
	gets(hang);
}
void Vehicle::xuat()
{
	cout<<"	nhan hieu: "<<nhanhieu<<endl;
	cout<<"	nam SX: "<<namSX<<endl;
	cout<<"	hang: "<<hang<<endl;
}
void Oto::nhap()
{
	cout<<"nhap vao thong so cua oto: "<<endl;
	cout<<"	nhap vao so cho ngoi: ";cin>>sochongoi;
	cout<<"	nhap vao dung tich: "; cin>>dungtich;
}
void Oto::xuat()
{
	cout<<"thong so cua oto: "<<endl;
	cout<<"	so cho ngoi: "<<sochongoi<<endl;
	cout<<"	dung tich: "<<dungtich<<endl;
}
void Moto::nhap()
{
	cout<<"nhap vao thong so cua Moto: "<<endl;
	cout<<"	nhap vao Phan khoi: ";cin>>phankhoi;
}
void Moto::xuat()
{
	cout<<"thong so cua Moto: "<<endl;
	cout<<"	phan khoi: "<<phankhoi<<endl;
}
int main()
{
	Oto o;
	Moto m;
	o.nhap();
	o.Vehicle::nhap();
	m.nhap();
	m.Vehicle::nhap();
	o.xuat();
	o.Vehicle::xuat();
	m.xuat();
	m.Vehicle::xuat();
	return 0;
}

