#include<bits/stdc++.h>
using namespace std;

class Queue{
    public:

    int *queue;
    int size;
    int front;
    int rear;
    Queue(int size){
        this->size = size;
        queue = new int[size];
        front = 0;
        rear = 0;
    }
    void push(int data)
    {
        if(rear == size)
        {
            cout<<"Queue is Full"<<endl;
        }
        else{
            queue[rear] = data;
            rear++;
        }
    }
    void pop(){
        if(front == rear)
        {
            cout<<"Queue is empty"<<endl;
        }
        else{
            queue[front] = -1;
            front++;
            if(front == rear){
                front = 0;
                rear = 0; 
            }
        }
    }
    int getfront(){
        if(front == rear){
            cout<<"Queue is empty";
            return -1;
        }
        else{
            return queue[front];
        }
    }
    bool isEmpty(){
         if(front == rear)
         return true;

         return false;
    }
    int getSize(){
        return rear - front;
    }
};
int main()
{
    Queue queue(10);
    queue.push(20798);
     queue.push(242340);
      queue.push(20);
       queue.push(24233420);
       queue.push(20);
       queue.push(20338);
       queue.push(2480);
       cout<<"Size of queue: "<<queue.getSize()<<endl;
       queue.pop();
       cout<<"Size of queue: "<<queue.getSize()<<endl;
    return 0;
}