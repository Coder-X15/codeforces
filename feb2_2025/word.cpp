# include <iostream>

using namespace std;

void upperfy(string &temp, string &input){
    for(char c: input){
        temp += toupper(c);
    }
}

void lowerfy(string &temp, string &input){
    for(char c: input){
        temp += tolower(c);
    }
}

int main(){
    string word;
    cin >> word;
    string alt = "";
    int upcount = 0, lowcount = 0;
    for(int i = 0; i < word.length(); i++){
        if(isupper(word[i])){
            upcount++;
        } else if(islower(word[i])){
            lowcount++;
        }
    }

    if(lowcount >= upcount){
        lowerfy(alt, word);
    } else {
        upperfy(alt, word);
    }
    cout << alt << endl;

}
