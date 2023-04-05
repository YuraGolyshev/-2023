#include <iostream>

using namespace std;

int fib(int n)
{
	int a=0;    int b=1;    int sum;
    	for(int i=1;i<=n;i++)
    	{
        	if(i == 1)
            		cout << a << endl;
        	if(i == 2)
            		cout << b << endl;
        	if(i>2)
        	{
        		sum = a+b;
        		a = b;
        		b = sum;
        		cout << sum << endl;
        	}
    	}
    	return 0;
}


int main()
{
        cout << "Hello, World!" << endl;
	fib(10);
}

