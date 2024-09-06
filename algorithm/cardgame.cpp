#include <bits/stdc++.h>
using namespace std;
struct queue1
{
    int card[101];
    int head=1;
    int tail=1;
}he;
struct queue2
{
    int card[101];
    int head=1;
    int tail=1;
}ha;
struct stack1{
    int temp[101];
    int top=1;
    int cur=1;
}desk;
int main(){
    int num;
    cin>>num;
    for(int i=1;i<=num;i++){
        cin>>ha.card[i];
    }
    for(int i=1;i<=num;i++){
        cin>>he.card[i];
    }//先后输入哼哈的牌面;
    while(ha.head<ha.tail&&he.head<he.tail){
        for(int i=1;i<desk.cur;i++){
            if(desk.temp[desk.top]==desk.temp[i]){
                if(i%2){
                
                }
            
            }
        }
        
            }
    return 0;
}

