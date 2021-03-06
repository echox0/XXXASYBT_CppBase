/*
 * 解决这类问题的关键是利用牛吃的漕粮，于是15头牛20天所食的草量位300单位（包括这20天内的新生草量），20头牛10天所食的草量为200单位（包括这10天内
 * 的新生草量），两者的差值即为10天内的新生草量。程序如下：
*/
#include<iostream>
using namespace std;
int main(){
    int s1, s2, s3;         // 定义变量
    s1 = 15 * 20;           // 15头牛20天所食的草量
    s2 = 20 * 10;           // 20头牛10天所食的草量
    s3 = (s1 - s2) / (20 - 10);     // 每天新生的草量单位数
    cout << "s=" << s3 << endl;     // 1单位为1头牛1天的食量
    return 0;               // 结束程序
}
