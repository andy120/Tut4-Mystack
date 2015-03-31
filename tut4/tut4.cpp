// tut4.cpp : Defines the entry point for the console application.
//

#include <iostream>
using namespace std;

template <class T>
class Stack
{
private:
	typedef struct node{
		T data;
		node *ptr;
	};
	node *topPtr;

	static node NULL_NODE;
public:
	Stack()
	{
		*topPtr = NULL_NODE;
	}

	bool isEmpty()
	{
		return *topPtr == NULL;
	}

	bool isFull(node *n)
	{
		n = new (nothrow)node;
		return n == NULL;
	}

	void push(T);
	void peek(T &);
	void pop(T &);

};

template <typename T>
void Stack<T>::push(T value)
{
	node *n;
	if (!isFull(n))
	{
		n->data = value;
		n->ptr = *topPtr
			*topPtr = n;
	}
	else throw std::bad_alloc("out of memory");
}

template<typename T>
void Stack<T>::peek(T &retVar)
{
	if (!isEmpty())
		retVar = topPtr->data;
}

template<typename T>
void Stack<T>::pop(T &retVar)
{
	if (!isEmpty())
	{
		retVar = topPtr->data;
		node *temp = topPtr;
		topPtr = topPtr->ptr;
		delete temp;
	}
}

int main()
{
	Stack<int> myStack;
	myStack.push(10);

}
