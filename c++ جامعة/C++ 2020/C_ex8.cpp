#include <iostream >
using namespace std;
int main()
{
	int i , sum=0 , mark ;
	float average;
	for (i=1;i<=7;++i)
	{    
        cin>>mark ;
		sum=sum+mark ;
	} 
	
    average=sum/7.0;
 	cout<< " sum is " << sum << "\n average is " << average << endl;
    
    
    system("pause");
    return 0;
}

