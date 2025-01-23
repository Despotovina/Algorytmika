#include <iostream>
using namespace std;

int binar(int liczba)
{
	int i=0,tab[4];

	while(liczba>0)
	{
		tab[i++]=liczba%2;
		liczba/=2;
	}

	for(int j=i-1;j>=0;j--)
		cout<<tab[j];
}

int main()
{
	int liczba;

	cout<<"Podaj liczbę: ";
	cin>>liczba;

	cout<<" Postać binarna: ";
	binar(liczba);

	return 0;
}
