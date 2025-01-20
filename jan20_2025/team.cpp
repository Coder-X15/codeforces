# include <iostream>
 
using namespace std;
 
int main(){
    int n, pcount = 0;
    cin >> n;
    for(int i = 0; i < n; i ++){
        int sum = 0;
        for(int j = 0; j < 3; j ++){
            int temp;
            cin >> temp;sum += temp;
        }
        
        if(sum >= 2){
            pcount++;
        }
    }
    
    cout << pcount << endl;
}