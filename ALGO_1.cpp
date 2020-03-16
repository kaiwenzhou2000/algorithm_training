// please read question first ！！ --------->  http://lx.lanqiao.cn/problem.page?gpid=T11

#include <iostream>
#include <algorithm>

#define maxN 1000

using namespace std;

int a[maxN] = {0};              //存放输入的数组
int n;                          //表示序列的长度

int find_ans(int l, int r, int k){              //表示从l开始到k为止， 第k大的数
    int select[maxN] = {0};                     //表示被筛选过后的数组
    int select_index = 0;                       //表示select数组的下标
    for (int i = l-1; i <= r-1; ++i) {
        select[select_index++] = a[i];
    }
    sort(select, select+select_index);      //要添加头文件
    while (k != 0){
        select_index--;
        k--;
    }
    return select[select_index];
}

int main() {
    int m = 0;                      //表示询问的次数
    int ans[maxN] = {0};            //存放答案
    int ans_index = 0;              //表示ans数组的下标
    int que[3] = {0};
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    cin >> m;
    for (int i = 0; i < m; ++i) {
        cin >> que[0];
        cin >> que[1];
        cin >> que[2];
        ans[ans_index++] = find_ans(que[0], que[1], que[2]);
    }
    for (int j = 0; j < ans_index; ++j) {
        cout << ans[j] << endl;
    }
    return 0;
}
