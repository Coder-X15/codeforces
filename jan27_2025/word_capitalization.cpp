# include <iostream>

using namespace std;

int main(){
    string a, b;
    cin >> a;
    for(int i = 0; i < a.length(); i++){
        if(i == 0){
            b+= toupper(a[i]);
        } else {
            b+=a[i];
        }
    }

    cout << b << endl;
}