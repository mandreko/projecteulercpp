/*
 * ProjectEuler9.cpp
 *
 *  Created on: Feb 20, 2009
 *      Author: mandreko
 */

using namespace std;

#include <iostream>
#include <cmath>
#include "ProjectEuler9.h"

void ProjectEuler9::Run()
{
	int product = 0;

	for(int x=1;x<1000;x++)
	{
		for(int y=1;y<1000;y++)
		{
			for (int z=1;z<1000;z++)
			{
				if ((x < y) && (y < z))
				{
					if (x + y + z == 1000)
					{
						if (pow(x,2) + pow(y,2) == pow(z,2))
						{
							cout << "x, y, z = " << x << " " << y << " " << z << endl;
							product = x * y * z;
							cout << "Product: " << product << endl;
						}
					}
				}
			}
		}
	}

}
