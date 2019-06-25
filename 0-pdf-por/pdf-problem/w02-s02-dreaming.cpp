#include <iostream>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;
    int i = 0, j = 0, k = 0, carry = 0, digit;
    while(a[++i]);
    while(b[++j]);
    char sum[350];
    i--; j--; //get true index
    while(i>=0 && j>=0){
        digit = a[i--] + b[j--] - '0' * 2 + carry;
        sum[k++] = (digit % 10) + '0';
        carry = digit / 10;
    }
    while(i >= 0) {
        digit = a[i--] - '0' + carry;
        sum[k++] = (digit % 10) + '0';
        carry = digit / 10;
    }
    while(j >= 0) {
        digit = b[j--] - '0' + carry;
        sum[k++] = (digit % 10) + '0';
        carry = digit / 10;
    }
    if(carry) cout << carry;
    while(--k>=0) cout << sum[k];
}