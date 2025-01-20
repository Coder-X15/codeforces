# include <iostream>
 
int main(){
	int T;
	std::string word;
	std::cin>>T;
	for(int i = 0; i < T; i++){
		std::cin>>word;
		if(word.length() > 10){
			int count = 0;
			std::cout<<word[0];
			for(int i = 1; i < word.length() - 1;i++){
				count++;
			}
			std::cout<<count<<word[word.length()-1]<<std::endl;
		} else {
			std::cout<<word<<std::endl;
		}
	}
}