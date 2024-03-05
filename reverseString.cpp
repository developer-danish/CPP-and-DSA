#include<iostream>
using namespace std;
#include<stack>

void reverseString(string s){
    stack<string> st;
    for(int i=0; i<s.length(); i++){
        string word = "";
        while(s[i] != ' ' && i<s.length()){
            word += s[i];
            i++;
        }
        st.push(word);
    }

    while(!st.empty()){
        cout<<st.top()<<" "<<endl;
        st.pop();
    }
}

int main(){
    string s = "hey how are you?";
    reverseString(s);

    return 0;
}
