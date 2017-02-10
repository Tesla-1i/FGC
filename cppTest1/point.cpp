#include<iostream>
#include<cmath>
#include"point.h"
using namespace std;
double Point::distance(Point & p){
return sqrt((p.x-x)*(p.x-x)+(p.y-y)*(p.y-y));    }
void  Point::setX(double i){x=i;}
void  Point::setY(double j){y=j;}

