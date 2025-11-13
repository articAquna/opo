#include <iostream>
using namespace std;
int  function(int p) {
	if (p == 0)return 0;
	cout << p << endl;
		return p + function(p - 1);

}

		int main() {
			int a;
		cout << "its a recursive funtion defined to mimict p";
		cin >> a;
		cout << function(a);

	}

