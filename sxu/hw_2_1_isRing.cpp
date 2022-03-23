#include<iostream>
#include<hw_2_1_list.h>

int main() {
    // List<int> l;
    
    // l.append(1);
    // l.append(2);
    // l.append(3);

    return 0;
}

template<typename T>
bool isRing(List<T> l) {
    Node<T> * slow = l.head;
    Node<T> * fast = l.head;

    while (fast != l.tail)
    {
        /* code */
    }
    
}

ptr = head->next;
j = 2;
while(j<=n) {
    ptr = ptr->jump;
    if(a[j] == 1) ptr = ptr->next;
    j += 1;
}