#include<iostream>
using namespace std;
#include<vector>
#include"bits/stdc++.h"
#define rep(i,a,b) for(int i=a;i<b;i++)
#define ff first
#define ss second;


const int N = 1e5+2;

int val[N],wt[N];
int dp[N][N];

int knapsack(int n,int w){
    if(w<=0 && n<=0)
    return 0;
   if(dp[n][w] != -1)
 return dp[n][w];

if(w<wt[n-1]) dp[n][w] = knapsack(n-1,w);
 else   dp[n][w] =  max(knapsack(n-1,w),knapsack(n-1,w-wt[n-1]+val[n-1]));
 return dp[n][w];
}
void solve(){
	
  rep(i,0,N){
    rep(j,0,N) dp[i][j] = -1;
 }
int n;
cin>>n;
int w;
cin>>w;
rep(i,0,n) cin>>wt[i];

rep(i,0,n) cin>>val[i];

cout<<knapsack(n,w)<<endl;
}
int main(){
int n;
cin>>n;
rep(i,0,n){

cin>>wt[i];
}
int w;
cin>>w;

cout<<knapsack(n,w)<<endl;
    return;
}
