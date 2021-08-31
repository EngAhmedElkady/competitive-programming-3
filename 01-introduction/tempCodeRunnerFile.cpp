#include<bits/stdc++.h>
#include <cstdio>
using namespace std;
#define _CRT_SECURE_NO_DEPRECATE
typedef long long ll; 
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
#define INF 1000000000
//memset(memo, -1, sizeof memo); // initialize DP memoization table with -1
//memset(arr, 0, sizeof arr); // to clear array of integers

void solve(){
    int arr[3];
    cin>>arr[0]>>arr[1]>>arr[2];
    sort(arr,arr+3);
    cout<<arr[1]<<endl;
}
int main(){
    // freopen("10911.txt", "r", stdin);

    int t=1;
    scanf("%d",&t);
    while(t--){
        solve();
    }

    return 0;
}