#include <iostream>
using namespace std;

int main(){
    int m, n;
    cin >> m;
    cin >> n;
    char array[m][n];
    string direction;

    for ( int i=0; i<m; i++ ) {
         for ( int j=0; j<n; j++) {
               cin >> array[i][j];
         }
    } 
    int x=1; 
    int y=1;
    cin >> direction;
    for ( int k=0; k < direction.length(); k++ ) {
        cout << direction[k] << " ";
        if (direction[k] == 'l')  {
           y =  y-1;
        }  
        if (direction[k] == 'r')  {
            y =  y+1;
        }
        if (direction[k] == 'u')  {
            x =  x-1;
        }
        if (direction[k] == 'd')  {
           x =  x+1;
        }
       if ( array[x][y] == '#' ) {
            break;
        }  
        cout << " x = " << x <<   "  y : " << y << endl;
    }  
    if (x==1 && y == n-1) {
        cout << "Right path!" << endl;
    }  
}
