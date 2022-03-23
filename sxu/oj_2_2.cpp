#include <iostream>
#include <queue>
using namespace std;

unsigned short mat[100000];
unsigned short sumQueue[200000];
char           opQueue[200000];
unsigned short valQueue[200000];
int N, M;

int main() { 
    cin >> N >> M;

    for (size_t i = 0; i < N; i++)  scanf("%hu", mat+i);
    

    for (size_t i = 1; i < M; i++)  //从 1 开始
    {
        char op;
        unsigned short val;
        scanf("%s %hu", op, val);
        if (op == opQueue[i])
        {
            valQueue[i] += val;
        } else {
            opQueue[i] = op;
            valQueue[i] = val;
        }
    }
    
    for (size_t i = 1; opQueue[i] != 0; i++)
    {
        switch (opQueue[i])
        {
        case 'Q': {
            int sum = 0;    //如果在case内定义变量，必须在作用域{}内
            for (size_t i = 0; i < N; i++) {
                if (mat[i] & (1 << valQueue[i]))
                    sum ++;        
            }
            sumQueue.push(sum);
            break;
        }
        case 'C':
            for (size_t i = 0; i < N; i++) {
                mat[i] += val;
            }
            break;
        }
    }

    while (!sumQueue.empty())
    {
        printf("%hu\n", sumQueue.front());
        sumQueue.pop();
    }
    
    return 0;
}