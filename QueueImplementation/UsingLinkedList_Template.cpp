// Implementation of Stack using Linked List
// idea->First In First Out(FIFO)

// operation on queue---
/*
	i)  Enqueue()
	ii) Dequeue()
	iii)Front()
	iv) Display()
	v)isEmpty()
*/
#include <bits/stdc++.h>
using namespace std;
template <class T> class Queue
{
    private:
        class Node
        {
            public:
            Node *next;
            T key;
            Node(T x)
            {
                next = NULL;
                key = x;
            }
        } *front = NULL, *rear = NULL;

    public:
        bool isEmpty()
        {
            return rear == NULL;
        }
        void Enqueue(T num)
        {
            if (isEmpty()) {
                rear = new Node(num);
                front = rear;
            } else {
                rear->next = new Node(num);
                rear = rear->next;
            }
        }
        void Dequeue()
        {
            if (isEmpty())
                cout << "Underflow\n";
            else {
                Node *temp = front;
                front = front->next;
                temp->next = NULL;
                free(temp);
            }
        }
        void Front()
        {
            if (isEmpty())
                cout << "Queue is empty\n";
            else
                cout << front->key << endl;
        }
        void Display()
        {
            Node *temp = front;
            while (temp != NULL) {
                cout << temp->key << "->";
                temp = temp->next;
            }
            cout << "NULL" << endl;
        }
};
int main()
{
	Queue<char>q;
	q.Enqueue('a');
	q.Enqueue('b');
	q.Enqueue('c');
	q.Enqueue('d');
	q.Enqueue('e');
	q.Enqueue('f');
	q.Enqueue('g');
	q.Enqueue('h');
	q.Enqueue('i');
	q.Enqueue('j');
	q.Display();
	q.Front();
	q.Dequeue();
	q.Front();
	q.Dequeue();
	q.Front();
	q.Dequeue();
	q.Front();
	q.Dequeue();
	q.Display();
	return 0;
}
