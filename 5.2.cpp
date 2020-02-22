#include<bits/stdc++.h>
using namespace std;
class Printer
{
	protected:
		int trongluong;
		char hangsx[30];
		int namSX;
		int tocdo;
};
class Dotprinter: private Printer
{
	private:
		char matdokim[30];
	public:
		void nhap();
		void xuat();
};
class Laserprinter: private Printer
{
	private:
		char dophangiai[30];
	public:
		void nhap();
		void xuat();
};
void Dotprinter::nhap()
{
	cout<<"nhap vao thong so cua may in kim: "<<endl;
	cout<<"	nhap vao trong luong: "; cin>>trongluong;
	cout<<"	nhap vao hang sx: "; fflush(stdin); gets(hangsx);
	cout<<"	nhap vao nam sx: "; cin>>namSX;
	cout<<"	nhap vao toc do: "; cin>>tocdo;
	cout<<"	nhap vao mat do kim: ";fflush(stdin); gets(matdokim);
}
void Dotprinter::xuat()
{
	cout<<"thong so cua may in kim: "<<endl;
	cout<<"	trong luong: "<<trongluong<<endl;
	cout<<"	hang sx: "<<hangsx<<endl;
	cout<<"	nam sx: "<<namSX<<endl;
	cout<<"	toc do: "<<tocdo<<"trang/phut"<<endl;
	cout<<"	mat do kim: "<<matdokim<<endl;
}
void Laserprinter::nhap()
{
	cout<<"nhap vao thong so cua may in Laser: "<<endl;
	cout<<"	nhap vao trong luong: "; cin>>trongluong;
	cout<<"	nhap vao hang sx: "; fflush(stdin); gets(hangsx);
	cout<<"	nhap vao nam sx: "; cin>>namSX;
	cout<<"	nhap vao toc do: "; cin>>tocdo;
	cout<<"	nhap vao do phan giai: ";fflush(stdin); gets(dophangiai);
}
void Laserprinter::xuat()
{
	cout<<"thong so cua may in Laser: "<<endl;
	cout<<"	trong luong: "<<trongluong<<endl;
	cout<<"	hang sx: "<<hangsx<<endl;
	cout<<"	nam sx: "<<namSX<<endl;
	cout<<"	toc do: "<<tocdo<<"trang/phut"<<endl;
	cout<<"	do phan giai: "<<dophangiai<<endl;
}
int main()
{
	Dotprinter DP;
	Laserprinter LP;
	DP.nhap();
	LP.nhap();
	DP.xuat();
	LP.xuat();
	return 0;
}
