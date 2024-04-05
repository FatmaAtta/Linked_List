#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>
using namespace std;

namespace LinkedList{
    class SNode{
    public:
        int data;
        SNode* next;
        SNode(int data);
    };

    class DNode{
    public:
        int data;
        DNode* next;
        DNode* prev;
        DNode(int data);
    };

    class LinkedList{
    public:
        int count;
        SNode *head;
        SNode *last;
        void pushBack(int num);
        void pushFront(int num);
        void popFront(int num);
        void popBack(int num);
        void insertMiddle(int num, int index);
        bool isEmpty();
        int size();
        void printList();
        LinkedList();
    };

    class DoublyLinkedList{
        int count;
        DNode *head;
        DNode *last;
        void pushBack(int num);
        void pushFront(int num);
        void insertMiddle(int num, int index);
        void popFront(int num);
        void popBack(int num);
        bool isEmpty();
        int size();
        void printList();
        DoublyLinkedList();
    };

    class CircularLinkedList{

    };
}

#endif