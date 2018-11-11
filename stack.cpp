#include <iostream>
#include <stack>
using namespace std;
int main(){
    stack <int> s;
    stack <int> rs;
    int n;
    int box=1;
    string str;
    cin >> n;

    for (int i = 0; i < n; i++){
        cin >> str;
        if (str == "ADD"){
            s.push(box);
            box=box+1;
        }else
        {
           s.pop();
        }
    }
    cout <<  s.size() <<  endl;
    while(!s.empty())
    {
        rs.push(s.top());
        s.pop();
    }
    while(!rs.empty())
    {
        cout << rs.top() << "  " ;
        rs.pop();
    }
    cout << endl;
}
