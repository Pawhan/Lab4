#include<iostream>
#include<cmath>
using namespace std;
class Punkt
{
	public:
		double x;
		double y;
		void dodaj()
		{
			cout<<"Podaj wspolrzedna x"<<endl;
			cin>>x;
			cout<<"Podaj wspolrzedna y"<<endl;
			cin>>y;
		}
};
double Distance(Punkt *punkt1, Punkt *punkt2)
{
	double odleglosc;
	odleglosc = sqrt(((punkt1->x)-(punkt2->x))*((punkt1->x)-(punkt2->x))+((punkt1->y)-(punkt2->y))*((punkt1->y)-(punkt2->y)));
	return odleglosc;
}
int main(void)
{
	Punkt punkt1, punkt2;
	punkt1.dodaj();
	punkt2.dodaj();
	cout<<"Odleglosc wynosi    "<<Distance(&punkt1,&punkt2)<<endl;
	return 0;
}
