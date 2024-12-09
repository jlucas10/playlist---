#include "Node.h"

Node::Node() : next(nullptr), prev(nullptr) {}

Node::Node(const Creation &c) : creation(c), next(nullptr), prev(nullptr) {}

Creation Node::getCreation() const
{
    return creation;
}

void Node::setCreation(const Creation &newC)
{
    creation = newC;
}

Node *Node::getNext() const
{
    return next;
}

void Node::setNext(Node *n)
{
    next = n;
}

Node *Node::getPrev() const
{
    return prev;
}

void Node::setPrev(Node *p)
{
    prev = p;
}