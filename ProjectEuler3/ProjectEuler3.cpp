using namespace std;

#include <iostream>
#include "ProjectEuler3.h"

void ProjectEuler3::Run()
{
	long long number = (long long)(600851475143.0);
	for (long long div = 3; div != number; div += 2)
	{
		while (number % div == 0)
		{
			number /= div;
		}
	}

	cout << number << endl;
}

