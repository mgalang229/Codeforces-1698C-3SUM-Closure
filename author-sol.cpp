#include <bits/stdc++.h>
using namespace std;

/*

3Sum Closure array:
-2 -2 0 0 2 2 (at most 6 elements)

*/

void perform_test() {
    int n;
    cin >> n;
    vector<int> pos, neg, vec;
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if(x > 0) {
            pos.push_back(x);
        } else if(x < 0) {
            neg.push_back(x);
        } else if((int) vec.size() < 2) {
            vec.push_back(x);
        }
    }
    if((int) pos.size() > 2 || (int) neg.size() > 2) {
        cout << "NO\n";
        return;
    }
    for(int x : pos) {
        vec.push_back(x);
    }
    for(int x : neg) {
        vec.push_back(x);
    }
    for(int i = 0; i < (int) vec.size(); i++) {
        for(int j = i + 1; j < (int) vec.size(); j++) {
            for(int k = j + 1; k < (int) vec.size(); k++) {
                bool ok = false;
                for(int l = 0; l < (int) vec.size(); l++) {
                    if(vec[i] + vec[j] + vec[k] == vec[l]) {
                        ok = true;
                    }
                }
                if(!ok) {
                    cout << "NO\n";
                    return;
                }
            }
        }
    }
    cout << "YES\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T = 1;
    cin >> T;
    for(int tc = 1; tc <= T; tc++) {
        perform_test();
    }
}
