#include <iostream>
using namespace std;

int main() {
    int a1, b1, a2, b2;
    int c1, d1, c2, d2;
    int x1, y1, x2, y2;
    int x, y;
    cin >> a1 >> b1 >> a2 >> b2;
    cin >> c1 >> d1 >> c2 >> d2;
    cin >> x1 >> y1 >> x2 >> y2;

    int area1 =  abs(a2-a1) * abs(b2-b1);
    int area2 =  abs(c2-c1) * abs(d2-d1);

    int over_a=0;
    int over_b=0;
    int over_c=0;
    int over_d=0;
    for (x=x1; x<x2; x++) {
         if ( a1 < x+0.5  &&  x+0.5 < a2) {
             over_a++;
         };
         if ( c1 < x+0.5 && x+0.5 < c2) {
             over_c++;
         };
    };
    for (y=y1; y<y2; y++) {
         if ( b1 < y+0.5 && y+0.5 < b2) {
             over_b++;
         };
         if ( d1 < y+0.5 && y+0.5 < d2) {
             over_d++;
         };
    };
//    cout << over_a << " " << over_b << endl;
//    cout << over_c << " " << over_d << endl;
    int visible=area1 + area2 - over_a * over_b - over_c * over_d;
    cout << visible;

    return 1;
}
