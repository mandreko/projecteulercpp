using namespace std;

#include <iostream>
#include "ProjectEuler1.h"

void ProjectEuler1::Run()
{
	int sum = 0;
	for(int i=0;i<1000;i++)
	{
		if ((i %3 == 0) || (i %5 == 0))
		{
			sum += i;
		}
	}

	cout << "Project Euler - 1: " << sum << endl;
}
