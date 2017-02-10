//类模板
#include<iostream>
using namespace std;

template <class AT>		//定义类模板 
class array{
	
	public:
		array(int size){	//定义构造函数 
			
			a = new AT[size];  	//动态生成AT类型的对象数组
			for(int i = 0; i < size; i++ ){
				a[i] = 0;
			} 
		}
		~array(){		//析构函数 
			delete []a;
		}
		void setData(int i, AT data);
		
		AT returnData(int i);
		
	
	private:
		AT *a;		//AT类型的指针 
}; 

//定义模板的函数
template <class AT>
void array<AT>::setData(int i,AT data){
	a[i] = data;
} 

template <class AT>
AT array<AT>::returnData(int i){
	return a[i];
}

int main(){
	int i;
	//定义类模板对象
	array<int>aa(10);
	array<double>ff(10);
	for(i = 0; i < 10; i++){
		aa.setData(i, i);
	} 
	for(i = 0; i < 10; i++){
		ff.setData(i, i*0.1);
	}
	for(i = 0; i < 10; i++){
		cout<<aa.returnData(i)<<" ";
	}
	cout<<"\n";
	for(i = 0; i < 10; i++){
		cout<<ff.returnData(i)<<" ";
	}
	cout<<"\n";
	return 0;
}
