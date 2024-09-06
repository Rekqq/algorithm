#include <bits/stdc++.h>
using namespace std;
struct table{
    int *elem;
    int lenth;
};
int main(){
    table t ;
    t.elem=(int*)malloc(sizeof(int));
    *t.elem=4;
    cout<<t.elem;
}