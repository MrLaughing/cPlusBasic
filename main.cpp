
#include "iostream"
#include "circle.cpp"
using namespace std;
void variable(){
    cout<<"��������&�Ǳ����ı��������úͱ���ռ��ͬһ�洢�ռ䡣"<<endl;
    int a = 5;
    int &b = a;
    cout<<"b=";cout<<b;cout<<" a=";cout<<a<<endl;
    b = 10;
    cout<<"b=";cout<<b;cout<<" a=";cout<<a<<endl;
}
void key(){
    int a,b;
    cout<<"������a��b��ֵ"<<endl;
    cin>>a>>b;
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout<<"a��ֵΪ��"<<a<<",b��ֵΪ��"<<b<<endl;
}
int main()
{
    key();
    cout<<"******************"<<endl;
    int b = 2;
    float a = b;
    cout<<a;
    main1();
    variable();
    cout << "Hello C++!"<<endl;
    int c(2);
    cout<<a;
    return 0;
}
