#include <iostream>
#include "../../avl_tree.h"

int main()
{
	avl_tree<int, int> avl;
	for(int i=0; i<1001; i++)
		avl.add(i, i);
	for(int i=0; i<1001; i++)
		avl.del(i);
	for(int i=0; i<1001; i++)
		if(avl.find(i))
			std::cout << "find" << std::endl;
}
