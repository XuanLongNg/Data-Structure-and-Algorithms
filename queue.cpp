#include <iostream>
#include<math.h>
using namespace std;
template<class T>
class Queue {
private:
    int front;
    int rear;
    T *data;
    int size;
public:
    Queue(int = 10);
    ~Queue();
    bool isFull();
    bool isEmpty();
    bool peek(T&);
    bool enqueue(const T);
    bool dequeue(T&);
};
 
template<class T>
Queue<T>::Queue(int size)
{
    if (size > 0 && size < 1000)
        this->size = size;
    else
        this->size = 10;
    rear = -1;
    front = 0;
    data = new T[size];
}
 
template<class T>
Queue<T>::~Queue()
{
    delete[] data;
}
 
template<class T>
bool Queue<T>::isFull()
{
    if (rear == size)
        return true;
    return false;
}
 
template<class T>
bool Queue<T>::isEmpty()
{
    if (rear == -1)
        return true;
    return false;
}
 
template<class T>
bool Queue<T>::peek(T& Item)
{
    if (isEmpty() == true)
        return false;
    Item = data[rear];
    return true;
}
 
template<class T>
bool Queue<T>::enqueue(const T Item)
{
    if (isFull() == true)
        return false;
    rear++;
    data[rear] = Item;
    return true;
}
 
template<class T>
bool Queue<T>::dequeue(T &Item) 
{
    if (isEmpty() == true || front > rear)
        return false;
    Item = data[front];
    front++;
    return true;
}
 
int main() {
    Queue<int> q(100);
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);
    q.enqueue(6);
    q.enqueue(7);
    int temp;
    while (q.dequeue(temp) )
    {
        cout << temp << endl;
    }
    return 0;
}