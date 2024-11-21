#include <iostream>
#include <list>
using namespace std;

int main(){
int s = 0;
cin >> s;
int l = 0;
int p = 20;
string lt = {1, 2, 5, 8, 9, 11, 15, 20 };
while (l <= p) {
	int sr = (l+p)/2;
	if (s>p){
	    cout << "nie ma takiego numeru " << endl;
	    return 0;
	}
	else if(sr=s) {
		cout << "miejsce w tabeli to " << sr <<endl;
		return 0;	
		}

	else if(s>sr) {
	l=sr+1;
	}
	else if(s<sr) {
	p=sr-1;

	}

}

return 0 ;
}
