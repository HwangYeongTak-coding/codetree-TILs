#include <iostream>
using namespace std;

void print_number_rect(int n) {
    int print_num = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            print_num++;
            if(print_num == 10) { print_num = 1;}
            cout << print_num << " ";
        }
        printf("\n");
    }
}


int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    print_number_rect(n);
    return 0;
}