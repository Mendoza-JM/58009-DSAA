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
	num2[0] = num[0];
	int newnum = 11;
	num2[1] = newnum;
	for (int i=1; i<n; i++)
    	{
    		num2[i+1] = num[i];
		}
	cout<<"\nThe new array: ";
    	for (int i=0; i<n2; i++)
    	{
    		cout<<num2[i]<<" ";
		}
    return 0;
}


