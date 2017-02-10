//this指针应用

#include<iostream>

class CA{
	
	public:
		CA(int i, int j){	//构造函数 
			a = i; b = j;
		}
		CA(){				//构造函数 
			a = b = 0;
		}
		void copy(CA aa);	//函数声明
		int ga(){
			return a;
		}	
		int gb(){
			return b;
		}
	private:
		int a, b;
}; 

void CA::copy(CA aa){		//函数定义 
	if(this == &aa)
		return;
	*this = aa;
}

int main(){
	
	CA a1, a2(13, 24);
	a1.copy(a2);
	std::cout<<a1.ga() + a1.gb()<<"\n"<<a2.ga() + a2.gb()<<"\n";
	return 0;
}
