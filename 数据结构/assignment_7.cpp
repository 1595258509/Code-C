#include<bits/stdc++.h>
using namespace std;

typedef int ElementType;
typedef struct
{
    int * parent;
    int size;
}SNode,* Set;

Set createSet(int size);
void initSet(Set S);

int main()
{
    /*此处代码由测试程序自动添加，主要为了向顺序表中插入数据
	并输出数据,你无需关心此处代码的具体实现细节。
	如果有必要，请自己添加代码以测试你的函数是否正确。
    */
    return 0;
}
/*你的提交的代码将被添加在此处，请完成题目所要求的函数的定义*/
Set createSet(int size) {
    Set S = new SNode;
    S->size = size;
    S->parent = new int[size];
    return S;
}
void initSet(Set S){
    for (int i = 0; i < S->size; i++) S->parent[i] = i-1;
}