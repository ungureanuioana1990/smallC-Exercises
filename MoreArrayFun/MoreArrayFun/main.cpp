#include <iostream>
#include <string>

using namespace std;


int main() {
	const int Array_Fun = 10;
	int someArray[Array_Fun];
	for (int i = 0; i < Array_Fun; i++) {
		someArray[i] = 1 + i;
		cout << i << endl;
	}

	return 0;

}