#include<iostream>
#include<cmath>
using namespace std;

int adiff(int A,int B){
    int d = abs(A-B)%360;
        if(d>180){
            d = 360-d;
        }
    return d ;    
}
int main(){
  cout << adiff(180,270);
  cout << adiff(210,45);
  cout << adiff(0,360);
  cout << adiff(10,350);
  cout << adiff(95,260);
  cout << adiff(90,-90);
  cout << adiff(1000,280);
  cout << adiff(60,244);
}
