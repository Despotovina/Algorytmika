#include <iostream>
using namespace std;
int DisplayResult(int suma)
{
   	cout<<"Suma liczb od 1 do n: "<<suma; 
}
int CalculateSumRecursive(int n)
{
    int liczba = 0;
    int suma = 0;
    while(n>0) 
    {
        liczba=liczba+1;
        suma=suma + liczba;
        n=n-1;
    }
    DisplayResult(suma);
}
int  GetNumberFromUser()
{
   	int n;

	cout<<"Podaj n: ";
	cin>>n;
    CalculateSumRecursive(n);
}
int main()
{
    GetNumberFromUser();
	return 0;
}