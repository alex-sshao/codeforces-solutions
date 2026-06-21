#include <iostream>

using namespace std;

/* problem d notes:
	- nevermind k does matter
	- race to the bottom, can't choose value higher than chosen first. 
	
*/

int main(){
	int tests = 0; 
	cin >> tests;
	while(tests--){
		int k; int i; int t;
		cin >> i;
		cin >> k;
		int s = i+1; int ns = 0;
		int n = 0;
		while(i--){
			cin >> t;
			if(t == s) ns++;
			if(t < s){
				if(s < i+1) n = s;
				s = t;
				ns = 1;
			}
		}
		if(!(ns % 2) or n) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}
