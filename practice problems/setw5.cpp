#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	int x = 11;
	int y = 999;
	cout <<"12345678901234567890" <<endl;
	cout << setw(5) << x << setw(7) << y
		 << setw(8) << "Warm" << endl;

	cout << setfill('*');
	cout << setw(5) << x << setw(7) << y
		 << setw(8) << "Warm" << endl;
		 
	cout << setw(5) << x << setw(7) << setfill('#') 
		 << y << setw(8) << "Warm" << endl;
		 
	cout << setw(5) << setfill('@') << x 
		 << setw(7) << setfill('#') << y
		 << setw(8) << setfill('^') << "Warm" << endl;
	cout << setfill(' ');
	cout << setw(5) << x << setw(7) << y
		 << setw(8) << "Warm" << endl;
		 return 0;
		 
}