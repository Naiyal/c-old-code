#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
int x;
cin >> x;
switch (x) {
	case 1 : cout << x+1 ; break;
	case 2 : cout << x+2;
	default: cout << "error";
}
	return 0;
}
