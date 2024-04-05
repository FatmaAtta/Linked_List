#include <iostream>
#include "LinkedList.h"

using namespace std;

namespace LinkedList{
    LinkedList::LinkedList():head(nullptr),last(nullptr),count(0){}
    DoublyLinkedList::DoublyLinkedList():head(nullptr),last(nullptr),count(0){}
    SNode::SNode(int data):data(data){}
    DNode::DNode(int data):data(data){}
    void LinkedList::pushBack(int num){
        SNode *newNode = new SNode(num);
        newNode->next=nullptr;
        
    }
    void DoublyLinkedList::pushBack(int num){
        DNode *newNode = new DNode(num);
        newNode->next=nullptr;
        newNode->prev=last;
        last=newNode;
    }
}