#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
class Vector
{
	private: 
		int x, y;
	public:
		void nhap();
		void xuat();
		Vector operator+(Vector A);
		Vector operator-(Vector A);
};
void Vector::nhap()
{
	cout<<"		nhap vao toa do x: "; cin>>x;
	cout<<"		nhap vao toa do y: "; cin>>y;
}
void Vector::xuat()
{
	cout<<"("<<x<<", "<<y<<")"<<endl;
}
Vector Vector::operator+(Vector A)
{
	Vector C;
	C.x=this->x+A.x;
	C.y=this->y+A.y;
	return C;
}
Vector Vector::operator-(Vector A)
{
	Vector C;
	C.x=this->x-A.x;
	C.y=this->y-A.y;
	return C;
}
int main()
{
	Vector A,B,C;
	cout<<"nhap vao vector A: "<<endl;
	A.nhap();
	cout<<"nhap vao vector B: "<<endl;
	B.nhap();
	cout<<"A";A.xuat();
	cout<<"B";B.xuat();
	C=A.operator+(B);
	cout<<"tong hai Vector: A+B="; C.xuat();
	C=A.operator-(B);
	cout<<"Hieu hai Vector: A-B="; C.xuat();
	return 0;
}
