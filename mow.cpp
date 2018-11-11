#include <iostream>
#include <cmath>
using namespace std;
int main(){
   int n;
   cin >> n;

   char direction[n];
   int distance[n];

   for ( int i=0; i<n; i++ ) {
       cin >> direction[i] >> distance[i];
   }

   int tx[1010];
   int ty[1010];

   for ( int i=0; i<1010; i++ ) {
         tx[i]=2000;
         ty[i]=2000;
   }

   tx[0] = 0;
   ty[0] = 0;
   int timer = 1;
   int previous = 0;
   for ( int i=0; i<n; i++ ) {
        for ( int k=0; k< distance[i]; k++ ) {
             if ( direction[i] == 'E' ) {
                 tx[timer] = tx[previous] + 1;
                 ty[timer] = ty[previous];
             }
             if ( direction[i] == 'W' ) {
                 tx[timer] = tx[previous] -1;
                 ty[timer] = ty[previous];
             }
             if ( direction[i] == 'S' ) {
                 tx[timer] = tx[previous];
                 ty[timer] = ty[previous] -1 ;
             }
             if ( direction[i] == 'N' ) {
                 tx[timer] = tx[previous] ;
                 ty[timer] = ty[previous]+ 1;
             }
             previous = timer;
             timer++;
        }
   }

   int claim = 2000;
   for ( int i=0; i< timer; i++ ) {
       for ( int j=0; j< timer; j++ ) {
          if ( i!=j ) {  
             if ( tx[i] == tx[j] && ty[i] == ty[j] ) {
                  if ( abs(i-j) < claim ) {
                       claim = abs(i-j);
                  }  
             }  
          }   
       }
   }
   if ( claim  == 2000 ) {
      cout << "-1" << endl;
   }   
   else {  
      cout << claim  << endl;
   }   
}

