#include <iostream>
#include <cstdlib>
#include <vector>
#include "../avl_tree.h"

int main()
{
	avl_tree<int, int> avl;
	std::vector<int> v;
	for(int i=0; i<1001; i++)
	{
		int n = rand() % 1001;
		avl.add(n, n);
		v.push_back(n);
	}
	std::vector<int>::iterator i;
	for(i = v.begin(); i != v.end(); i++)
		std::cout << *avl.find(*i) << std::endl;
}
