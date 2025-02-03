# include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int min_cap = 0, total_inside = 0;
    for(int i = 0; i < n; i++){
        int a, b;
        cin >> a >> b;
        total_inside += b - a;
        if(total_inside > min_cap){
            // the minimum capacity required for the tram is the maximum no. of people inside the tram at any given moment
            min_cap = total_inside;
        }
    }
    cout << min_cap << endl;
}