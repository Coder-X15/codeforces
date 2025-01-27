# include <iostream>

using namespace std;

int main(){
    string a, b;
    cin >> a;
    cin >> b;
    int n_a = 0;
    int n_b = 0;
    for(int i = 0 ; i < a.length() ; i++){
        if(isupper(a[i])){
            n_a = a[i] - 'A';
        } else {
            n_a = a[i] - 'a';
        }

        if(isupper(b[i])){
            n_b = b[i] - 'A';
        } else {
            n_b = b[i] - 'a';
        }

        if(n_b > n_a){
            cout << -1 << endl;
            return 0;
        } else if(n_a > n_b){
            cout << 1 << endl;
            return 0;
        }
    }
    cout << 0 << endl;
}