#include<iostream>
using namespace std;
// 计算1 + 2 + 3 + ... + n的和
int sum_of_series(int n) {
    return n * (n + 1) / 2;
}
int main()
{
     int n_values[] = {10, 40, 99};

    for (int i = 0; i < 3; i++) {
        int n = n_values[i];
        std::cout << "Sum of series 1 + 2 + ... + " << n << " = " << sum_of_series(n) << std::endl;
    }

    cout<<"Hello world!" <<::endl;
    return 0;
}