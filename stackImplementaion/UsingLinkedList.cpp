 // implementation using linked list
 // LIFO->last in first out

#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
       Node* Next;
       int key;
       Node(int x){
           Next=NULL;
           key=x;
       }
       
}*root=NULL;
/* function in Stack --
    i) push
    ii)pop
    ii)top
    iii)display
    iv)isEmpty
   */
  bool isEmpty(){
     return root==NULL;
  }
  void push(int num){
       if(root==NULL)
          root=new Node(num);
       else {
           Node*temp=new Node(num);
           temp->Next=root;
           root=temp;
       }
  }
  void top(){
     if(isEmpty())cout<<"stack is empty\n";
     else cout<<root->key<<endl;
  }
  void pop(){
      if(isEmpty())cout<<"underflow\n";
      else {
        Node*temp=root;
        root=root->Next;
        temp->Next=NULL;
        free(temp);
      }
  }
  void display(){
    Node*temp=root;
     while(temp!=NULL){
        cout<<temp->key<<"->";
        temp=temp->Next;
     }
     cout<<"NULL\n";
  }
  int Size(){
    int s=0;
    Node*temp=root;
    while(temp!=NULL){
        temp=temp->Next;
        s++;
    }
    return s;
  }
  
int main(){
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    push(6);
    push(7);
    display();
    top();
    pop();
    top();
    pop();
    top();
    display();
    return 0;
}
