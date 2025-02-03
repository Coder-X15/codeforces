# include <iostream>

using namespace std;

int main(){
    int n, h;
    cin >> n >> h;
    int width = 0;
    int temp;
    for(int i = 0; i < n; i++){
        cin >> temp;
        if(temp > h){
            width += 2;
        } else {
            width += 1;
        }
    }

    cout << width;
}