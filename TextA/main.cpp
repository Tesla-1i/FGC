//#include <stdio.h>
//#include <stdlib.h>

/*int main(){
    int k = 3, sum = 0;
    switch(k--){
        default:break;
        case 1:sum += k;
        case 2:
        case 3:sum += k;
            break;
    }
    /*switch(k--)首先k不变，找到case 3，然后k--，
     * case3执行语句，sum=0+2，而不是0+3
    printf("总值sum = %d\n",sum);
    return 0;
}

int main(){
    FILE *fp;
    char ch, fname[10];
    printf("Input name of file\n");
    gets(fname);
    if ((fp = fopen(fname,"w")) == NULL)
        //fopen函数，文件名可以是输入的
    {
        printf("can not open\n");
        exit(0);
    }
    printf("Input data\n");
    while((ch = getchar()) != '!')
        fputc(ch, fp);
    fclose(fp);
    return 0;
}

void swap(int *p, int *q){
    int temp;
    temp = *p;
    *p = *q;
    *q = temp;
}

int main(){
    int a, b, c;
    printf("input 3 number 输入三个不相等的数\n");
    scanf("%d %d %d",&a, &b, &c);
    if(a < b)
        swap(&a, &b);
    if(a < b)
        swap(&a, &c);
    if(b < c)
        swap(&b, &c);
    printf("由大到小排序: %d %d %d\n",a, b, c);
    return 0;
}

//计算字符串中子串出现的次数

#include <string.h>

int main(){
    char str1[20], str2[20];
    char *p1, *p2;
    int sum = 0;
    printf("请输入两个字符串:\n");
    scanf("%s",str1);
    scanf("%s",str2);
    p1 = str1;
    p2 = str2;
    while (*p1 != '\0'){
        if(*p1 == *p2){
            while (*p1 == *p2 && *p2 != '\0'){
                p1++;
                p2++;
            }
        }
        else
            p1++;   //当不符合要求时，p1指向下一个字符
        if (*p2 == '\0')    //p1，p2一一比较至p2结束，全部符合
            sum++;
        p2 = str2;      //p2重新指向str2的头
    }
    printf("sum = %d\n",sum);
    return 0;
}

float average(float (*p)[5]);

int main(){
    int i;
    float courseAverage[3], score[3][5] = {{1,1,1,3,3},{1,1,1,6,6},{2,2,2,2,2}};
    for(i = 0; i < 3; i++)
        courseAverage[i] = average(score + i);
    for(i = 0; i < 3; i++)
        printf("course%.2d   成绩 %.2f\n",i+1,courseAverage[i]);
    return 0;
}

float average(float (*p)[5]){
    int i;
    float sum = 0;
    for(i = 0; i < 5; i++)
        sum = sum + *(*p + i);
    //指向数组的指针，等同于二维数组名，*p+i是列地址，对他间接访问，得到元素值
    return sum/5;
}*/

//#include <iostream>
//
//int main() {
//
//    const float factor = 2.54;
//    float x, in, cm;
//    char ch = 0;
//    std::cout<<"输入长度";
//    std::cin>>x;
//    std::cout<<"输入后缀";
//    std::cin>>ch;
//    switch(ch){
//        case 'i':
//            in = x;
//            cm = x * factor;
//            break;
//        case 'c':
//            in = x/factor;
//            cm = x;
//            break;
//    }
//    std::cout<<in<<"in = "<<cm<<"cm\n";
//}


//#include <iostream>
//
//int  main(){
//
//    using namespace std;
//
//    char name[10];
//    cout<<"我的姓名"<<"\n";
//    cin>>name;
//    cout<<name<<"\n";
//    return 0;
//}

