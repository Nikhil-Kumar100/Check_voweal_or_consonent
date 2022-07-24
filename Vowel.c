#include<iostream>
using namespace std;
int main(){
    char c;
    bool lowearcase,upearcase;
    cout<<"Enter a Charector:-   ";
    cin>>c;
    lowearcase=c=='a'||c=='e'||c=='i'||c=='o'||c=='u';
    upearcase=c=='A'||c=='E'||c=='I'||c=='O'||c=='U';
    if(lowearcase||upearcase){
        cout<<"Voweal is "<<c;
    }
    else if(!isalpha(c)){
        cout<<"Not a Charector"<<c<<endl;
    }
    else{
        cout<<"Consonent is "<<c;
    }
    return 0;
}
