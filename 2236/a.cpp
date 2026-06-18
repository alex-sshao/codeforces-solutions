#include <iostream> 
#include <string>
#include <sstream>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int findn(int *arr, int sz){
	int min = arr[0];
	int max = min;
	for(int i = 0; i < sz; ++i){
		max = (arr[i] > max)? arr[i] : max;
		min = (arr[i] < min)? arr[i] : min;
	}
	return max-min+1;
}
int main(){
	int iters;
	cin >> iters;
	while(iters--){
		int len;
		cin >> len;
		int *arr = (int *) malloc(sizeof(int) * len);
		for(int i = 0; i < len; ++i)
			cin >> arr[i];
		cout << findn(arr, len) << endl;
		free(arr);
	}
}
