#include <iostream>
#include "list.h"
using namespace std;
int main(){
    List l;
    l.append(10);
    l.append(20);
    l.append(30);
    l.append(40);
    l.remove(50);
    l.display();
    return 0;
}