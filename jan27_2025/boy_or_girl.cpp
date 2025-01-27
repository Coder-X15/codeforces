# include <iostream>
# include <vector>
# include <algorithm>

using namespace std;

int main(){
    string text;
    cin >> text;
    vector<char> found;
    for(int i = 0; i < text.length(); i++){
        if(find(found.begin(), found.end(), text[i]) == found.end()){
            found.push_back(text[i]);
        }
    }

    if(found.size() % 2 == 0){
        cout << "CHAT WITH HER!" << endl;
    } else {
        cout << "IGNORE HIM!" << endl;
    }
}