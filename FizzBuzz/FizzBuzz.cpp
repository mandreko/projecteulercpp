using namespace std;

#include <iostream>
#include "FizzBuzz.h"

void FizzBuzz::Run()
{
	for(int i=1;i<=100;i++)
	{
		if((i % 3 == 0) && (i % 5 == 0))
		{
			cout << "FizzBuzz" << "\r\n";
		}
		else if (i % 3 == 0)
		{
			cout << "Fizz" << "\r\n";
		}
		else if (i % 5 == 0)
		{
			cout << "Buzz" << "\r\n";
		}
		else
		{
			cout << i << "\r\n";
		}
	}
}
