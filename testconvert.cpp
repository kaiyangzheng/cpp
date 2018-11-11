#include <cstdlib> 
#include <iostream> 
#include <stack>
#include <cstdio>
#include <cmath>

using namespace std;

int anyi2dec(int data, int base) {
  int remainder;
  int power=0;
  int newdata=0;
  int remaindar;
  int i=0;
  if ( data != 0)
  { 
       while ( data > 0) {
           int remaindar = data%10;
           data = data/10;
           newdata += remaindar*pow(base, power);
           cout << " step: " << i << ": power " << power << " remainder:" << remaindar << "  what is left is: " << data << "  newdata:" << newdata << endl;

           power += 1;
           i += 1;
       }
       cout << "final old " << data << " --> " <<   newdata << endl;
       return newdata;
  } else {
       return data;
  }  
}


int anys2dec(string data, int base) {
  int remainder;
  int power=0;
  int newdata=0;
  int remaindar;
  int i=0;
  for (int i=data.length()-1; i>-1; i--)  {
           cout << "data :" << data << endl;
           cout << " position: " << data[i] << endl;
           char newchar=data[i];
           newdata += atoi(&newchar) * pow(base, power);
           cout << " step: " << i << ": power " << power  << " source: " <<  data[i] << "  newdata:" << newdata << endl;
           power += 1;
  }
  cout << "final old " << data << " --> " <<   newdata << endl;
  return newdata;
}


int main() 
{ 
    int decfromb2[30];
    int decfromb3[50];
    string base2value;
    string base3value;
    cin >> base2value;
    cin >> base3value;

    int value2=stoi(base2value);
    int value3=stoi(base3value);
    cout << "base 2 -> dec:" << endl;
    cout << anys2dec(base2value, 2) << endl;
    cout << "base 3 -> dec:" << endl; 
    cout << anys2dec(base3value, 3) << endl;
}

