# include <iostream>
# include <math.h>
using namespace std;

bool limak_heavier_than_bob(int, int, int);

int main(){
    int a, b, i = 0;
    cin >> a >> b;
    while(!limak_heavier_than_bob(a, b, i)){
        i++;
    }
    cout << i << endl;
}

bool limak_heavier_than_bob(int a, int b, int i){
    return a*pow(3, i) - b*pow(2, i) > 0;
}