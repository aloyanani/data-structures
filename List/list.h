#pragma once
#pragma once 
#include <iostream> 

template<class T>
class List {
private:
    struct Node {
        T data;
        Node* next;
        Node(T data) :data(data), next(nullptr) {}
        Node () {};
    };
    Node* root;
public:
    T value;
    List() :root(nullptr) {}
    List(T value) {
        root = new Node(value);
    }
    ~List() {
        while (root) {
            Node* nextNode = root;
            root = root->next;
            delete nextNode;
        }
        std::cout << "Destructor call" << std::endl;
    }
    void  push_front(T value) {
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = root;
        root = newNode;
    }
    void push_back(T value) {
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = nullptr;
        if (root == nullptr) {
            root = newNode;
        }
        else {
            Node* current = root;
            while (current ->next) {
                current = current->next;
            }
            current ->next = newNode;
        }
    }

    void print()
    {
        
        Node* current = root;
        while (current) {
            std::cout << current->data << " ";
            current = current->next;
        }
        std::cout << std::endl;
    
    }

    bool empty()
    {
        if (root == nullptr)
            return 1;
        else
            return 0;
    }


    void remove(T value)
    {
        if (root == nullptr)
        {
            return;
        }

        if (root->data == value)
        {
            Node* temp = root;
            root = root->next;
            delete temp;
            return;
        }

        Node* current = root;
        while (current -> next) {
            if (current->next->data != value)
            {
                current = current->next;
                continue;
            }
            if (current->next->data == value)
            {
                Node* temp = current->next;
                current-> next = current->next->next;
                delete temp;
                current = current->next;
            
                
            }
         
           
        }
        
        
    }
    T minimum() {
        auto temp = root->next;
        T min = root->data;
        while (temp->next) {
            if (min > temp->data) {
                min = temp->data;
            }
            temp = temp->next;
        }
        return min;
    }

    T maximum() {
        auto temp = root->next;
        T max = root->data;
        while (temp->next) {
            if (max < temp->data) {
                max = temp->data;
            }
            temp = temp->next;
        }
        return max;
    }


    class Iterator {
    private:
        Node* current;
    public:
        Iterator(Node* _current) : current(_current) {}
        Iterator& operator++() {                                  
            while (current) {
                current = current->next;
                return *this;
            }
            
        }
        
        Iterator operator++(int a) {
            Iterator temp = *this;
            while (current) {
                current = current->next;
                return *temp;
            }
            }
        bool operator==(Iterator it) {
            return current == it.current;
        }

        bool operator!=(Iterator it) {
            return current != it.current;
        }

        int& operator*() const {
            return current->data;
        }
        Iterator begin() {
            return Iterator(root);
        }

        Iterator end() {
            return nullptr;
        }
        };
};
