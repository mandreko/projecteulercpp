/*
 * ProjectEuler4.cpp
 *
 *  Created on: Feb 19, 2009
 *      Author: mandreko
 */

using namespace std;

#include <iostream>
#include "ProjectEuler4.h"
#include "../lib/utils.h"

bool ProjectEuler4::isPalindrome(int number)
{
	// convert the int to a string
	string s = utils::intToString(number);

	// then compare it reversed
	return (s == utils::reverseString(s));
}

void ProjectEuler4::Run()
{
	int largestPalindrome = 0;

	for(int x=1;x<1000;x++)
	{
		for(int y=1;y<1000;y++)
		{
			int product = x * y;
			if ((ProjectEuler4::isPalindrome(product)) && (product > largestPalindrome))
			{
				largestPalindrome = product;
			}
		}
	}

	cout << "Largest Palindrome: " << largestPalindrome << endl;
}
