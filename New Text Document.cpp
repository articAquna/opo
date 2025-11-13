#include <iostream>
using namespace std;
int  function(int p) {
	if (p == 0)return 0;
	cout << p << endl;
	for ( int i = 0 ; i < 5 ; i++){ 
		return p + function(p - i);
	}
}

		int main() {
			int a;
		cout << "a rough day indeed";
		cin >> a;
		cout << function(a);

	}

