# include <iostream>

using namespace std;

int main(){
    int k, n, w;
    cin >> k >> n >> w;
    int amt = k*(w*(w+1)/2);
    cout <<  (amt > n ? amt - n : 0) << endl;
}