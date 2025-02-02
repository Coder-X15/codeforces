# include <iostream>
# define ull unsigned long long

using namespace std;

bool lucky_number(ull &n){
    bool isLucky = (n == 0 ? false : true);
    while(n > 0 && isLucky){
        isLucky = isLucky && (n % 10 == 4 || n % 10 == 7);
        n = n / 10;
    }
    return isLucky;
}

bool isNearlyLucky(ull &n){
    int n4 = 0;
    int n7 = 0;
    while(n > 0){
        if(n % 10 == 4){
            n4++;
        } else if(n % 10 == 7){
            n7++;
        }
        n = n / 10;
    }
    ull n_luckies = n4 + n7;
    return (lucky_number(n_luckies));
}

int main(){
    ull n;
    cin >> n;

    cout << (isNearlyLucky(n) ? "YES" : "NO") << endl;
}