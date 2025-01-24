# include <iostream>
# include <vector>
# include <algorithm>

using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    vector<int> scores;
    int score;
    for(int i = 0; i < n; i++){
        cin >> score;
        scores.push_back(score);
    }
    score = scores[k-1];
    int count = 0;
    for(int s : scores){
        if(s >= score && s > 0){
            count++;
        }
    }
    cout << count << endl;
}