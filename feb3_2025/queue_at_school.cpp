# include <iostream>
# include <vector>

using namespace std;

int main(){
    int n, t;
    cin >> n >> t;
    string ord;
    cin >> ord;
    vector<char> queue;
    for(char c: ord){
        queue.push_back(c);
    }

    for(int i = 0; i < t; i++){
        for(int j = 0; j < n; j++){
            if(j < n-1){
                if(queue[j] == 'B' && queue[j+1] == 'G'){
                    queue[j] = 'G';
                    queue[j+1] = 'B';
                    j++;
                }
            }
        }
    }

    string res = "";
    for(char c: queue){
        res += c;
    }
    cout << res << endl;
}