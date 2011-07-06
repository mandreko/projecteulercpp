using namespace std;

#include <iostream>
#include <sstream>
#include <string>
#include <math.h>
#include "utils.h"

int utils::lcm(int x,int y)
{
	int i;
	i=y;
	while(y%x!=0)
		y=y+i;
	return y;
}

int utils::gcd(int x,int y)
{
	int t;
	while (y!=0)
	{
		t=y;
		y=x%y;
		x=t;
	}
	return x;
}

string utils::reverseString(string input)
{
	string::reverse_iterator rit;
	stringstream reverse;
	for (rit=input.rbegin(); rit < input.rend(); rit++)
	{
		reverse << *rit;
	}
	return reverse.str();
}

string utils::intToString(int input)
{
	stringstream out;
	out << input;
	return out.str();
}

int utils::stringToInt(string input)
{
	int i = 0;
	istringstream stream(input);

	stream >> i;

	return i;
}

int* utils::generatePrimes(int* & list, int maxNum)
{
	maxNum--;

	int listMax = (int)sqrt(maxNum);

	for(int i=0; i < maxNum; i++)
	{
		list[i] = i+2;
	}

	//Go through list finding primes
	for(int i=0; i < listMax; i++)
	{
		//If the entry has been set to 0 ('removed'), skip it
		if(list[i] > 0)
		{
			//Remove all multiples of this prime
			//Starting from the next entry in the list
			//And going up in steps of size i
			for(int j = i+1; j < maxNum; j++)
			{
				if((list[j] % list[i]) == 0)
					list[j] = 0;
			}
		}
	}

	return list;
}
