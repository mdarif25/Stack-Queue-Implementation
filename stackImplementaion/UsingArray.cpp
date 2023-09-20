

// <---------Stack Implementation Using Array----->
// LIFO
#include<bits/stdc++.h>
using namespace std;
int idx=-1;
int arr[20];
int Size(){
     return idx+1;
}
bool isEmpty(){
     if(idx==-1)return true;
     return false;
}
void push(int num){
     if(Size()==100)cout<<"stack is full\"\"overflow\n";
     else arr[++idx]=num;
}
void pop(){
     if(isEmpty())cout<<"Stack is empty\"\"underflow\n";
     else idx--;
}
void top(){
     if(isEmpty())cout<<"underflow\n";
     else cout<<arr[idx]<<endl;
}
int main(){
     push(10);
     push(20);
     push(30);
     push(40);
     top();
     pop();
     top();
     pop();
     top();
     top();
     push(100);
     push(-20);
     top();
     cout<<Size()<<endl;
     return 0;    
}
