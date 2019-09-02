#include <iostream>
#include <vector>
using namespace std;
int helper(vector<int>& memo, int n) {
    // 未被计算过
    if (n > 0 && memo[n] == 0)
        memo[n] = helper(memo, n - 1) +
                  helper(memo, n - 2);
    return memo[n];
}

int fib(int N) {
    if (N < 1) return 0;
    // 备忘录全初始化为 0
    vector<int> memo(N + 1, 0);
    // 初始化最简情况
    memo[1] = memo[2] = 1;
    return helper(memo, N);
}



int main() {
    fib(20);
}