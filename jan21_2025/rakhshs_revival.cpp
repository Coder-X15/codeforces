# include <iostream>
# include <utility>


using namespace std;

// the problem has the tag 'two pointers', so apparently we need to keep track of the zeroes from both ends
int main(){
    int n, m, k, t;
    cin >> t;
    for(int i = 0 ; i < t; i++){
        cin >> n >> m >> k;
        string input;
        int arr[n];

        cin >> input;

        for(int i = 0; i < n; i ++){
            arr[i] = input[i] - '0'; // conversion to int
        }

        int left = 0, right = 0; // the two pointers
        int spellcount = 0;
        while(right != n || left != n){
            if(arr[left] == 1){
                left ++; right++;
            } else if(arr[right] == 0){
                right ++;
            } else if(arr[right] == 1 && arr[left] == 0){
                int len = right - left;
                if(len >= m){
                    spellcount+= m/k;
                }
                left = right;
            }
        }
        cout << spellcount << endl;
    } 
}
