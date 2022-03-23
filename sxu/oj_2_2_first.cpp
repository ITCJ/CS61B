#include <iostream>
#include <queue>
using namespace std;

unsigned short mat[100000];
queue <unsigned short> sumQueue;
int N, M;

int main() { 
    cin >> N >> M;

    for (size_t i = 0; i < N; i++)  scanf("%hu", mat+i);
    
    for (size_t i = 0; i < M; i++)
    {
        char op;
        unsigned short val;
        cin >> op >> val;

        switch (op)
        {
        case 'Q': {
            int sum = 0;    //如果在case内定义变量，必须在作用域{}内
            for (size_t i = 0; i < N; i++) {
                if (mat[i] & (1 << val))
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