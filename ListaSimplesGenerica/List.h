#include "Node.cpp"
#include <string>

using namespace std;

template <class T>

class List
{
private:
    Node<T>* first;
public:
    List();
    bool isEmpty();
    Node<T>* getFirst();
    Node<T>* getLast();
    void insertFirst(T val);
    void insert(T val);
    void show();
    bool search(T val);
    void remove(T val);
    ~List();

};
