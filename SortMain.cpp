#include <stdio.h>
#include <iostream>
#include <CPubilc.h>

const int nSortBubble = 1;
const int nSortInsert: = 2;
using namespace std;

int main(int argc,char *argv[])
{
    int nFlag = 0;
    nFlag = atoi(argv[1]);
    
    switch nFlag:
        case nSortBubble: 
        
        case nSortInsert:
        
        default:
            cout << "输入参数无效,请检查:" << endl;
            cout << "1 冒泡排序" << endl;
            cout << "2 插入排序" << endl;
            return -1;
    
    return 0;
}
