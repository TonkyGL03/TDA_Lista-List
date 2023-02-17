#include "LSLL.h"

using namespace std;


///private

void List::copyAll(const List& l){
    int i(0);
    while(i<= l.last){
        data[i] = l.data[i];

        i++;
    }

    last = l.last;
}

bool List::isValidPos(const int& p){
    return p >= 0 and p<= last;
}
///public

List::List() : last(-1){ }

List::List(const List& l){
    copyAll(l);
}

bool List::isEmpty(){
    return last == -1;
}

bool List::isFull(){
    return last == 499;
}

void List::insertData(const int& p, const int& e){
    if(isFull()){
        throw listException("posicion invalida, insertData");
    }

    if(p!=1 and !isValidPos(p)){
        throw  listException("posicion invalida, insertData");
        return;
    }

    int i(last);
    while(i > p){
        data[i + 1] = data[i];

        i--;
    }

    data[p + 1] = e;

    last++;
}

void List::deleteData(const int& p){
    if(!isValidPos(p)){
        throw listException("posicion invalida, deleteData");
        return;
    }

    int i(p);
    while(i < last){

        data[i] = data[i + 1];

        i++;
        }

    last--;
    }

int List::getFirstPos(){
    if(isEmpty()){
        return -1;
    }

    return 0;
}

int List::getLastPos(){
    return last;
}

int List::getPrevPos(const int& p){
    if(p == getFirstPos() or isValidPos(p)){
        return -1;
    }

    return p-1;
}

int List::getNextPos(const int& p){
    if(p==getLastPos() or isValidPos(p)){
        return -1;
    }

    return p+1;
}

int List::retrieve(const int& p){
    if(!isValidPos(p)){
        throw listException("posicion invalida, retrieve");
    }
    return data[p];
}

string List::toString(){
    string result;
    int i(0);

    while(i <= last){
        result += to_string(data[i]) + ",";

        i++;
    }

    result += "\n";

    return result;
}

void List::print(){
    int i(0);
    while(i<=last){
        cout << data[i++] << ",";
    }
    cout << endl;
}

void List::deleteAll(){
    last = -1;
}

List& List::operator = (const List& l){
    copyAll(l);

    return *this;
}

