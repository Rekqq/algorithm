#include <bits/stdc++.h>
using namespace std;
//检查字段是否为回文
int main(){
    string ishui;
    int flag=1;
    cin>>ishui;
    int len=ishui.size();
    int site=len/2;
    for(int i=(len-1)/2;i>=0;i--){
        if(ishui[i]!=ishui[site++]){
            flag=0;break;
        }     
    }
    if(flag){
        cout<<"YES";
    }else cout<<"NO";
    return 0;
}