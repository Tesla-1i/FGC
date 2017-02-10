//友元函数的应用

#include<iostream>
using namespace std;

class CP{
	
	friend double D(CP, CP);	//声明友元函数
	
	public:
		CP(double i, double j){	//定义构造函数 
			x = i; y = j;
		}
		void Gxy(){
			cout<<"x = "<<x<<" , y = "<<y<<"\n";
		}
	
	private:
		double x, y; 
}; 

double D(CP a, CP b){
	double dx = a.x - b.x;
	double dy = a.y - b.y;
	return (dx*dx + dy*dy);
}

int main(){
	double x11 = 3.5, x12 = 4.9, x21 = 6.2, x22 = 8.1;
	CP w1(x11, x12), w2(x21, x22);
	w1.Gxy();
	w2.Gxy();
	double d = D(w1, w2);
	cout<<"d = "<<d<<"\n";
	return 0;
}
