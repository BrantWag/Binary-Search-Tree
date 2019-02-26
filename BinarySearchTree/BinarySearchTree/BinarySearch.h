#pragma once
#include <memory>

template <typename generic>
class Node 
{
	Node() 
	{

	}
	Node(generic key) 
	{
		data = key;
	}

	~Node() 
	{
		data = NULL:
		left = nullptr;
		right = nullptr;

	}

	Node * getL()
	{
		return left;
	}
	Node * getR()
	{
		return right;
	}
	generic getData()
	{
		return data;
	}
	void set_L(Node * newLeft)
	{
		//left =
	}
	void set_R(Node * newRight)
	{
		//right =
	}
	void set_Data(genericType newData)
	{
		//data =
	}

};

//class for tree
template <typename generic>
class Tree
{
private:
	// Attributes
	Node<genericType> * root;

public:
	// Constructor
	Tree()
	{
		root = nullptr;
	}
	//insert data into tree (overload 1)
	void insert(generic dataadded)
	{

	}
	//overload 2
	void insert(Node <generic>* currentNode, generic dataadded) 
	{

	}
	//delete values from tree 
	void destroy(generic data_destroy) 
	{

	}
	//find data in tree (find overload 1)
	Node <generic>* find(generic valueToFind)
	{

	}
	//find overlaod 2
	Node <generic>* find(Node<generic>* currentNode, generic valueToFind) 
	{

	}
	//find parent overload 1
	Node <generic>* find_Parent(generic valueToFind) 
	{

	}
	//find parent overlaod 2 
	Node <generic>* find_Parent(Node<generic>* currentNode, generic valueTofind)
	{

	}
	//Maximum overload 1
	Node <generic>* maximum() 
	{

	}
	//max overlaod 2 
	Node<generic>* maxium(Node<generic>* currentNode) 
	{

	}
	//Minimum overload 2
	Node<generic>*minimum() 
	{

	}
	//min overload 2
	Node<generic>* minimum(Node<generic>* currentNode) 
	{

	}

};
