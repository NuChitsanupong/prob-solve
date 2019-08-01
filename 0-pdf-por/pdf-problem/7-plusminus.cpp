<<<<<<< HEAD
#include <iostream>

using namespace std;
void cal(char op, int tempNum, int *ans) {
    if(op == '+') *ans += tempNum;
    else *ans -= tempNum;
}

int main() {
    int n, ans = 0;
    cin >> n;
    string inp;
    char op;
    int mul = 1, tempNum = 0, num; //Initial
    op = '+'; //Initial
    for(int k = 0; k < n*2-1; k++) {
        cin >> inp;
        for(int i = inp.length()-1; i>=0; i--) {
            num = inp[i]-48;
            if(num >= 0 && num <= 9) {
                tempNum += num * mul;
                mul *= 10;
            }
            else {
                cal(op, tempNum, &ans);
                mul = 1;
                tempNum = 0;
                if(inp[i] == '+')
                    op = '+';
                else
                    op = '-';
            }
        }
    }
    cal(op, tempNum, &ans);
    cout << ans;
=======
#include <iostream>

using namespace std;
void cal(char op, int tempNum, int *ans) {
    if(op == '+') *ans += tempNum;
    else *ans -= tempNum;
}

int main() {
    int n, ans = 0;
    cin >> n;
    string inp;
    char op;
    int mul = 1, tempNum = 0, num; //Initial
    op = '+'; //Initial
    for(int k = 0; k < n*2-1; k++) {
        cin >> inp;
        for(int i = inp.length()-1; i>=0; i--) {
            num = inp[i]-48;
            if(num >= 0 && num <= 9) {
                tempNum += num * mul;
                mul *= 10;
            }
            else {
                cal(op, tempNum, &ans);
                mul = 1;
                tempNum = 0;
                if(inp[i] == '+')
                    op = '+';
                else
                    op = '-';
            }
        }
    }
    cal(op, tempNum, &ans);
    cout << ans;
>>>>>>> c46aa179a8a23e5373040e0f81a74ba2ccfabaaf
}