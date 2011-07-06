using namespace std;

#include <iostream>
#include <cmath>
#include "ProjectEuler5.h"
#include "../lib/utils.h"

void ProjectEuler5::Run()
{
	//int lcm = utils::lcm(1, (utils::lcm(2,(utils::lcm(3,(utils::lcm(4,(utils::lcm(5,(utils::lcm(6,(utils::lcm(7,(utils::lcm(8,(utils::lcm(9,(utils::lcm(10,(utils::lcm(11,(utils::lcm(12,(utils::lcm(13,(utils::lcm(14,(utils::lcm(15,(utils::lcm(16,(utils::lcm(17,(utils::lcm(18,(utils::lcm(19, 20)))))))))))))))))))))))))))))))))))));

	int lcm = 1;
	for(int i=1;i<=20;i++)
	{
		lcm = utils::lcm(lcm, i);
	}

	cout << "Least Common Multiple: " << lcm << endl;
}

