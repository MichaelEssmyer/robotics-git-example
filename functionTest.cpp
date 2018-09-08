using namespace std;
#import <iostream>

void function new_print(string word);

int main(){
  string word = "Hello World";
  new_print(word)
  return 0;
}

void new_print(string word){
  cout << word;
}