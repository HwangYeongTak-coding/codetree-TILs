#include <iostream>
using namespace std;
int main() {
    int a,b;
    cin >> a >> b;
    double result = double(a+b)/double(a-b);
    printf("%.2f",result);
    return 0;
}