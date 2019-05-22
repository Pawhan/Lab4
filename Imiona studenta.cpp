#include<iostream>
#include<experimental/optional>
#include<string>
using namespace std;
string ToSmallLetters(string k)
{
	for(int i =0;i<k.length();i++)
	{
		if(k[i]>65 and k[i]<90)
		{
			k[i]+=32;
		}
	}
	return k;
}
class Name
{
  string first_name;
  string second_name;
  string third_name;
  string last_name;
  public:
  	explicit Name(string f, string s, string t,string l)
  	{
  		first_name = f;
  		second_name = s;
  		third_name = t;
  		last_name = l;
	}
	explicit Name(string f, string s, string l)
	{
		first_name = f;
		second_name = s;
		last_name = l;
	}
	explicit Name(string f , string l)
	{
		first_name = f;
		last_name = l;
	}
	string FirstName()
	{
		return first_name;
	}
	string Surname()
	{
		return last_name;
	}
	void ToSurnameName()
	{
		cout<<last_name<<" "<<first_name<<" "<<second_name<<" "<<third_name<<endl;
	}
	void ToNameSurname()
	{
		cout<<first_name<<" "<<second_name<<" "<<third_name<<" "<<last_name<<endl;
	}
	void ToFullInitials()
	{
		cout<<first_name[0]<<"."<<second_name[0]<<"."<<third_name[0]<<"."<<last_name[0]<<endl;
	}
	void ToFirstNamesInitials()
	{
		cout<<first_name[0]<<"."<<second_name[0]<<"."<<third_name[0]<<"."<<last_name<<endl;
	}
	bool IsbeforeBySurname(string a)
	{
		bool t=true,x;
		string min="";
		string k=ToSmallLetters(a);
		last_name=ToSmallLetters(last_name);
		if(k.length() < last_name.length())
		{
			min=k;
		}
		else
		{
			min=last_name;
		}
		for(int i = 0; i<min.length();i++)
		{
			if(last_name[i]==k[i])
			{
				t=true;
			}
			else
			{
				t=false;
				if(last_name[i]<k[i])
					x=true;
				else
					x=false;
				break;
			}
		}
		if(t)
		{
			if(last_name.length()<=k.length())
			{
				x=true;
			}
			else
			{
				x=false;
			}
		}
		return x;
	}
};
int main()
{
	Name name("Nie","Wiem","Co","Robie");
	cout<<name.FirstName()<<endl;
	cout<<name.Surname()<<endl;
	name.ToNameSurname();
	name.ToSurnameName();
	name.ToFullInitials();
	name.ToFirstNamesInitials();
	cout<<name.IsbeforeBySurname("kraz")<<endl;
}
