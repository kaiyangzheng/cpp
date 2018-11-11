#include <iostream>
using namespace std;
int main(){
    int n;
    int q;
    cin >> n >> q;
    int b[n];
    int t[q];
    int pos = 0;
    int song[10005];

    for (int i = 1; i <=n; i++){
        cin >> b[i];
        for (int j = 1; j <= b[i]; j++){
            song[pos] = i;
            pos++;
        }
    }


    for (int i = 1; i <= q; i++){
        cin >> t[i];
        cout << song[t[i]];
    }
}

