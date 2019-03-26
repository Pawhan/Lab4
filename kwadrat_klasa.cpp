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
class Square
{
	public:
		Punkt p1;
		Punkt p2;
		Punkt p3;
		Punkt p4;
		double Area(Square *kwadrat)
		{
			return (kwadrat->p1.x-kwadrat->p2.x)*(kwadrat->p1.x-kwadrat->p2.x)+(kwadrat->p2.y-kwadrat->p1.y)*(kwadrat->p2.y-kwadrat->p1.y);
		}
		double Circumference(Square * kwadrat)
		{
			return 4*sqrt((kwadrat->p1.x-kwadrat->p2.x)*(kwadrat->p1.x-kwadrat->p2.x)+(kwadrat->p2.y-kwadrat->p1.y)*(kwadrat->p2.y-kwadrat->p1.y));
		}
};
int main(void)
{
	Square kwadrat;
	kwadrat.p1.dodaj();
	kwadrat.p2.dodaj();
	cout<<kwadrat.Area(&kwadrat)<<endl;
	cout<<kwadrat.Circumference(&kwadrat)<<endl;
}
