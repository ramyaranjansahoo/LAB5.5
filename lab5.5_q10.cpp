//printing mirrored right angle star pattern
#include <iostream>
using namespace std;
int main()
{
int a;
// asking for input
cout << "enter the size"<< endl;
cin >> a;
// printing the stars
for (int i=0; i<a; i++){
	for (int j=0; j<a-i;j++){
		cout << " ";
		}
	for (int j=0; j<=i;j++){
		cout << "*";
		}
	cout <<endl;		
	}
return 0;
}

