#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
class Doanhnghiep;
class Date
{
	private:
		int day;
		int month;
		int year;
	public:
		void nhap();
		void xuat();
		friend void tongdoanhthu(Doanhnghiep D[], int n);	
};
class Diachi
{
	private:
		char dienthoai[12];
		char phuong[30];
		char quan[30];
		char thanhpho[30];
	public:
		friend class Doanhnghiep;
		friend void HTDN_hanoi(Doanhnghiep D[], int n);
};
class Doanhnghiep
{
	private:
		int maDn;
		char tenDn[60];
		Date ngayTl;
		Diachi diachi;
		char giamdoc[30];
		long doanhthu;
	public:
		void nhap();
		void xuat();
		friend void HTDN_hanoi(Doanhnghiep D[], int n);
		friend void tongdoanhthu(Doanhnghiep D[], int n);
		friend void update(Doanhnghiep D[], int n);	
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
void Doanhnghiep::nhap()
{
	cout<<"nhap vao maDn: ";cin>>maDn;
	cout<<"nhap vao tenDn: ";
	fflush(stdin);
	gets(tenDn);
	cout<<"nhap vao ngayTl: "<<endl;
	ngayTl.nhap();
	cout<<"nhap vao dia chi: "<<endl;
	cout<<"		dien thoai: ";
	fflush(stdin);
	gets(diachi.dienthoai);
	cout<<"		phuong: ";
	fflush(stdin);
	gets(diachi.phuong);
	cout<<"		quan: ";
	fflush(stdin);
	gets(diachi.quan);
	cout<<"		thanh pho: ";
	fflush(stdin);
	gets(diachi.thanhpho);
	cout<<"nhap vao ten giam doc: ";
	fflush(stdin);
	gets(giamdoc);
	cout<<"nhap vao doanh thu: ";cin>>doanhthu;
}
void Doanhnghiep::xuat()
{
	cout<<maDn<<setw(10)<<tenDn<<setw(9);
	ngayTl.xuat();
	cout<<setw(10)<<diachi.dienthoai<<setw(10)<<diachi.phuong<<setw(12)<<diachi.quan<<setw(12)<<diachi.thanhpho<<setw(15)<<giamdoc<<setw(10)<<doanhthu<<endl;
}
void hienthi(Doanhnghiep D[], int n)
{
	cout<<"maDn"<<setw(10)<<"tenDn"<<setw(10)<<"ngayTl"<<setw(25)<<"		dia chi		"<<setw(25)<<"giamdoc"<<setw(10)<<"doanhthu"<<endl;
	cout<<setw(40)<<"dienthoai"<<setw(10)<<"phuong"<<setw(10)<<"quan"<<setw(10)<<"  thanhpho"<<endl;
	for(int i=0;i<n;i++)
	{
		D[i].xuat();
	}
}
void HTDN_hanoi(Doanhnghiep D[], int n)
{
	cout<<"maDn"<<setw(10)<<"tenDn"<<setw(10)<<"ngayTl"<<setw(25)<<"		dia chi		"<<setw(25)<<"giamdoc"<<setw(10)<<"doanhthu"<<endl;
	cout<<setw(40)<<"dienthoai"<<setw(10)<<"phuong"<<setw(10)<<"quan"<<setw(10)<<"  thanhpho"<<endl;
	for(int i=0;i<n;i++)
	{
		if(stricmp(D[i].diachi.thanhpho,"ha noi")==0)
			D[i].xuat();
	}
}
void tongdoanhthu(Doanhnghiep D[], int n)
{
	long tong=0;
	for(int i=0;i<n;i++)
	{
		if(D[i].ngayTl.year==2015)
			tong+=D[i].doanhthu;	
	}
	cout<<"tong doanh thu nhung doanh nghiep TL nam 2015 la: "<<tong<<endl;
}
void update(Doanhnghiep D[], int n)
{
	int ma,dem=0;
	cout<<"nhap vao ma doanh nghiep muon thay doi thong tin: "; cin>>ma;
	for(int i=0;i<n;i++)
		if(D[i].maDn==ma)
			{
				D[i].nhap();
				dem++;
				break;
			}
	if(dem==0)
		cout<<"khong tim thay doanh nghiep nao..."<<endl;
	else
		cout<<"ban da thay doi thong tin thanh cong..."<<endl;
}
int main()
{
	int n;
	Doanhnghiep *D;
	cout<<"nhap vao so doanh nghiep: "; cin>>n;
	D=(Doanhnghiep*) malloc(n*sizeof(Doanhnghiep));
	cout<<"nhap vao danh sach doanh nghiep"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<"Doanh nghiep thu "<<i<<endl;
		D[i].nhap();
	}
	do{
		system("cls");
		hienthi(D,n);
		cout<<endl<<endl;
		cout<<"			---------------------------Menu--------------------------"<<endl;
		cout<<"			|1.Hien thi nhung doanh nghiep o Ha noi.................|"<<endl;
		cout<<"			|2.Tinh tong doanh thu nhung doanh nghiep TL nam 2015...|"<<endl;
		cout<<"			|3.Sua thong tin doanh nghiep...........................|"<<endl;
		cout<<"			|4. Exit................................................|"<<endl;
		cout<<"			---------------------------------------------------------"<<endl;
		int op;
		cout<<"nhap vao op cua ban: ";cin>>op;
		switch(op)
		{
			case 1: 
			{
				HTDN_hanoi(D,n);
				break;
			}
			case 2: {
				tongdoanhthu(D,n);
				break;
			}
			case 3: {
				update(D,n);
				break;
			}
			case 4: exit(0);
			default : cout<<"xem lai menu..."<<endl;
			
		}
		cout<<"press any key to continue..."<<endl;
		getch();
	}
	while(1);
	free(D);
	return 0;
}
