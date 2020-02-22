#include<bits/stdc++.h>
using namespace std;
class Electronic
{
	protected:
		string congsuat;
		string dienap;
	public:
		Electronic(string congsuat, string dienap);
		~Electronic();
};
class Maygiat: public Electronic
{
	private:
		int dungtich;
		string loai;
	public:
		Maygiat(string congsuat, string dienap, int dungtich, string loai);
		void xuat();
};
class Tulanh: public Electronic
{
	private:
		int dungtich;
		int songan;
	public:
		Tulanh(string congsuat, string dienap,int dungtich, int songan);
		void xuat();
};
Electronic::Electronic(string congsuat, string dienap)
{
	this->congsuat=congsuat;
	this->dienap=dienap;
}
Electronic::~Electronic()
{
	cout<<"------------------------------------------------"<<endl;
}
Maygiat::Maygiat(string congsuat, string dienap, int dungtich, string loai): Electronic(congsuat,dienap)
{
	this->dungtich=dungtich;
	this->loai=loai;
}
Tulanh::Tulanh(string congsuat, string dienap,int dungtich, int songan): Electronic(congsuat, dienap)
{
	this->dungtich=dungtich;
	this->songan=songan;
}
void Maygiat::xuat()
{
	cout<<"thong so cua may giat: "<<endl;
	cout<<"	cong suat: "<<congsuat<<endl;
	cout<<"	dien ap: "<<dienap<<endl;
	cout<<"	dung tich: "<<dungtich<<"KG"<<endl;
	cout<<"	loai: "<<loai<<endl;
}
void Tulanh::xuat()
{
	cout<<"thong so cua tu lanh: "<<endl;
	cout<<"	cong suat: "<<congsuat<<endl;
	cout<<"	dien ap: "<<dienap<<endl;
	cout<<"	dung tich: "<<dungtich<<"lit"<<endl;
	cout<<"	so ngan: "<<songan<<endl;
}
int main()
{
	Maygiat MG=Maygiat("1000KWh","220V",9,"Samsung");
	Tulanh TL=Tulanh("1200KWh","250V",20,2);
	MG.xuat();
	TL.xuat();
	return 0;
}

