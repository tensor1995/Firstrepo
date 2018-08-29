#include <bits/stdc++.h>
using namespace std;

bool isBalanced(char opening,char closing){
    
    if(opening == '[' && closing == ']')
       return true;
    else if(opening == '{' && closing == '}')
       return true;
    else if(opening == '(' && closing == ')')
       return true;
       
    
    return false;       
}

bool checkBalanced(string expression){
    
    stack<char> S;
    
    for(int i=0;i<expression.length();i++){
        
        if(expression[i]=='[' || expression[i] =='{' || expression[i] == '(')
           S.push(expression[i]);
        else if(expression[i]==']' || expression[i] =='}' || expression[i] == ')'){
            if(S.empty() || !isBalanced(S.top(),expression[i]))
               return false;
            else
               S.pop();
        }  
    }
    
    return S.empty()? true:false;
    
}
int main() {
    
    string expression = "[(])";
    
    if(checkBalanced(expression))
       cout << "Balanced\n";
    else
       cout << "Not Balanced\n";
	
	return 0;
}
