#include <bits/stdc++.h>
using namespace std;
char a[21][21];
int main(){
    int n,m,q,p;
    int x,y,total=0;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(a[i][j]=='.'){
                int sum=0;
                x=i;y=j;
                while(a[x][y]!='#'){
                    if(a[x][y]=='G'){
                        sum++;
                    }
                    x--;
                }
                x=i;y=j;
                while(a[x][y]!='#'){
                    if(a[x][y]=='G'){
                        sum++;
                    }
                    x++;
                }
                x=i;y=j;
                while(a[x][y]!='#'){
                    if(a[x][y]=='G'){
                        sum++;
                    }
                    y--;
                }
                x=i;y=j;
                while(a[x][y]!='#'){
                    if(a[x][y]=='G'){
                        sum++;
                    }
                    y++;
                }
            if(sum>total){
                total=sum;
                p=i;q=j;
            }
            }
        }
    
     }
     //cout<<"将炸弹放在("<<p<<","<<q<<")"<<"最多可以消灭"<<total<<"个敌人";
    cout<<total;
}