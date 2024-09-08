#include <bits/stdc++.h>
using namespace std;
const int table[10]={6,2,5,5,4,5,6,3,7,6};
int sticknum(int num){
    int sum=0;
    while(num/10!=0){
        sum+=table[num%10];
        num/=10;
    }
    sum+=table[num];
    return sum;
}
int main(){
    int c,m,ans=0;
    cin>>m;
    for(int a=0;a<=1111;a++){
        for(int b=0;b<=1111;b++){
            c=a+b;
            if(sticknum(a)+sticknum(b)+sticknum(c)==m-4){
                ans++;
            }
        }
    }
    cout<<ans;
}