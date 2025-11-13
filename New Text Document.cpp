#include <iostream>
using namespace std;
int  function(int p) {
	if (p == 0)return 0;
	cout << p << endl;
		return p + function(p - 1);

}

		int main() {
			int a;
		cout << "a rough day indeed";
		cin >> a;
		cout << function(a);

	}
