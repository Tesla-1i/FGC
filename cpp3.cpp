#include <iostream>

using namespace std;

class A{

public:
	A(int i, int j){
		a1 = i;
		a2 = j;
		cout<<"构造函数\n";
	}
	~A(){
		cout<<"~~~~~~~~~~~析构函数\n";
	}
	void print(){
		cout<<a1<<','<<a2<<"\n";
	}

private:
	int a1, a2;
};


int main(){

	A *pa1, *pa2;
	pa1 = new A(2, 9);
	pa2 = new A(4, 6);
	pa1->print();
	pa2->print();

	delete pa1;
	delete pa2;

	return 0;
}
