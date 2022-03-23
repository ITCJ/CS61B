#include<iostream>
using namespace std;
/*
0 1 2 3 4
5 6 7 8 9
10 11 12 13 14
15 16 17 18 19
*/

int n, m;
int mat[30][30];

int num = 1;
int x = 0;
int y = 0;

int fined = 0;

void match() {
    if (mat[x][y] == m) {
        fined = 1;
        printf("%d %d\n", y+1, x+1);
    }
}

int main() {

    cin >> n >> m;
    
    // 生成螺旋方阵
    /**
     * 螺旋具有特性：
     * 从1开始，截止为+=3倍边长，如1 + 3*5 = 16
     */
    
    /* 错误方法
    int l = 0;
    for (int i = N, round = 0; i > 0; i-=2, round++) {      //round: 第几圈
        m -= l;
        int k = l;
        l += 4 * N - 4;     //起始、终止位置：4边*边长 - 重复
        if (M <= l)
        {
            int edge = m / i;   //在四条边中的哪一条上，从1开始需要-1
                                //不能使用这种方法，因为有重复
            switch (edge)
            {
            case 0:
                int row = round + 1;
                int col = round + m % i;    //计算余数 -> 多出来的位置
                break;
            case 1: //6-9 -> 1-4
                int row = round + m % i + 1;
                int col = N - round;
                break;
            case 2: //10-13 + 14 -> 0-3
                int row = N - round;
                int col = N - (round + m % i + 1);
                break;
            case 3: //
                int row = N -();
                int col = round;
            }
        }

    }
    */

    //确定circuit
    while (!fined)
    {
        //edge 0
        for (size_t i = 1; i < n; i++)
        {
            mat[x][y] = num;
            match();
            x++;
            num ++;
        }

        //edge 1
        for (size_t i = 1; i < n; i++)
        {
            mat[x][y] = num;
            match();
            y++;
            num ++;
        }
        
        //edge 2
        for (size_t i = 1; i < n; i++)
        {
            mat[x][y] = num;
            match();
            x--;
            num ++;
        }
        
        //edge 3
        for (size_t i = 1; i < n; i++)
        {
            mat[x][y] = num;
            match();
            y--;
            num ++;
        }
        
        n -=2 ;

        x++;  y++;
    }
    
    
    return  0;
}