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
    /*switch(k--)����k���䣬�ҵ�case 3��Ȼ��k--��
     * case3ִ����䣬sum=0+2��������0+3
    printf("��ֵsum = %d\n",sum);
    return 0;
}

int main(){
    FILE *fp;
    char ch, fname[10];
    printf("Input name of file\n");
    gets(fname);
    if ((fp = fopen(fname,"w")) == NULL)
        //fopen�������ļ��������������
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
    printf("input 3 number ������������ȵ���\n");
    scanf("%d %d %d",&a, &b, &c);
    if(a < b)
        swap(&a, &b);
    if(a < b)
        swap(&a, &c);
    if(b < c)
        swap(&b, &c);
    printf("�ɴ�С����: %d %d %d\n",a, b, c);
    return 0;
}

//�����ַ������Ӵ����ֵĴ���

#include <string.h>

int main(){
    char str1[20], str2[20];
    char *p1, *p2;
    int sum = 0;
    printf("�����������ַ���:\n");
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
            p1++;   //��������Ҫ��ʱ��p1ָ����һ���ַ�
        if (*p2 == '\0')    //p1��p2һһ�Ƚ���p2������ȫ������
            sum++;
        p2 = str2;      //p2����ָ��str2��ͷ
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
        printf("course%.2d   �ɼ� %.2f\n",i+1,courseAverage[i]);
    return 0;
}

float average(float (*p)[5]){
    int i;
    float sum = 0;
    for(i = 0; i < 5; i++)
        sum = sum + *(*p + i);
    //ָ�������ָ�룬��ͬ�ڶ�ά��������*p+i���е�ַ��������ӷ��ʣ��õ�Ԫ��ֵ
    return sum/5;
}*/

//#include <iostream>
//
//int main() {
//
//    const float factor = 2.54;
//    float x, in, cm;
//    char ch = 0;
//    std::cout<<"���볤��";
//    std::cin>>x;
//    std::cout<<"�����׺";
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
//    cout<<"�ҵ�����"<<"\n";
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
//    cout<<"ѧ������"<<name<<"\n";
//    cout<<"ѧ��"<<num;
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
//    simple x1("����",4);
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
//        cout<<"A��Ĭ�Ϲ��캯��������"<<a<<"\n";
//    }
//    A(int i){
//        a = i;
//        cout<<"A�Ĺ��캯��������"<<a<<"\n";
//    }
//    ~A(){
//        cout<<"A��~~~~~~~~~~~������"<<a<<"\n";
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
//        cout<<"B��Ĭ�Ϲ��캯��������"<<b<<"\n";
//    }
//    B(int, int, int);
//    ~B(){
//        cout<<"B��~~~~~~~~~~~������"<<b<<"\n";
//    }
//
//    void Print(){
//        cout<<a1.ReturnA()<<','<<a2.ReturnA()<<"\n";
//        cout<<b<<"\n";
//    }
//};
//
//B::B(int i, int j, int k): a2(i), a1(j), b(k){
//    cout<<"B�Ĺ��캯��������"<<b<<"\n";
//}
//
//int main(){
//
//    B x, y(1, 2, 3);
//    y.Print();
//    cout<<"\n";
//    return 0;
//}

//˽�м̳�

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
//    using CA::f;    //��Ҳ��һ�����ֿռ䣬ʹ������
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
//    bbb.CBstrcpy("��");
//    bbb.Show();
//    return 0;
//}

//���̳еĹ��캯��

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




