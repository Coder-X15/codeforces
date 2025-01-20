# include <iostream>
# include <vector>
# include <algorithm>
# include <map>

using namespace std;

vector<int> sorted(vector<int> original){
    vector<int> result;
    for(int i  = 0; i < original.size(); i++){
        int temp = original[i];
        for(int j = i+1; j < original.size(); j++){
            if(original[i] < original[j]){
               temp = original[j]; 
            }
        }
        result.push_back(temp);
    }
    return result;
}

int main(){
    int n;
    cin >> n;
    int temp;
    vector<int> hp;
    for(int i = 0; i < n; i ++){
        cin >> temp;
        hp.push_back(temp);
    }

    vector<int> sorted_hp = sorted(hp);
    int spell_power = sorted_hp[0];
    bool multi_count = (count(hp.begin(), hp.end(), spell_power) == hp.size());

    // will be continued tomorrow, prolly we'll use a BST to appraoch this problem

}