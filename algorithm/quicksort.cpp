#include <bits/stdc++.h>
#define maxn 101
int a[maxn];
void quicksort(int left ,int right){
    using namespace std;
    int i,j,temp;
    if(left>right) return;

    temp=a[left];
    i=left;j=right;
    while(i!=j){
        while(a[j]>=temp&&i<j) j--;
        while(a[i]<=temp&&i<j) i++;

        if(i<j){
            int t=a[i];
            a[i]=a[j];
            a[j]=t;
        }

    }
    a[left]=a[i];
    a[i]=temp;
    quicksort(left,i-1);
    quicksort(i+1,right);
}
signed main(){
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);std::cout.tie(0);
    int n;
    std::cin>>n;
    for(int i=1;i<=n;i++){
        std::cin>>a[i];
    }
    quicksort(1,n);
    for(int i=1;i<=n;i++){
        std::cout<<a[i]<<' ';
    }
    return 0;      
}