#ifndef NODE_H
#define NODE_H

#include "Creation.h"

using namespace std;

struct Node
{
private:
    Creation creation;
    Node *next;
    Node *prev;

public:
    Node();
    Node(const Creation &c);
    Creation getCreation() const;
    void setNext(Node *n);
    void setPrev(Node *p);
    Node *getNext() const;
    Node *getPrev() const;
    void setCreation(const Creation &newC);
};

// TODO need to rewrite these operators at some point

// bool operator==(const Node &lhs, const Node &rhs);
// bool operator!=(const Node &lhs, const Node &rhs);
// bool operator<(const Node &lhs, const Node &rhs);
// bool operator>(const Node &lhs, const Node &rhs);
// bool operator<=(const Node &lhs, const Node &rhs);
// bool operator>=(const Node &lhs, const Node &rhs);
//
// bool operator==(const Node &lhs, const string &rhs);
// bool operator!=(const Node &lhs, const string &rhs);
// bool operator<(const Node &lhs, const string &rhs);
// bool operator>(const Node &lhs, const string &rhs);
// bool operator<=(const Node &lhs, const string &rhs);
// bool operator>=(const Node &lhs, const string &rhs);
//
// bool operator==(const string &lhs, const Node &rhs);
// bool operator!=(const string &lhs, const Node &rhs);
// bool operator<(const string &lhs, const Node &rhs);
// bool operator>(const string &lhs, const Node &rhs);
// bool operator<=(const string &lhs, const Node &rhs);
// bool operator>=(const string &lhs, const Node &rhs);

#endif