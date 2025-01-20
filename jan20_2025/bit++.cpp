# include <iostream>
# include <vector>
# include <stack>
using namespace std;
// since this problem looks like a programming langauge thing, I think I should work it out that way
// Our approach here: we dgaf to the syntax as of now, we're tryna pick out the operations apart from
// the variable and then run it

// Challenges for you: 
// 1. Make a validation function that ensures that the statement follows the right syntax.
// 2. Make the program simpler

stack<string> opstack;


void tokenize(string);
void evaluate(int*);

int main(){
    int n;
    cin >> n;
    int X = 0;
    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        tokenize(s);
    }
    evaluate(&X);
    cout << X << endl;

}

void tokenize(string s){
    string op = "";
    for(char t : s){
        if(t == '-' || t == '+'){
            op += t;
        }
    }
    opstack.push(op);
}

void evaluate(int *var){
    while(!opstack.empty()){
        string symbol = opstack.top();
        opstack.pop();
        if(symbol == "++"){
            ++(*var);
        } else if(symbol == "--"){
            --(*var);
        }
    }
}
