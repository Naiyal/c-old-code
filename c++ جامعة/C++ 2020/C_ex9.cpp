#include <iostream >
using namespace std;
int main()
{
	unsigned int n;
	unsigned long factorial = 1;
	cout << "Enter a positive integer: ";
	cin >> n;
	
	for(int i = 1; i <=n; ++i)
	{
		factorial *= i; 	// factorial = factorial * i;
	}
	cout << "Factorial of " << n << " = " << factorial<<endl;

    system("pause");
    return 0;
}

