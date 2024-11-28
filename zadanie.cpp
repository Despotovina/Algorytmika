#include <iostream>
using namespace std;
int main()
{
	int pt;
	int zm;
	cout<<"Wprowadz liczbe: ";
	cin>>zm;
	cout<<"Wprowadz potege: ";
	cin>>pt;
	int wynik = zm;
	
	if (pt == 0){
	cout<<"wynik potegi 0 to zawsze jest 1" ;
	return 0;
	}
	else if (pt % 2==1) {
		pt=pt-1;
    	while(pt>0){
    	wynik = zm * wynik;
    	pt=pt/2;
	    cout<<"krok";
	    }
	cout<<"wynik to: "<<wynik;
	}
	else {
    	while(pt>0){
    	wynik = zm * wynik;
    	pt=pt/2;
	    cout<<"krok";
	    cout<<pt;
	    }
	cout<<"wynik: "<<wynik;
	}
    return 0;
}
