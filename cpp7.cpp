//����Ա����
//ֻ�г���Ա�������ڲ��ݳ�����������

#include<iostream>
using namespace std;

class CB{
	
	public:
		CB(int i, int j);
		void show();
		void show() const;		//����Ա���� 
	
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
	const CB bb2(11, 22);		//������ 
	bb1.show();
	bb2.show();
	return 0;
}

 
