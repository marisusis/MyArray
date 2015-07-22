#include <iostream>
#include <string>
#include <time.h>
#include <cstdlib>

using namespace std;

int main() {
	string names[4] = {"Billy", "Bobby", "Timmy", "Jimmy"};
	for (int i=0;i<names.length;i++) {
		cout << names[i] << endl;
	}
	return 0;
	
}