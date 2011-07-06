#ifndef UTILS_H_
#define UTILS_H_

class utils
{
	public:
		static int lcm(int x, int y);
		static int gcd(int x, int y);
		static string reverseString(string input);
		static string intToString(int input);
		static int stringToInt(string input);
		static int* generatePrimes(int* & list, int maxNum);
	private:
};

#endif /*UTILS_H_*/
