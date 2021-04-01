#include <iostream>
#include <stack>
using namespace std;


class Solution {
public:
    //栈
    /*
    int clumsy(int N) {
        stack <int> s;
        int ret = 0;

        s.push(N);
        N--;

        int index = 0;  //用于确定运算符

        while(N){
            if(index % 4 == 0){
                s.top() *= N;
            }else if(index % 4 == 1){
                s.top() /= N;
            }else if(index % 4 == 2){
                s.push(N);
            }else{
                s.push(-N);
            }

            N--;
            index++;
        }

        while(!s.empty()){
            ret += s.top();
            s.pop();
        }

        return ret;
    }
    */

   //数学
   int clumsy(int N) {
        if (N == 1) {
            return 1;
        } else if (N == 2) {
            return 2;
        } else if (N == 3) {
            return 6;
        } else if (N == 4) {
            return 7;
        }

        if (N % 4 == 0) {
            return N + 1;
        } else if (N % 4 <= 2) {
            return N + 2;
        } else {
            return N - 1;
        }
    }
};

int main(){
    Solution s;
    cout << s.clumsy(10) << endl;
    system("pause");
    return 0;
}