#ifndef __STACK_CPP
#define __STACK_CPP
#include "stack.h"

template <typename T>
Stack<T>::Stack()
{	
}
    
template <typename T>
Stack<T>::Stack(Stack<T>& otherStack)
{
	int num;
	
	Node<T> *temp = otherStack.list.GetHead();

	while(temp != NULL)

	{

		num = temp->GetValue();

    		this->Push(num);

    		temp = temp->GetNext();  

   	}

}

template <typename T>
Stack<T>::~Stack()
{
	list.~List();
}

template <typename T>
void Stack<T>::Push(T item)
{
	list.InsertAtTail(item);
}

template <typename T>
T Stack<T>::Peek()
{
	return list.GetTail()->GetValue();
}

template <typename T>
T Stack<T>::Pop()
{
	int tv = list.GetTail()->GetValue();
	list.DeleteTail();
	return tv;	
}

template <typename T>
int Stack<T>::Length()
{
	return list.Length();
}

#endif
