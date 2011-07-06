using namespace std;

#include <iostream>
#include <cmath>
#include "ProjectEuler6.h"

void ProjectEuler6::Run()
{
	const int UpTo = 100;
	int sumOfSquares = 0;
	int squareOfSums = 0;

	for (int i=1;i<=UpTo;i++)
	{
		sumOfSquares += pow((double)i, (double)2);
		squareOfSums += i;
	}

	squareOfSums = pow((double)squareOfSums, (double)2);

	cout << "Sum of squares: " << sumOfSquares << endl;
	cout << "Square of sums: " << squareOfSums << endl;

	cout << "Answer: " << (squareOfSums - sumOfSquares) << endl;
}
