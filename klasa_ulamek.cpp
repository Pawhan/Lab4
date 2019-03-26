#include<iostream>
using namespace std;
class Ulamek
{
	public:
	int licznik;
	int mianownik;
	void dodaj()
	{
		bool t=true;
		cout<<"Podaj licznik"<<endl;
		cin>>licznik;
		while(t)
		{
			cout<<"Podaj mianownik"<<endl;
			cin>>mianownik;
			if(mianownik!=0)
			{
				t=false;break;
			}
			else
				t=true;
		}
	}
	void wypisz()
	{
		cout<<licznik<<"/"<<mianownik<<endl;
	}
};
int main(void)
{
	Ulamek ulamek;
	ulamek.dodaj();
	ulamek.wypisz();
}
