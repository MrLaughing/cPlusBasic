#include "iostream"
#include "circle.cpp"
#include "math.h"
#include "iomanip"
#include "stdlib.h"
#include "time.h"
using namespace std;
void variable(){
    cout<<"变量引用&是变量的别名，引用和变量占用同一存储空间。"<<endl;
    int a = 5;
    int &b = a;
    cout<<"b=";cout<<b;cout<<" a=";cout<<a<<endl;
    b = 10;
    cout<<"b=";cout<<b;cout<<" a=";cout<<a<<endl;
}
void swap(){
    int a,b;
    cout<<"请输入a和b的值"<<endl;
    cin>>a>>b;
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout<<"a的值为："<<a<<",b的值为："<<b<<endl;
}
void area(){
    float a,b,c,area;
    string line;
    getline(cin,line);
    cout<<"输入了字符串："<<endl<<line<<endl;
    cin>>a>>b>>c;
    float s = (a+b+c)/2;
    area =sqrt(s*(s-a)*(s-b)*(s-c));
    cout<<"面积为"<<area;
}
void change(){
    char x,y;
    cout<<"请输入字母："<<endl;
    cin>>x;
    if(x>='a'&&x<='z'){
        y = x-32;
        cout<<"转换后字母为："<<y;
    }else if(x>='A'&&x<='Z'){
        y = x+32;
        cout<<"转换后字母为："<<y;
    }
}
void testswitch(){
    int score;
    cout<<"请输入分数："<<endl;
    cin>>score;
    switch(score/10){
        case 10: cout<<"满分"<<endl;break;
        case 9: cout<<"优秀"<<endl;break;
        case 8: cout<<"良好"<<endl;break;
        case 7: cout<<"中等"<<endl;break;
        case 6: cout<<"及格"<<endl;break;
        default:cout<<"垃圾"<<endl;
    }
}
void yanghui(){
    int n;
    cout<<"请定义n"<<endl;
    cin>>n;
    int m[n][n];
    for(int i = 0;i <n;i++){//外围都是1
        m[i][0] = m[i][i] = 1;
    }
    for(int i = 2;i<n;i++){
        for(int j = 1; j<i;j++){//从第三行开始，内部实现
            m[i][j] = m[i-1][j]+m[i-1][j-1];
        }
    }
    cout<<"输出杨辉三角："<<endl;
    for(int i = 0;i<n;i++){
        for(int j = 0;j<=i;j++){
            cout<<setw(4)<<m[i][j];
        }
        cout<<endl;
    }
}
/*程序入口*/
int main()
{
    yanghui();
    /* srand(time(NULL));//初始化随机种子数
    int n = rand()%20+1;
    cout<<n;
    int m[n];
    m[0] = 5;
    cout<<m[0];
    cout << "Hello"<<setw(5)<<"C++!"<<endl;//setw(5)：表示后面输出的要占5个位置，用来控制间隔,引用库文件iomanip.h
    testswitch();
    change();
    area();
    swap();
    cout<<"******************"<<endl;
    int b = 2;
    float a = b;
    cout<<a;
    main1();
    variable(); */
    return 0;
}