//#include <iostream>
//#include <string.h>
//
//class Cstudent{
//
//public:
//    void regist(char *n, int m){
//        strcpy(name, n);
//        num = m;
//    }
//    void show();
//
//private:
//    char name[20];
//    int num;
//};
//
//void Cstudent::show() {
//    using namespace std;
//    cout<<"学生姓名"<<name<<"\n";
//    cout<<"学号"<<num;
//}
//
//int main(){
//
//    Cstudent Stu1, *Stu2;
//    Stu1.regist("Tom",11);
//    Stu2 = &Stu1;
//    Stu2->show();
//    return 0;
//}

//#include <iostream>
//#include <string.h>
//
//class simple{
//
//public:
//    char *s;
//    int l;
//public:
//
//    simple(char *p, int n);
//
//};
//
//simple::simple(char *p, int n) {
//    s = p;
//    l = n;
//}
//
//int main(){
//    simple x1("王五",4);
//    using namespace std;
//    cout<<x1.s<<"\n";
//    return 0;
//}


//#include <iostream>
//using namespace std;
//
//class A{
//
//private:
//    int a;
//public:
//    A(){
//        a = 0;
//        cout<<"A的默认构造函数被调用"<<a<<"\n";
//    }
//    A(int i){
//        a = i;
//        cout<<"A的构造函数被调用"<<a<<"\n";
//    }
//    ~A(){
//        cout<<"A的~~~~~~~~~~~被调用"<<a<<"\n";
//    }
//
//    int ReturnA(){
//        return a;
//    }
//};
//
//class B{
//
//private:
//    A a1, a2;
//    int b;
//public:
//    B(){
//        b = 0;
//        cout<<"B的默认构造函数被调用"<<b<<"\n";
//    }
//    B(int, int, int);
//    ~B(){
//        cout<<"B的~~~~~~~~~~~被调用"<<b<<"\n";
//    }
//
//    void Print(){
//        cout<<a1.ReturnA()<<','<<a2.ReturnA()<<"\n";
//        cout<<b<<"\n";
//    }
//};
//
//B::B(int i, int j, int k): a2(i), a1(j), b(k){
//    cout<<"B的构造函数被调用"<<b<<"\n";
//}
//
//int main(){
//
//    B x, y(1, 2, 3);
//    y.Print();
//    cout<<"\n";
//    return 0;
//}

//私有继承

//#include <iostream>
//using namespace std;
//
//class CA{
//
//public:
//    void f(int i){
//        cout<<i<<"\n";
//    }
//    void x(){
//        cout<<"CA\n";
//    }
//};
//
//class CB:CA{
//
//public:
//    void z(){
//        cout<<"CB\n";
//    }
//    using CA::f;    //类也是一种名字空间，使用声明
//};
//
//int main(){
//
//    CB object;
//    object.f(5);
//    object.z();
//    return 0;
//
//}

//#include <iostream>
//#include <string.h>
//using namespace std;
//
//class CA{
//
//public:
//    void CAstrcopy(const char *s1){
//        strcpy(name, s1);
//    }
//
//protected:
//    char name[80];
//};
//
//class CB:protected CA{
//
//public:
//    void CBstrcpy(const char *s2){
//        CAstrcopy(s2);
//    }
//    void Show(){
//        cout<<"name: "<<name<<"\n";
//    }
//};
//
//int main(){
//    CB bbb;
//    bbb.CBstrcpy("王");
//    bbb.Show();
//    return 0;
//}

//单继承的构造函数

#include <iostream>


using namespace std;

class CA{

public:
    CA(){
        a = 0;
    }
    CA(int i){
        a = i;
    }
    void Show(){
        cout<<a<<",";
    }

private:
    int a;
};



class CB: public CA{

public:
    CB(){
        b1 = b2 = 0;
    }
    CB(int i){
        b1 = 0; b2 = i;
    }
    CB(int i, int j, int k):CA(i),b1(j),b2(k){

    }
    void Show(){
        CA::Show();
        cout<<b1<<","<<b2<<"\n";
    }

private:
    int b1, b2;
};

int main(){

    CB bbb1, bbb2(15), bbb3(11, 12, 13);
    bbb1.Show();
    bbb2.Show();
    bbb3.Show();
    return 0;
}




