#include <bits/stdc++.h>

using namespace std;

int main(){
    string temp = "2[2[a]2[a]]";
    stack<int> a;
    stack<string> b;
    // cout << temp.size() << "\n";
    for(int i = 0;i < temp.size();i++){
        // if(b.empty())
        // if(!b.empty()){
        //     cout << b.top() << "\n";
        // }
        if(temp[i] >= '0' && temp[i] <= '9'){
            // push in the num
            a.push(temp[i]-'0');
        }else{
            if(temp[i] == ']'){
                // pop the nums
                // first concatinate
                string str = "";
                while(!b.empty() && b.top() != "["){
                    str = b.top() + str;
                    assert(b.empty() == false);
                    b.pop();
                }
                b.pop();
                // reverse(str.begin(),str.end());
                // pop number
                if(a.empty()){
                    cout << i << "\n";
                    exit(1);
                }
                assert(a.empty() == false);
                int k = a.top();
                a.pop();
                string ok = "";
                for(int j = 0;j < k;j++){
                    ok += str;
                }
                // add str
                b.push(ok);
            }else{
                // push
                string str = "";
                str += temp[i];
                b.push(str);
            }
        }
    }
    string ans = "";
    assert(b.empty() == false);
    ans = b.top();
    cout << ans << "\n";
}