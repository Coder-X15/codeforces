# include <iostream>
# include <vector>
# include <algorithm>

// we're going for the pre-built functions
using namespace std;

int main(){
    string a;
    cin >> a;
    vector<int> b;
    for(int i = 0; i < a.length(); i++){
        if(a[i] != '+'){
            b.push_back(a[i] - '0');
        }
    }

    sort(b.begin(), b.end());

    string c;
    int count = 0;
    for(auto i : b){
        c += static_cast<char>(i + '0');
        if(count != b.size()-1){
            c += '+';
            count++;
        }
    }

    cout << c << endl;
}