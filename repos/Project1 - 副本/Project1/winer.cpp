#define  _CRT_SECURE_NO_WARNINGS 1
#include<string> 
#include<iostream>
#include<stdio.h>

#include<valarray>
using namespace std;

template<class T1, class T2>
class Pair {
	
private:
	T1 l1;
	T2 l2;
public:

	Pair(const T1&x, const T1& y):l1(x),l2(y){}
	
	T1  first() { return l1; }
	T2 lesste() { return l2; }
	
	T1&  first1() { return l1; }
	T2& lesste2() { return l2; }

	

};

//template<class T1, class T2>
class Wine :Pair<valarray<int >, valarray<int>>{

private :	
	int years;
	string name;

public:
	Wine(const char *x, int y) :name(x), years(y) , Pair(valarray<int >(0,y), valarray<int >(0,y)){  }
	Wine(const char* x, int y, const int arr1[] , const int arr2[]) :name(x), years(y), Pair(valarray<int >(arr1,y), valarray<int >(arr2,y)) {}
	void Get() { 
	
		cout <<"Wine: " << name << endl;
		cout << "enter nums:  " << years << endl;
		for (int i = 0; i < years; i++)
		{
			
			cout << "enter Years: ";
			cin >> Pair::first1()[i];
			cout << "enter bottles: ";
			cin >> Pair::lesste2()[i];
			
		}

	
	}
	const string leble()const { return name; }
	//const string& Let()const{return }
	int sum()
	{

		
		return Pair::lesste2().sum();



	}
	void show();
};
void Wine::show()
{
	cout<<"\t" << name;
	cout << "  " << years;
	for (int i = 0; i < years; i++)
	{
		cout << Pair::first()[i]<<"    ";
		cout << Pair::lesste()[i]<<endl;
	}
}
int main()
{	
	
	char muns[20];
	int n;
	cin >> muns >> n;
	Wine drek(muns, n);
	drek.Get();
	drek.show();

}
