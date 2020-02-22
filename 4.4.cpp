#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
class giaiptbac2
{
	private:
		int a,b,c;
	public:
		void nhap();
		void xuat();
		void giai();
		giaiptbac2();
		giaiptbac2(int a, int b,int c);
};
void giaiptbac2::nhap()
{
	cout<<"nhap vao cac he so cua pt bac 2: "<<endl;
	cout<<"nhap vao a: ";cin>>a;
	cout<<"nhap vao b: ";cin>>b;
	cout<<"nhap vao c: ";cin>>c;
}
void  giaiptbac2::xuat()
{
	if(a==0)
	{
		printf("day la pt bac nhat %dx+%d=0\n",b,c);
	}
	else
		printf("pt bac 2 co dang %dx^2+%dx+%d=0\n",a,b,c);
}
void giaiptbac2::giai()
{
	if(a==0)
	{
		if(b==0&&c==0)
			cout<<"pt co vo so nghiem"<<endl;
		else
			if(b==0&&c!=0)
				cout<<"pt vo nghiem"<<endl;
			else
				cout<<"pt co nghiem duy nhat: x="<<(float)-c/b<<endl;
	}
	else
	{
		float dt=b*b-4*a*c;
		if(dt<0)
			cout<<"pt da cho vo nghiem"<<endl;
		else
			if(dt==0)
				cout<<"pt co nghiem kep: x12="<<(float)(-b/(2*a))<<endl;
			else
				cout<<"pt co 2 nghiem phan biet: x1="<<(float)((-b+sqrt(dt))/(2*a))<<setw(10)<<"x2="<<(float)((-b-sqrt(dt))/(2*a))<<endl;
	}
}
giaiptbac2::giaiptbac2(int a, int b, int c)
{
	this->a=a;
	this->b=b;
	this->c=c;
}
giaiptbac2()
{
}
int random(int minN, int maxN){
    return minN + rand() % (maxN + 1 - minN);
}
int main()
{
	int x,y,z;
	x=random(-100,100);//tao 1 so ngau nhien [-100,100]
	y=random(-100,100);
	z=random(-100,100);
	cout<<"giai pt bac 2 P"<<endl;
	giaiptbac2 P=giaiptbac2(x,y,z);
	P.xuat();
	P.giai();
	cout<<"press any key to continue...";
	getch();
	system("cls");
	cout<<"giai pt bac 2 Q"<<endl;
	giaiptbac2 Q=giaiptbac2();
	Q.nhap();
	Q.xuat();
	Q.giai();
	return 0;
}

