#include <iostream>
using namespace std;

int main(){
int s = 0;
cin >> s;
int l = 0;
int p = 7;
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

}
	
cout << s;

return 0 ;
}
