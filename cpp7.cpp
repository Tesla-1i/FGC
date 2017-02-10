//常成员函数
//只有常成员函数才内操纵常量，常对象

#include<iostream>
using namespace std;

class CB{
	
	public:
		CB(int i, int j);
		void show();
		void show() const;		//常成员函数 
	
	private:
		 int b1, b2;
	
};

CB::CB(int i, int j){
	b1 = i; b2 = j;
}

void CB::show(){
	cout<<b1<<"#######################"<<b2<<"\n";
}

void CB::show() const{
	cout<<b1<<"***********************"<<b2<<"\n";
}

int main(){
	CB bb1(11, 22);
	const CB bb2(11, 22);		//常对象 
	bb1.show();
	bb2.show();
	return 0;
}

 
