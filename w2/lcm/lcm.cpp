#include <iostream>
#include <cstdlib>

long long gcd_e(long long a, long long b) {
    if (b==0) return a;
    else gcd_e(b,a%b);
}

long long lcm(long long a, long long b) {
  return (a*b)/gcd_e(a,b);
}

int main() {
    int a,b;
    std::cin >> a >> b;
    std::cout << lcm(a, b) << std::endl;

    return 0;
}
