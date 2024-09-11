#include <iostream>
#include <string>

using namespace std;

int main() {
    int vo_Count =0,co_Count=0,s_Count=0;
    string sentence;

    cout << "Enter a sentence:";
    getline(cin, sentence); 

    for(auto it:sentence){
       if(it=='a' || it=='e' || it=='o' || it=='i' || it=='u' || it == 'A' || it == 'E' || it == 'I' || it == 'O' || it == 'U'){
        vo_Count++;
       }
       else if(it == ' '){
        s_Count++;
       }
       else if(isalpha(it)){
        co_Count++;
       }
    }
    cout<<"Vowels: "<<vo_Count<<endl;
    cout<<"Consonents: "<<co_Count<<endl;
    cout<<"White Spaces: "<<s_Count<<endl;
    

    return 0;
}
