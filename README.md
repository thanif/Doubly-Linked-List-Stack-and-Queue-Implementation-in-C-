# Doubly-Linked-List-Stack-and-Queue-Implementation-in-C-Plus-Plus

# The following provides a description of the functions to be implemented for the List class.

# List()
This is the default constructor for the doubly linked list

# List(const List<T>& otherList)
This is the copy constructor for the doubly linked list
  
# ~List()
This is the destructor for the doubly linked list. It should delete all nodes in the linked list and deallocate
all dynamically allocated memory.

# void InsertAtHead(T item)
This function should insert a new node with the value stored in the variable “item”, at the front of the
linked list. Remember to handle any List class variables affected by this operation.

# void InsertAtTail(T item)
This function should insert a new node with the value stored in the variable “item”, at the rear of the
linked list. Remember to handle any List class variables affected by this operation.

# void InsertAfter(T toInsert, T afterWhat)
This function should insert a new node with the value stored in the variable “item”, right after the node
that has a value equal to the value of the variable “afterWhat”. If no such node exists in the linked list,
you may insert the new node at the end of the linked list.

# Node<T> *GetHead()
This function returns a pointer to the first node in the linked list

# Node<T> *GetTail()
This function returns a pointer to the last node in the linked listNode<T> *SearchFor(T item)
This function searches for a node in the linked list that has value equal to that stored in the variable
“item”. If such a node is found, its address is returned, otherwise, NULL is returned.

# void DeleteElement(T item)
This function searches for a node in the linked list that has value equal to that stored in the variable
“item”. If such a node is found, it is deleted from the list. Be sure to update any pointers affected by this
operation.

# void DeleteHead()
This function deletes the node at the front of the linked list. Be sure to update any pointers affected by
this operation.

# void DeleteTail()
This function deletes the node at the rear of the linked list. Be sure to update any pointers affected by this
operation.

# int Length()
This function returns the number of nodes presently in the linked list.

# The following is a summary of the functions for the Stack class:

# Stack()
The default constructor for the Stack class.

# Stack(const Stack<T>& otherStack)
The copy constructor for the Stack class.

# ~Stack()
The destructor for the Stack class.

# void Push(T item)
This function is used to add elements to the stack. The elements should be added to the underlying linked
list so that they can be later retrieved efficiently according to the LIFO order.

# T Peek()
This function returns the value currently stored at the top of the stack, without actually removing it.

# T Pop()
This function removes the element from the top of the stack and returns it.

# int Length()
This function returns the number of elements presently on the stack.

# The following is a summary of the member functions of the Queue class:

# Queue()
The default constructor for the Queue class.

# Queue(Queue<T>& otherQueue)
The copy constructor for the Queue class.

# ~Queue()
The destructor for the Queue class.

# void Enqueue(T item)
Add an item to the tail of the queue.

# T Peek()
Return the value of the item stored at the head of the queue without removing it from the queue.

# T Dequeue()
Remove the item stored at the head of the queue and return its value.

# int Length()
Return the number of items in the queue.
