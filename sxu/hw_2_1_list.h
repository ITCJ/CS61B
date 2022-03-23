/**
 * 不要尝试实现这些东西
 * 最快速度做完校内的作业
 * 因为本校的word作业没有充分验证方法、oj的测试强度不足，不应该在其浪费时间。
 */

template<typename T>
class Node {
public:
    T data;
    Node<T> * next;

    Node(const T idata, Node<T> * const inext = NULL) {
        data = idata;
        next = inext;
    }

    Node(const Node<T> *inext) {
        next = inext;
    }
};

template<typename T>
class List {

private:
    Node<T> *head = NULL;
    Node<T> *tail = NULL;
public:

    bool append(const T val) {
        if (head == NULL)
        {
            head = new Node<T>(val);
            tail = head;
        } else {
            tail->next = new Node<T>(val);
            tail = tail->next;
        }
        
        return true;
    }

    T getValue(const int p) {
        Node<T> * cur = head;
        for (size_t i = 0; i < p; i++)
        {
            cur = cur->next;
        }
        
        return cur.data;
    }

    int getPos(const T val) {
        Node<T> * cur = head;
        int p = 0;
        while (cur != tail)
        {
            if (cur.data == val) 
                return p;
            
            p++;
        }

        return -1;
    }
    // bool insert(const int p, const T val);
    // bool deleter(const int p);

};