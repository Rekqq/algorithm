#include <bits/stdc++.h>
#define maxn 101
using namespace std;
struct queue
{
    int data[maxn];
    int head=1;
    int tail=1;
}codesource;

void solve(){
    int num;
    cin>>num;
    for(int i=1;i<=num;i++){
        cin>>codesource.data[i];
        codesource.tail++;
    }
    while(codesource.head<codesource.tail){
        cout<<codesource.data[codesource.head++]<<' ';
        codesource.data[codesource.tail++]=codesource.data[codesource.head];
        codesource.head++;
    }
        system("pause");
    
}
signed main(){
    ios::sync_with_stdio;
    cin.tie(0);cout.tie(0);
    solve();
    return 0;
}