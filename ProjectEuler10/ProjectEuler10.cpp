/*
 * ProjectEuler10.cpp
 *
 *  Created on: Feb 20, 2009
 *      Author: mandreko
 */

using namespace std;

#include <iostream>
#include "ProjectEuler10.h"
#include "../lib/utils.h"

void ProjectEuler10::Run()
{
	int maxNum = 2000000;
	int asdf[maxNum-1];
	long long sum = 0;

	int* list = asdf;

	list = utils::generatePrimes(list, maxNum);

	for(int i=0; i < maxNum; i++)
	{
		if(list[i] > 0)
		{
			sum += list[i];
		}
	}

	cout << "Sum of primes: " << sum << endl;
}
