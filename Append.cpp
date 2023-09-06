#include <iostream>
using namespace std;

int main()
{
    int num[] = {1,2,3,4,5,6,7,8,9,10};
    const int n = 10;
    int n2 = n+1;
    int num2[n2];
    cout<<"The current array: ";
    	for (int i=0; i<n; i++)
    	{
    		cout<<num[i]<<" ";
		}
    	for (int i=0; i<n; i++)
    	{
    		num2[i]=num[i];
		}
	cout<<"\nThe new array: ";
    int newval = 11;
    num2[n2-1] = newval;
    	for (int i=0; i<n2; i++)
    	{
    		cout<<num2[i]<<" ";
		}
    return 0;
}
