/*
 * ProjectEuler7.cpp
 *
 *  Created on: Feb 19, 2009
 *      Author: mandreko
 */

using namespace std;

#include <iostream>
#include "ProjectEuler7.h"

void ProjectEuler7::Run()
{
	unsigned int prime_nb = 2;
	unsigned long i = 5;
	unsigned int k;
	bool found;
	for(;;)
	{
		found = true;
		for(k = 2; k < i; ++k)
			if(!(i % k))
				found = false;
		if(found)
			++prime_nb;
		if(prime_nb >= 10001)
			break;
		i += 2; // all even numbers are not prime
	}
	cout << i;
}
