/*
 * ProjectEuler20.cpp
 *
 *  Created on: Feb 22, 2009
 *      Author: mandreko
 */
#include <iostream>
#include <vector>
#include <math.h>
#include "ProjectEuler20.h"

using namespace std;

long ProjectEuler20::chopLast(long& _n)
{
	long tmp(_n);
	_n = static_cast<int>(floor(static_cast<float>(_n) / 10));
	return tmp - (10 * _n);
}


void ProjectEuler20::Run()
{
	time_t t0(time(0));

		vector<int> digits;
		vector<int>::iterator it, end;
		long carryOver;

		digits.push_back(1);
		for (int factor = 2; factor <= 100; ++factor)
		{
			carryOver = 0;
			end = digits.end();
			for (it = digits.begin(); it != end; ++it)
			{
				carryOver = (*it * factor) + carryOver;
				*it = chopLast(carryOver);
			}
			while (carryOver)
			{
				digits.push_back(chopLast(carryOver));
			}
		}

		long solution(0);
		end = digits.end();
		for (it = digits.begin(); it != end; ++it)
		{
			solution += *it;
		}

		cout << "euler20: " << solution << ", took " << difftime(time(0), t0) << " seconds.\n";

}
