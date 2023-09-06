#include <iostream>
using namespace std;

int main()
{
    int num[] = {1,2,3,4,5,6,7,8,9,10};
    int len = sizeof(num) / sizeof(num[0]);
    cout<<"The number of elements in array num is: "<<len;
    return 0;
}
