# include <iostream>
# include <math.h>
# include <set>

// they warned me that it was brute-force
using namespace std;

set<int> get_digits(int n){
    set<int> s;
    while(n > 0){
        s.insert(n%10);
        n /= 10;
    }
    return s;
}

int main(){
    int year;
    cin >> year;
    year++;
    int digits =  log10(year) + 1;
    while(get_digits(year).size() != digits){
        year++;
    }
    cout << year << endl;
}