#include <iostream>
using namespace std;
int main(){
	int cases;
	cin >> cases;
	int c = 0;
	while(cases--){
		int a, b, x;
		cin >> a >> b >> x;
		int s = 0;

		int n = abs(a-b);
		while(a != b){
			if(b < a) swap(a, b);
			n = min(n, abs(a-b)+s);
			b /= x;
			s++;
		}
		n = min(n, s);
		c++;
		cout << n << endl;
	}
}


