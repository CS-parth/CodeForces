/*Jai Shri Ram*/
/*Jai Bajrang Bali*/
/*Hare krishna hare krishna krishna krishna hare hare hare rama hare rama rama hare hare*/
#include<bits/stdc++.h>

using namespace std;

#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define MOD 1000000007
#define INF 1e18
#define set_bits __builtin_popcountll
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()

#define int long long 
#define input(a) for (auto &x : a) cin >> x;
#define print(a) for (auto &x : a) cout << x << " ";cout << "\n";

void init_1(){
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    input(a);input(b);
    int a_score = 0;
    int b_score = 0;
    int pos = 0;
    int neg = 0;
    for(int i = 0; i < n;i++){
        if(a[i] == b[i]){
            if(a[i] == -1) neg++;
            else if(a[i] == 1) pos++;
        }else{
            if(a[i] > b[i]){
                a_score += a[i];
            }else{
                b_score += b[i];
            }
        }
    }
    if(a_score>b_score){
        if(pos <= abs(a_score-b_score)){
            b_score+=pos;
        }else{
            pos -= abs(a_score-b_score);
            b_score = a_score;
            if(pos&1){
                b_score += pos/2;
                a_score += pos/2;
                b_score++;
            }else{
                b_score += pos/2;
                a_score += pos/2;
            }
        }
    }else{
        if(pos <= abs(a_score-b_score)){
            a_score+=pos;
        }else{
            pos -= abs(a_score-b_score);
            a_score = b_score;
            if(pos&1){
                b_score += pos/2;
                a_score += pos/2;
                b_score++;
            }else{
                b_score += pos/2;
                a_score += pos/2;
            }
        }
    }
    if(a_score>b_score){
        if(neg <= abs(a_score-b_score)){
            a_score-=neg;
        }else{
            neg -= abs(a_score-b_score);
            a_score = b_score;
            if(neg&1){
                a_score -= neg/2;
                b_score -= neg/2;
                a_score--;
            }else{
                a_score -= neg/2;
                b_score -= neg/2;
            }
        }
    }else{
        if(neg <= abs(a_score-b_score)){
            b_score-=neg;
        }else{
            neg -= abs(a_score-b_score);
            b_score = a_score;
            if(neg&1){
                a_score -= neg/2;
                b_score -= neg/2;
                a_score--;
            }else{
                a_score -= neg/2;
                b_score -= neg/2;
            }
        }
    }
    cout << min(a_score,b_score) << "\n";
}

signed main() {
std::ios::sync_with_stdio(false);
    // fastio();
    int T;
    cin >> T;
    for(int k = 0 ; k < T ; k++){
        init_1();  
    }
}
