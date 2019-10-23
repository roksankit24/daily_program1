#include <iostream>
using namespace std;
template <class T>
class Queue
{
    int front,rear;
    int *arr;
    int size;
public:
    Queue(int s)
    {
        size=s;
        arr=new T[s];
        front=rear=-1;
    }
    void enque(T data);
    void deque();
    T Front();
    T back();
    void print();
};
template <class T>
void Queue<T> :: enque(T data)
{
    if(rear==size-1)
    {
        cout << "Queue is full" << endl;
        return;
    }
    if(front==-1 && rear==-1)
    {
        front++;
        rear++;
        arr[front]=data;
        return;
    }
    arr[++rear]=data;
}
template <class T>
void Queue<T> :: deque()
{
    if(front==rear==-1)
    {
        cout << "Queue is empty" << endl;
        return;
    }
    front++;
}
template <class T>
void Queue<T> :: print()
{
    if(front==rear==-1)
    {
        cout << "Queue is empty" << endl;
        return;
    }
    for(int i=front;i<=rear;i++)
        cout << arr[i] << " ";
    cout << endl;
}
template <class T>
T Queue<T> :: Front()
{
    if(front==-1)
    {
        cout << "Queue is empty" << endl;
        return -1;
    }
    return arr[front];
}
template <class T>
T Queue<T> :: back()
{
    if(rear==-1)
    {
        cout << "Queue is empty" << endl;
        return -1;
    }
    return arr[rear];

}
