
class Point
{
public:
double distance(Point & p);
void  setX(double i);
	  void  setY(double j);
private:
  double x;
  double y;
};
double Point::distance(Point & p){
return sqrt((p.x-x)*(p.x-x)+(p.y-y)*(p.y-y));    }
void  Point::setX(double i){x=i;}
void  Point::setY(double j){y=j;}
