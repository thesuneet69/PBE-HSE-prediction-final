#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main(){
    stack<char> br; string s;  stack<int> great;
    cin >> s; int c,flag=0;
    for (int i = 0; i < s.length(); i++) {

            if (br.empty()) {
                br.push(s[i]);
                flag++;
                if(flag>1){
                    if((c*2) >= great.top()){
                        great.pop();
                        great.push(c*2);
                    }
                }
                continue;
            }

            if (br.top() == '(' && s[i] == ')' ||
                br.top() == '{' && s[i] == '}' ||
                br.top() == '[' && s[i] == ']') {
                br.pop();
                
                if(flag == 1){
                c++; 
                flag =0;
                }
                
                else{
                    if((c*2) >= great.top()){
                        great.pop();
                        great.push(c*2);
                    }
                    flag = 0;
                    c=1;
                }

            } else {
                br.push(s[i]);
                flag++;
                if(flag>1){
                    if((c*2) >= great.top()){
                        great.pop();
                        great.push(c*2);
                    }
                }

            }
        }

        return c*2;
}