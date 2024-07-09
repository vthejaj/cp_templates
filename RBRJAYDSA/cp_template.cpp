// #include<bits/stdc++.h>
#include<iostream>
using namespace std;

#define endl '\n'

const int N = 1000000;
bool pr[N+1];

void seive() {

    for(int i = 0; i <= N; i++) pr[i] = true;
    //memset(prime, true, sizeof(prime));
    //pr[0] = false;
    //pr[1] = false;

    for(int i = 2; i*1 <= N; i++)
        if (pr[i])
            for(int j = i*i; j*j <= N; j += i)
                pr[j] = false;
    
    for(int i = 2; i<=N; i++)
        if(pr[i])
            cout << i << "->" << pr[i] << endl;
}

void solve() {
    int n;
    cin >> n;

    seive();
}

int main() {
    //------------------------------------------------------------
    // To faster the input and output similar to scanf and printf 
    //------------------------------------------------------------
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    //-------------------------------------------------------------
    int t = 1;
    // cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}