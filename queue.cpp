#ifndef __QUEUE_CPP
#define __QUEUE_CPP
#include "queue.h"

template <typename T>
Queue<T>::Queue()
{
	
}
    
template <typename T>
Queue<T>::Queue(Queue<T>& otherQueue)
{
	
	int num;
	
	Node<T> *temp = otherQueue.list.GetHead();

	while(temp != NULL)

	{

		num = temp->GetValue();

    		this->Enqueue(num);

    		temp = temp->GetNext();  

   	}

}

template <typename T>
Queue<T>::~Queue()
{
	list.~List();
}

template <typename T>
void Queue<T>::Enqueue(T item)
{
	list.InsertAtTail(item);
}

template <typename T>
T Queue<T>::Peek()
{
	return list.GetHead()->GetValue();
}

template <typename T>
T Queue<T>::Dequeue()
{
	int hv = list.GetHead()->GetValue();
	list.DeleteHead();
	return hv;	
}

template <typename T>
int Queue<T>::Length()
{
	return list.Length();
}

#endif
