#include<iostream>
#include<cmath>
#include"point.h"
using namespace std;
int main(){
  Point p1,p2;
  p1.setX(2);p1.setY(2);
  p2.setX(5);p2.setY(6);
  cout<<p1.distance(p2);
  return 0;
}
