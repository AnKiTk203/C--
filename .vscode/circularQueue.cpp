#include<bits/stdc++.h>
using namespace std;

class circularQueue{
    public:

    int *arr;
    int front;
    int rear;
    int size;

    circularQueue(int size){

        this->size = size;

        arr = new int[size];

        front = -1;

        rear = -1;

    }
    void push(int data){
        //Check if full
        //First element insertion
        //Circular Nature
        //Normal Flow
       if( (rear + 1 == size && front == 0) || (rear == front-1))
        {
            cout<<"Queue OverFlow"<<endl;
            return;
        }
        else if(front == -1)
        {
            front = rear = 0;
        }
        else
        {
            rear =  (rear + 1) % size;
        }
        arr[rear] = data;    
    }
    void pop()
    {
        //When No element
        if(front == -1 )
        {
            cout<<"Queue UnderFlow"<<endl;
            return;
        }
        cout<<"Popped element is: "<<arr[front]<<endl;
        arr[front] = -1;
        //ONLY 1 Element in queue
        if(front == rear)
        {
            front = rear = -1;
        }
        //Circular Nature
        else if(front == size-1)
        {
            
            front = 0;
        }
        //normal Flow
        else{
            
            front++;
        }
    }
};

int main()
{
    circularQueue circularQueue(4);
    circularQueue.push(3);
     circularQueue.push(4);
      circularQueue.push(9);
       circularQueue.push(3);
       circularQueue.push(3);
       circularQueue.pop();
        circularQueue.push(3);
         circularQueue.push(3);
         circularQueue.pop();circularQueue.pop();circularQueue.pop();circularQueue.pop();circularQueue.pop();
         circularQueue.pop();

    return 0;
}