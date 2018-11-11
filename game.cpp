#include <iostream>
#include <list>
using namespace std;

int main()
{
      int  n;
      int  player1=0;
      int  player2=0;
      int  current, left, right;
      cin >> n;
      cout << "this is number of boxes: " << n ;
      cout << "Please input money in all box." <<  endl;
      int penny;
      int money[n];
      for (int i=0; i<n; i++) {
           cin >> penny;
           money[i]=penny;
     //      cout << "This is penny:  " << penny << endl;
      };
      int turn = 1;
      left=0;
      int position;
      right=n-1;
      int sum=0;
      for ( int i=0; i<n; i++) {
          sum +=  money[i];
      }
      while ( left <= n-1 && right >= 0 && left <= right ) {
          if ( turn == 1 ) {
            cout << "Player 1's turn. pls choose which one you want to pick, most left is 0, most right is 1." << endl;
          } else {  
            cout <<  "Player 2's turn. pls choose which one you want to pick, most left is 0, most right is 1." << endl;
          };    
     //     cout << "left: " << left << "  right:" << right << endl;
          cin >> position;
          if (position == 0) {
                current=money[left];
     //           cout << "money picked: " << current << " from " << left << endl;
                left += 1;
          }  else if (position == 1)  {
                current=money[right];
      //          cout << "money picked: " << current << " from " << right << endl; 
                right -= 1;
          }  else {
                cout << "Please enter 0 or 1." << endl;
                continue;
          }

          if  ( turn == 1 ) {
                turn = 2;
                player1 += current;
                cout << "player1 has money: " << player1 << endl;
          } else {
                turn = 1; 
                player2 +=  current;
                cout << "player2 has money: " << player2 << endl;
          }
          cout << "Now left index: " << left << "  right index :" << right << endl << "ready for the next player" << endl;

       }
       if ( player1 > player2 ) {
             cout << "Player 1 wins." << endl;
       }  else if ( player1 < player2) {
             cout << "player 2 wins."<< endl;
       } else {
            cout << "player 1 and player 2 ties." << endl;
       }; 
       if ( sum !=  player1 + player2 ) {
            cout << "something is wrong" << endl;
       } ; 
       cout << "player 1: " << player1 << " player2 : " << player2 << "  sum: " << sum << endl;
      return 0;
}
