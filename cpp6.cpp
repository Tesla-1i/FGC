//常数据类型
#include<iostream>
using namespace std;

class CA{
	
	public:
		CA(int i);		//带参的构造函数的声明
		void show(){
			cout<<"a = "<<a<<" b = "<<b<<"\n";
		} 
	
	private:
		const int a; 	//常数据类型 
		static const int b;		//静态常数据类型 
};						//分号

const int CA::b = 5;		//静态数据成员的初始化
CA::CA(int i):a(i){			//常数据成员的初始化 
	
} 

int main(){
	CA a1(20), a2(10);
	a1.show();
	a2.show();
	return 0;
}


