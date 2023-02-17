#ifndef LSLL_H_INCLUDED
#define LSLL_H_INCLUDED

#include <cstdlib>
#include <string>
#include <iostream>

#include "ListException.h"

class List{
private:
    int data[500];
    int last;

    bool isValidPos(const int&);
    void copyAll(const List&);

public:
    List();
    List(const List&);

    bool isEmpty();
    bool isFull();

    void insertData(const int&, const int&);
    void deleteData(const int&);

    int getFirstPos();
    int getLastPos();
    int getPrevPos(const int&);
    int getNextPos(const int&);

    int retrieve(const int&);

    std::string toString();

    void print();

    void deleteAll();

    List& operator = (const List&);
};

#endif // LSLL_H_INCLUDED
