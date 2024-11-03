#include <iostream>
using namespace std;
int main()
{
	int pt;
	int zm;
	cout<<"Wprowadź liczbe: ";
	cin>>zm;
	cout<<"Wprowadź potege: ";
	cin>>pt;
	int wynik = 1;
	
	if (pt < 1){
	cout<<"wynik potęgi 0 to zawsze jest 1" ;
	return 0;
	}
	else if (pt % 2==1) {
    	while(pt>0){
    	wynik = wynik * zm;
    	pt=pt/2;
	    cout<<"krok";
	    }
	cout<<"wynik to: "<<wynik;
	}
	else {
    	while(pt>0){
    	wynik = wynik * zm;
    	pt=pt/2;
	    cout<<"krok";
	    }
	cout<<"wynik: "<<wynik;
	}
    return 0;
}
