#include "iostream"
#include "circle.cpp"
#include "math.h"
#include "iomanip"
using namespace std;
void variable(){
    cout<<"��������&�Ǳ����ı��������úͱ���ռ��ͬһ�洢�ռ䡣"<<endl;
    int a = 5;
    int &b = a;
    cout<<"b=";cout<<b;cout<<" a=";cout<<a<<endl;
    b = 10;
    cout<<"b=";cout<<b;cout<<" a=";cout<<a<<endl;
}
void swap(){
    int a,b;
    cout<<"������a��b��ֵ"<<endl;
    cin>>a>>b;
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout<<"a��ֵΪ��"<<a<<",b��ֵΪ��"<<b<<endl;
}
void area(){
    float a,b,c,area;
    string line;
    getline(cin,line);
    cout<<"�������ַ�����"<<endl<<line<<endl;
    cin>>a>>b>>c;
    float s = (a+b+c)/2;
    area =sqrt(s*(s-a)*(s-b)*(s-c));
    cout<<"���Ϊ"<<area;
}
void change(){
    char x,y;
    cout<<"��������ĸ��"<<endl;
    cin>>x;
    if(x>='a'&&x<='z'){
        y = x-32;
        cout<<"ת������ĸΪ��"<<y;
    }else if(x>='A'&&x<='Z'){
        y = x+32;
        cout<<"ת������ĸΪ��"<<y;
    }
}
void testswitch(){
    int score;
    cout<<"�����������"<<endl;
    cin>>score;
    switch(score/10){
        case 10: cout<<"����"<<endl;break;
        case 9: cout<<"����"<<endl;break;
        case 8: cout<<"����"<<endl;break;
        case 7: cout<<"�е�"<<endl;break;
        case 6: cout<<"����"<<endl;break;
        default:cout<<"����"<<endl;
    }
}
/*�������*/
int main()
{
    cout << "Hello"<<setw(5)<<"C++!"<<endl;//setw(5)����ʾ���������Ҫռ5��λ�ã��������Ƽ��,���ÿ��ļ�iomanip.h
    testswitch();
    change();
    area();
    swap();
    cout<<"******************"<<endl;
    int b = 2;
    float a = b;
    cout<<a;
    main1();
    variable();
    return 0;
}
