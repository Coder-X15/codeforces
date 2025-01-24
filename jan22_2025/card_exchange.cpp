# include <iostream>
# include <map>
# include <vector>
# include <utility>
# include <algorithm>

using namespace std;

bool comp(pair<int, int>& a, pair<int, int>& b){
    return a.second > b.second;
}

int main(){
    int t, n, k;
    cin >> t;
    for(int i = 0; i < t; i++){
        cin >> n >> k;
        // the greedy approach will be to take away that card that repeat k times
        // and replace it with that card in the cards that repeat k - 1 times, in every iteration.
        map<int, int> freq_map;
        for(int j = 0; j < n; j++){
            int card;
            cin >> card;
            if(freq_map.find(card) == freq_map.end()){
                freq_map[card] = 1;
            } else {
                freq_map[card]++;
            }
        }

        vector<pair<int, int>> p;
        for(auto it: freq_map){
            p.push_back(it);
        }

        sort(p.begin(), p.end(), comp);

        for(auto &duo: p){
            while(duo.second > 0){
                duo.second-=k;
                if(duo.second == 0){
                    for(auto x: p){
                        if(x.first != duo.first && x.second >= 1){
                            x.second += k - 1;
                            break;
                        }
                    }
                } else {
                    duo.second += k - 1;
                }
            }
        }

        int ct = 0;
        for(auto c : p){
            ct += c.second;
        }

        cout << ct << endl;
    }
}