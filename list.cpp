#ifndef __LIST_CPP
#define __LIST_CPP
#include<iostream>
#include <cstdlib>
#include "list.h"
using namespace std;
template <typename T>
List<T>::List()
{
 	head = NULL;
        tail = NULL;
        
        
}

template <typename T>
List<T>::List(List<T>& otherList)
{


	head = new Node<T>(otherList.head->GetValue());
	
	Node<T> *cur = head;
	
	for(Node<T> *cp_node = otherList.head->GetNext(); cp_node != NULL ; cp_node = cp_node->GetNext())
	{
		cur -> SetNext(new Node<T>(cp_node -> GetValue()));
		cur = cur->GetNext();
		
	}

	cur -> SetNext(NULL);

}

template <typename T>
List<T>::~List()
{
    Node<T> *temp; 
    while (head != NULL)
    {
    	temp = head;
    	head = head->GetNext();
    	delete temp;
    }
    tail = NULL;
    
}

template <typename T>
void List<T>::InsertAtHead(T item)
{

    
    Node<T> *new_node = new Node<T>(item); 
    new_node->SetNext(head); 
    new_node->SetPrev(NULL); 
    if (head != NULL) 
        head->SetPrev(new_node); 
    head = new_node; 
}

template <typename T>
void List<T>::InsertAtTail(T item)
{
    if(head == NULL && tail == NULL) 
    {
        tail = new Node<T>(item);
        head = tail;
    }
    else 
    {
        Node<T> *cur = tail;
        while(cur && item <= cur->GetValue()) 
        {
          cur = cur->GetPrev();
    	}
        if(cur == tail) 
        {
          cur->SetNext(new Node<T>(item));
          cur->GetNext()->SetPrev(tail);
          tail = cur->GetNext();
        }
        else if(cur) 
        {
          cur->GetNext()->SetPrev(new Node<T>(item));
          cur->GetNext()->GetPrev()->SetPrev(cur);
          cur->GetNext()->GetPrev()->SetNext(cur->GetNext());
          cur->SetNext(cur->GetNext()->GetPrev());
        }
        else if(!cur) {          
          head->SetPrev(new Node<T>(item));
          head->GetPrev()->SetNext(head);
          head = head->GetPrev();
        }
      }    
}

template <typename T>
void List<T>::InsertAfter(T toInsert, T afterWhat)
{

    int n = 0;
    
    Node<T> *temp = head;
    
    while (n<afterWhat)
    {
    	temp = temp->GetNext();
    	n++;
    }
 
    if (temp == NULL) { 
        cout << "Previous Node cannot be NULL"; 
        return; 
    } 
  
    
    Node<T> *new_node = new Node<T>(toInsert);   
    new_node->SetNext(temp->GetNext()); 
    temp->SetNext(new_node); 
    new_node->SetPrev(temp); 
  
    if (new_node->GetNext() != NULL) 
        new_node->GetNext()->SetPrev(new_node); 
}

template <typename T>
Node<T>* List<T>::GetHead()
{
	return head;
}

template <typename T>
Node<T>* List<T>::GetTail()
{
	return tail;
}

template <typename T>
Node<T> *List<T>::SearchFor(T item)
{
    Node<T> *temp;
    temp=head;
    while(temp!=NULL)
    {
        if(temp->GetValue()==item)
        {
            return temp;
            break;
        }
        temp=temp->GetNext();
    }
    return NULL;
}

template <typename T>
void List<T>::DeleteElement(T item)
{
    Node<T> *temp;
    temp=head;
    if(head==tail)
    {
        if(head->GetValue()!=item)
        {
            cout<<"could not delete"<<endl;
            return;
        }
        head=NULL;
        tail=NULL;
        delete temp;
        return;
    }
    if(head->GetValue()==item)
    {
        head=head->GetNext();
        head->SetPrev(NULL);
        delete temp;
        return;
    }
    else if(tail->GetValue()==item)
    {
        temp=tail;
        tail=tail->GetPrev();
        tail->SetNext(NULL);
        delete temp;
        return;
    }
    while(temp->GetValue()!=item)
    {
        temp=temp->GetNext();
        if(temp==NULL)
        {
            cout<<"element not found"<<endl;
            return;
        }
    }
    temp->GetNext()->SetPrev(temp->GetPrev());
    temp->GetPrev()->SetNext(temp->GetNext());
    delete temp;
}

template <typename T>
void List<T>::DeleteHead()
{
    if (head!=NULL)
    {
        Node<T> *temp = head;
        if (head == tail)
        {
            tail = NULL;
        }
        
        head = head->GetNext();
 
        delete temp;
 
        
 
        
 
    }
    
}

template <typename T>
void List<T>::DeleteTail()
{
    if (tail!=NULL)
    {
        Node<T> *temp = tail;
        if (head == tail)
        {
            head = NULL;
        }
        
        tail = tail->GetPrev();
 
        delete temp;
 
    }       
 
}

template <typename T>
int List<T>::Length()
{
	int len =0;
	
	Node<T> *temp;
	
	temp = head;
	
	while (temp!=NULL)
	{
		temp = temp->GetNext();
		len++;
	}
	return len;
}

#endif
