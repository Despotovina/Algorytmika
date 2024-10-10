#include <iostream>
using namespace std;

void Przywitanie(string imie,string nazwisko)
{
	cout << imie;
	cout << (" ");
	cout << nazwisko;
}
int main()
{   
	string imie, nazwisko;
    cout << "Podaj swoje imie: ";
    cin >> imie;
    cout << "Podaj swoje nazwisko: ";
    cin >> nazwisko;
	Przywitanie(imie,nazwisko);
    
}



//return Przywitanie;