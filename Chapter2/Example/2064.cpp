#include <iostream>
using namespace std;
int main(){
    int a, b, c;        // 定义三个变量
    cout << "Input a, b=";        // 输入提示Input a, b =
    cin >> a >> b;      // 输入a、b的值
    c = a;  a = b;  b = c;      // 交换a、b的值
    cout << "a=" << a << " b=" << b << endl;        // 输出结果
    return 0;
}
