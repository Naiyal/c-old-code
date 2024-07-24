#include <iostream>
using namespace std;
int main()
{
float n1,n2,n3;
cout <<"enter three numbers: " ;
cin >> n1 >> n2 >> n3;

if(n1>= n2 && n1>= n3)
{	cout <<"largest is " << n1 <<endl;
	cout <<"done " << n1 <<endl;
	}
else if(n2>= n1 && n2>= n3)
	cout <<"largest is " << n2 <<endl;

else
	cout <<"largest is " << n3 <<endl;

	return 0;	
}
