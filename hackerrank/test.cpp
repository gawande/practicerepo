#include <iostream>
using namespace std;
int main(){
	int x=10;
	int &y=x;
	cout << y << "\n";
	cout << x << "\n";
	y=12;
	cout << y << "\n";
	cout << x << "\n";	
		
	return 0;
}
