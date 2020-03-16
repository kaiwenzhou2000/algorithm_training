// please read question first ！！ --------->  http://lx.lanqiao.cn/problem.page?gpid=T12

#include <iostream>

using namespace std;

/*
 * Tips:
 * 如果n奇数，那么n，n-1，n-2互质
 * 如果n为偶数，那么不仅要考虑n，n-1, n-2，还要考虑n-1, n-2, n-3
 * 并且n为时，要去和n-2去找最小公倍数
 * 注意在申明n的时候也要是long long，要不然输出的结果会溢出
 * */


int main(){
    long long n;
    long long temp;
    cin >> n;
    if (n % 2 != 0 ){           //表示是奇数的情况
        cout << n*(n-1)*(n-2) << endl;
        return 0;
    } else{
        temp = n*(n-2);
        while(temp%n == 0 && temp%(n-2) == 0){
            temp /= 2;
        }
        temp *= 2;
        temp *= n-1;
        if (temp < (n-1)*(n-2)*(n-3)){
            cout << (n-1)*(n-2)*(n-3) << endl;
        }else{
            cout << temp << endl;
        }
    }
    return 0;
}