//使用引用
//引用与指针相似，但比指针更高效

#include<iostream>
using namespace std;

void swap(int &p1, int &p2){
	int p;
	p = p1;
	p1 = p2;
	p2 = p;
} 

int main(){
	int a, b;
	cout<<"输入a\n";
	cin>>a;
	cout<<"输入b\n";
	cin>>b;
	swap(a, b);
	cout<<"a = "<<a<<" b = "<<b<<"\n";
	return 0; 
}
