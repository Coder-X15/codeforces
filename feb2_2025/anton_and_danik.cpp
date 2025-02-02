# include <iostream>

using namespace std;
int main(){
    int n;
    string input;
    cin >> n;
    cin >> input;
    int A = 0 , D = 0;
    for(int i = 0; i < n; i++){
        if(input[i] == 'A'){
            A++;
        } else if(input[i] == 'D'){
            D++;
        }
    }

    if(A > D){
        cout << "Anton" << endl;
    } else if(D > A){
        cout << "Danik" << endl;
    } else {
        cout << "Friendship" << endl;
    }
}