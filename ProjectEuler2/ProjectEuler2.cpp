using namespace std;

#include <iostream>
#include "ProjectEuler2.h"

void ProjectEuler2::Run()
{
	int sum = 0;
	int previousFab = 0;
	int currentFab = 1;

	while(true)
	{
		int z = previousFab + currentFab;

		if (z > 4000000)
		{
			break;
		}

		previousFab = currentFab;
		currentFab = z;

		if (currentFab %2 == 0)
		{
			sum += currentFab;
		}
	}

	cout << "Project Euler 2: " << sum << endl;
}
