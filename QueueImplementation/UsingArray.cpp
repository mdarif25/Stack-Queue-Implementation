//   Queue implementation using an array
//   FIFO
#include<bits/stdc++.h>
using namespace std;
int front=-1,rear=-1;
int arr[6];
bool isEmpty(){
    if(rear==front)return true;
    return false;
}
int Size(){
    return rear-front;
}
void Enqueue(int num){
    if(Size()==6)cout<<"overflow\n";
    else arr[(++rear)%6]=num;
}

void Dequeue(){
     if(isEmpty())cout<<"underflow\n";
     else front++;
}
void  peek(){
    if(isEmpty())cout<<"queue is empty\n";
    else cout<<arr[front+1]<<endl;
}
int main(){
    Enqueue(1);
    Enqueue(2);
    Enqueue(3);
    Enqueue(4);
    Enqueue(5);
    Enqueue(6);
    // Enqueue(7);
    // cout<<isEmpty()<<endl;
    // cout<<Size()<<endl;
    Dequeue();
    // peek();
    Dequeue();
    // peek();
    Dequeue();
    // cout<<Size()<<endl;
    // Dequeue();
    // Dequeue();
    // Dequeue();
    // cout<<Size()<<endl;
    // cout<<isEmpty()<<endl;
    Enqueue(7);    
    Enqueue(8);    
    Enqueue(9); 
    // cout<<Size()<<endl;
    cout<<isEmpty()<<endl;   
    // Enqueue(9);    

    return 0;
} 
