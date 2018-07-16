// BinaryTree.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "Node.h"
#include "NodeManage.h"

int main()
{
	Node *node = NULL;

	NodeManage nodeMan;

	for (int i = 0; i < 200; i++)
	{
		nodeMan.Push(rand(), &node);
	}
	std::cout << "My tree" << std::endl;
	nodeMan.Display(node,0);
    return 0;
}

