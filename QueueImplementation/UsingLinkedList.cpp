// Implementation of Stack using Linked List
// idea->First In First Out(FIFO)

#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
       Node* next;
       int key;
       Node(int x){
           next=NULL;
           key=x;
       }
}*front=NULL,*rear=NULL;

// operation on queue---
/*
        i)  Enqueue()
        ii) Dequeue()
        iii)Front()
        iv) Display()
        v)isEmpty()
*/
bool isEmpty(){
    return rear==NULL;
}
void Enqueue(int num){
     if(isEmpty()){
        rear=new Node(num);
        front=rear;
     }
     else{
        rear->next=new Node(num);
        rear=rear->next;
     }
}
void Dequeue(){
      if(isEmpty())cout<<"Underflow\n";
      else {
        Node*temp=front;
        front=front->next;
        temp->next=NULL;
        free(temp);
      }
}
void Front(){
    if(isEmpty())cout<<"Queue is empty\n";
    else cout<<front->key<<endl;
}
void Display(){
     Node*temp=front;
     while(temp!=NULL){
        cout<<temp->key<<"->";
        temp=temp->next;
     }
     cout<<"NULL"<<endl;
}
int main(){
    Enqueue(1);
    Enqueue(2);
    Enqueue(3);
    Enqueue(4);
    Enqueue(5);
    Enqueue(6);
    Enqueue(7);
    Enqueue(8);
    Enqueue(9);    
    Enqueue(10);    
    Display();
    Front();
    Dequeue();
    Front();
    Dequeue();
    Front();
    Dequeue();
    Front();
    Dequeue();
    Display();
    return 0;
}


