//编写一个堆栈类，判断回文数
#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

class stack{
	
	private:
		int top;
		char s[100];
	public:
		stack(){
			top = 0;
		} 
		bool push(char x){
			if(top < 99){
				s[top] = x;
				top++;
				return true;
			}
			else {
				cout<<"溢出\n";
				return false;
			}
		}
		//到这里，top已经到最大值了 
		char pop(){
			if(top > 0){
				top--;
				return s[top];
			}
			cout<<"堆栈是空\n";
			return 1; 
		}
}; 

int main(){
	stack str;
	int n;
	char *p;
	cout<<"请输入字符串长度\n";
	cin>>n;
	p = new char[n];
	cout<<"请输入字符串\n";
	cin>>p;
	int str1, i;
	str1 = strlen(p);
	for(i = 0; i < str1; i++){
		if(str.push(p[i]) == false){
			cout<<"压栈失败\n";
			return 1;
		}
	}
	for(i = 0; i < str1; i++){
		if(str.pop() != p[i])
		{
			cout<<"不是回文字\n";
			return 1;
		}
	}
	cout<<"是回文字\n";
	return 0;
	
}
