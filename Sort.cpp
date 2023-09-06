#include <iostream>
using namespace std;

int main()
{
    int num[] = {1,2,3,4,5,6,7,8,9,10};
    const int n = 10;
    int num2[n];
    cout<<"The current array: ";
    	for (int i=0; i<n; i++)
    	{
    		cout<<num[i]<<" ";
		}
	cout<<"\nThe reverse array: ";
    	for (int i=n-1; i>=0; i--)
    	{
    		num2[n-1-i]=num[i];
    		cout<<num2[n-1-i]<<" ";
		}
	return 0;
}
