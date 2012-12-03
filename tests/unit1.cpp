#include <iostream>
#include "../../avl_tree.h"

int main()
{
	avl_tree<int, int> avl;
	for(int i=0; i<1001; i++)
		avl.add(i, i);
	for(int i=0; i<1001; i++)
		std::cout << *avl.find(i) << std::endl;
}
