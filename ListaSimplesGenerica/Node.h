#include <string>

using namespace std;

template <class T>

class Node{
private:
    T info;
    Node<T>* next;
public:
    Node(T val, Node<T>* p = nullptr);
    T getInfo();
    Node<T>* getNext();
    void setInfo(T val);
    void setNext(Node<T>* p);
    ~Node();
};

