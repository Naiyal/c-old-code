#include<iostream>
#include<math.h>
using namespace std;
int main( )
{	
  	int i , j ,n ;
	float a[50] , t ;
	cout<< " Enter No. of elements : " ;
	cin>> n ;
	for ( i = 1 ; i <= n ; ++ i )
    	{ 
      		cout << " Enter a"<< i << " : " ;
      		cin >> a [ i ] ;
     	}
	
	for ( i = 1 ; i < n ; ++i )
	{
		for ( j = i +1 ; j <= n ; ++j )
			{
              	if ( a [ j ] < a [ i ] )
                  {
                     t = a [ j ] ;
                     a [ j ] = a [ i ];
                     a [ i ] = t ;
                   }
        	}
	}
cout << " \n Printing the sorted Array : \n\n " ;

for ( i = 1 ; i <= n ; ++i )
       cout << a [ i ] << " " ;


system("PAUSE");
return 0;
}

