#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int helper(string s, int len, int k){
	while(len-- && len-k >= 0){
		if(s[len] == '1' && s[len-k] != '1'){
			s[len]--;
			s[len-k]++;
		}
		if(s[len] == '1' && s[len-k] == '1'){
			s[len]--;
			s[len-k]--;
		}
	}
	do{
		if(s[len] == '1') return 0;
	}while(len--);
	
	return 1;
}
int main(){
	int tests = 0;
	cin >> tests;

	for(int i = 0; i < tests; ++i){
		int len; int k;
		cin >> len;
		cin >> k;
		string s;
		cin >> s;
		if(!helper(s, len, k)){
			cout << "NO" << endl;
			continue;
		}
		cout << "YES" << endl;
	}
	return 0;

}
