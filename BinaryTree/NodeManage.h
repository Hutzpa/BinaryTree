#pragma once
#include "Node.h"
#include <iostream>
class NodeManage
{
public:
	NodeManage();

	void Push(int value, Node **node)
	{
		if ((*node) == NULL)
		{
			(*node) = new Node;
			(*node)->value = value;
			(*node)->lNode = (*node)->rNode = NULL;
			return; 
		}
		if (value > (*node)->value) Push(value, &(*node)->rNode);
		else Push(value, &(*node)->lNode);
	}

	void Display(Node *node,int nodeCount)
	{
		if (node == NULL)
			return;
		else{
			Display(node->lNode,++nodeCount);
			for (int i = 0; i < nodeCount;i++)
			{
				std::cout << node->value << "| Node level: " << nodeCount  << std::endl;
				nodeCount--;
			}
		}
		Display(node->rNode, ++nodeCount);
	}

	~NodeManage();
};

