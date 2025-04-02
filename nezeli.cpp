#include<iostream>
using namespace std;

int horner(int wsp[],int st, int x)
{
	if(st==0)
		return wsp[0];
	
	return x*horner(wsp,st-1,x)+wsp[st];
}

int main()
{
	int *wspol;
	int pot, argument;
	
	cout<<"Stopień wielomianu: ";
	cin>>pot;
	
	wspol = new int [pot];

	for(int i=0;i<=pot;i++)
	{
		cout<<"współczynnik przy potędze "<<pot-i<<": ";
		cin>>wspol[i];
	}
	
	cout<<"Podaj argument: ";
	cin>>argument;
	
	cout<<"schemat: ";
	cout<<"W( "<<argument<<" ) = "<<horner(wspol,pot,argument);

	return 0;
}
