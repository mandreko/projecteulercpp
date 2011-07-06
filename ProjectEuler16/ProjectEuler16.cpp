/*
 * ProjectEuler16.cpp
 *
 *  Created on: Feb 20, 2009
 *      Author: mandreko
 */

using namespace std;

#include <iostream>
#include <math.h>
#include "ProjectEuler16.h"

void ProjectEuler16::Run()
{
	double number = pow(2, 1000);
	int  sum = 0;
	char result[500], *ptr;

	sprintf(result, "%.0lf", number);

	for (ptr = result; *ptr != 0; ptr++) {
	  /* lazy char to int conversion */
	  sum += *ptr - '0';
	}

	printf("%d\n", sum);

}
