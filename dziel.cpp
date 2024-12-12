#include <iostream>
#include <list>
using namespace std;

int main(){
int k = 2;
int n = 0;
cout << "wprowadz liczbe ";
cin >> n;
cout << "liczba to: " << n << " | ";
	while (n > 1) {
		if (n % k == 0) {
		n=n / k;
		cout << k << " ";
		}

		else {
			k=k+1;
			if (n % k == 0) {
		n=n / k;
		cout << k << " ";
		}
			else {
				
		cout << n << " ";
		break;
			}
		}
	}
}