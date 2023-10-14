#include <bits/stdc++.h>
#define loop(i,n) for(int i = 0 ; i < n ; i++)
// #define C(x) cout << x << "\n"
using namespace std;
int biggest_bit(long long a,long long b){
    int ans = 0;
    loop(i,32){
        if((a>>i&1) == 1 && (b>>i&1) == 0){
            ans = i;
        }
    }
    return ans;
}
int main (){
    int T;
    cin >> T;
    for(int i = 0 ; i < T ; i++){
        long long A,B,C;
        cin >> A >> B >> C;
        long long ans = 0;
        if(A<B && B<C){
            cout << ans << "\n";
            continue;
        }
        if(A > B){
            int k = biggest_bit(A,B);
            // C(k);
            ans |= (1<<k);
            // C(ans);
        }
        if(B > C){
            int k = biggest_bit(B,C);
            // C(k);
            ans |= (1<<k);
            // C(ans);
        }
        // cout << A^ans << B^ans << C^ans << "\n";
        if(((A^ans) < (B^ans)) && ((B^ans) < (C^ans))){
            cout << ans << "\n";
        }else{
            cout << -1 << "\n";
        }
    }
}