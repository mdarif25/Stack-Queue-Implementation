/*
   i)Implementing the stack using linked list and generalizing the stack with help of template
   ii)Idea to implement is Last In First Out (LIFO)
   implemented few operation on stack-->
   i)push
   ii)pop
   ii)display     --> display function is not there in stack given in STL 
        but just create here to see the stack

   iii)top
   iv)isempty
*/

#include<bits/stdc++.h>
using namespace std;
template<class T>class Stack{
    private:
           class Node{
             public:
                  T key;
                  Node*next;
                  Node(T num){
                    key=num;
                    next=NULL;
                  }
           }*head=NULL;
    public:
           bool isEmpty(){
               return head==NULL;
           }
           void push(T num){
                // created a node
                if(isEmpty())head=new Node(num);
                // inserting every upcoming element at head
                else {
                    Node*temp=new Node(num);
                    temp->next=head;
                    head=temp;
                }
           }
           void pop(){
               if(isEmpty())cout<<"underflow\n";
               else {
                  Node*temp=head;
                  head=head->next;
                  temp->next=NULL;
                  free(temp);
               }
           }
           // call the top before checking that its empty or not;
           T top(){
                return head->key;
           }
           void display(){
                 Node*temp=head;
                 while(temp!=NULL){
                    cout<<temp->key<<"->";
                    temp=temp->next;
                 }
                 cout<<"NULL\n";
           }
           
};
int main(){
    Stack<string>s;
    s.push("arif");
    s.push("joker");
    s.push("jos butler");
    s.push("smith");
    s.push("jennifer");
    s.display();
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.top()<<endl;
    s.pop();
    s.display();
    return 0;
}
