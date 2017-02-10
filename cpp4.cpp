//静态数据成员
#include<iostream>

using namespace std;

class my{
	
	public:
		my(int a, int b, int c);		//声明带参的构造函数
		void num();
		int sum(my m);		//形参 ：my类型的对象 
	
	private:
		int A, B, C;
		static int total;	//声明静态数据成员 
} ;							//分号不能忘记

int my::total = 0;			//初始化静态数据成员，int my::total
my::my(int a, int b, int c){	//定义构造函数  ，my::my(int a, int b, int c){} 
	
	A = a; B = b; C = c;
	total += A + B + C;
} 

void my::num(){
	cout<<"A = "<<A<<", B = "<<B<<", C = "<<C<<"\n";
} 

int my::sum(my m){
	return my::total;
}


int main(){
	
	my m(13, 14, 15);		//定义对象， 调用构造函数 
	m.num();
	cout<<m.sum(m)<<"\n";
	my n(15, 16, 17);		//又一个对象
	n.num();
	cout<<n.sum(n)<<","<<m.sum(m)<<"\n";
	return 0; 
}
