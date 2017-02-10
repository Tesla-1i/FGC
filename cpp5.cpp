//静态成员函数
#include<iostream>
using namespace std;

class cTempOne{
	
	public:
		cTempOne(){	//构造函数 
			j = 0;
		}
		void aj(){
			j++;
		}
		
		static void ai(){	//静态成员函数 
			i++;
		}
		
		void show(){
			cout<<"i = "<<i<<" j = "<<j<<"\n";
		}
	
	private:
		int j;
		static int i;	//静态数据成员 
}; 

int cTempOne::i = 0;  	//静态数据成员的初始化 

int main(){
	
	cTempOne x, y;		//cTemp类型的对象x, y;
	for(int k = 0; k < 3; k++){			//用到变量，才声明并初始化变量，与C不同 
		x.ai();
		x.aj();					
	} 
	
	y.ai();
	y.aj();
	
	x.show();
	y.show();
	
	return 0;
}

