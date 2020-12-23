#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define boost ios_base::sync_with_stdio(false); cin.tie(NULL)
#define ll long long int
#define tinput int t; cin>>t; while(t--)
ll M = 998244353;

int main(){
    // #ifndef ONLINE_JUDGE
    // freopen("a_input.txt", "r", stdin);  freopen("a_output.txt", "w", stdout);
    // #endif
    boost;
    
    tinput{
    	long a, b;
    	cin>>a>>b;
    	cout << ( ( (a+b) % 3 == 0 && ( min(a, b)*2 >= max(a, b) ) ) ? "YES" : "NO" )<<endl; 
    }
    
    return 0;
}
