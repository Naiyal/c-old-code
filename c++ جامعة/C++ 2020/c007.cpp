#include <iostream >
using namespace std;
int main()
{
	int i=1 , n ;
	cin >> n;
	
	do
	{ 
		cout << "Hello " << i << endl  ;
		i++ ; 
	}while ( i <= n );
	
 	cout << "END" << endl  ;
 	
	system("pause");
    return 0;
}
