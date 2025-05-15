#include<iostream>
using namespace std;

int *pom; 


void scal(int tab[], int lewy, int srodek, int prawy) 
{
	int i = lewy, j = srodek + 1;
 

  for(int i = lewy;i<=prawy; i++) 
    pom[i] = tab[i];  
  
  for(int k=lewy;k<=prawy;k++) 
  if(i<=srodek)
    if(j <= prawy)
         if(pom[j]<pom[i])
             tab[k] = pom[j++];
         else
             tab[k] = pom[i++];
    else
        tab[k] = pom[i++];
  else
      tab[k] = pom[j++];
}

void sortowanie_przez_scalanie(int tab[],int lewy, int prawy)
{
	
	if(prawy<=lewy) return; 
	
	
	int srodek = (prawy+lewy)/2;
	
	
	sortowanie_przez_scalanie(tab, lewy, srodek); 
	sortowanie_przez_scalanie(tab, srodek+1, prawy);
	
	
	scal(tab, lewy, srodek, prawy);
}

int main()
{
	int *tab,
	n; //liczba elementów tablicy
	
	cin>>n;
	tab = new int[n]; 
	pom = new int[n];
	
	
	for(int i=0;i<n;i++)
		cin>>tab[i];
	
	
	sortowanie_przez_scalanie(tab,0,n-1);
	
	//wypisanie wyników
	for(int i=0;i<n;i++)
		cout<<tab[i]<<" ";
	
	return 0;
}
