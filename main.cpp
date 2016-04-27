
#include "iostream"
#include "circle.cpp"
using namespace std;
void variable(){
    cout<<"变量引用&是变量的别名，引用和变量占用同一存储空间。"<<endl;
    int a = 5;
    int &b = a;
    cout<<"b=";cout<<b;cout<<" a=";cout<<a<<endl;
    b = 10;
    cout<<"b=";cout<<b;cout<<" a=";cout<<a<<endl;
}
void key(){
    int a,b;
    cout<<"请输入a和b的值"<<endl;
    cin>>a>>b;
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout<<"a的值为："<<a<<",b的值为："<<b<<endl;
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
