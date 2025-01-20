/*
    Requirements:
        - The weight must be divided evenly
        - All weights must be positive
*/

# include <iostream>

using namespace std;
int main(){
    int w;
    cin >> w;
    bool okay = false;
    for(int i = 2 ; i < w; i+=2){
        // why I used the loop this way: if one weight is non-zero and even, we can surely see if w - that weight
        // results in a positive and even weight, in which case the loop can be terminated
        if((w - i) > 0 && (w - i) % 2 == 0){
            okay = true;
            break;
        }
    }

    if(okay){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}