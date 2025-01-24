# include <iostream>
# include <vector>
# include <algorithm>
# include <map>

using namespace std;

int main(){
    int n;
    cin >> n;
    int temp;
    vector<int> hp;
    for(int i = 0; i < n; i ++){
        cin >> temp;
        hp.push_back(temp);
    }
    map<int , int> index_map;
    for(auto element: hp){
        index_map[element] = find(hp.begin(), hp.end(), element) - hp.begin();
    }
    sort(hp.begin(), hp.end());
    reverse(hp.begin(), hp.end());

    int min_strength = hp[0];
    int extra = 0;
    for(int i = 0; i < hp.size() - 1; i++){
        if(hp[i] > hp[i+1] && index_map[hp[i]] < index_map[hp[i+1]]){
            if(!((index_map[hp[i]] + 1) < index_map[hp[0]] || (index_map[hp[i]]) > index_map[hp[0]])){
                if(min_strength - i  - hp[i] <= 0){
                    extra++;
                }
            }
        }
    }

    min_strength += extra;

    cout << min_strength << endl;

}