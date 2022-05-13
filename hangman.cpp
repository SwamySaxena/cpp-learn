//HANGMAN

#include <iostream>
#include <algorithm>
#include <cmath>
#include <ctime>
using namespace std;

void print(char arr[], int size){
    for(int i = 0; i<size; i++){
        if(arr[i] == '\0'){
            cout<<"_";
            
        }
        else{
            cout<<arr[i];
        }
    }
}


bool isPresent(char c,string word,int &winCheck,char ans[]){
    int size = word.size();
    bool flag = false;
    for(int i = 0; i<size; i++){
        if(c == word[i]){
            ans[i] = c;
            flag = true;
            winCheck++;
        }
    }
    return flag;
}

void callDraw(int s){
    if(s == 0){
        cout<<"____________"<<endl;
        cout<<"|"<<endl;
        cout<<"|"<<endl;
        cout<<"|"<<endl;
        cout<<"|"<<endl;
        cout<<"|"<<endl;
        cout<<"____________"<<endl;
    }
    else if(s == 1){
        cout<<"____________"<<endl;
        cout<<"|         O"<<endl;
        cout<<"|"<<endl;
        cout<<"|"<<endl;
        cout<<"|"<<endl;
        cout<<"|"<<endl;
        cout<<"____________"<<endl;
    }
    else if(s == 2){
        cout<<"____________"<<endl;
        cout<<"|         O"<<endl;
        cout<<"|         |"<<endl;
        cout<<"|"<<endl;
        cout<<"|"<<endl;
        cout<<"|"<<endl;
        cout<<"____________"<<endl; 
    }
    else if(s == 3){
        cout<<"____________"<<endl;
        cout<<"|         O"<<endl;
        cout<<"|        /|\\"<<endl;
        cout<<"|"<<endl;
        cout<<"|"<<endl;
        cout<<"|"<<endl;
        cout<<"____________"<<endl; 
    }
    else{
        cout<<"____________"<<endl;
        cout<<"|         O"<<endl;
        cout<<"|        /|\\"<<endl;
        cout<<"|        / \\"<<endl;
        cout<<"|"<<endl;
        cout<<"|"<<endl;
        cout<<"____________"<<endl;
    }
}

int main(){
    srand(time(0));
    string words[] = {"Helloyyy", "Swamy", "Saxena", "Is", "Awesome"};
    int num = rand()%5;
    string guessWord = words[num];
    int size = guessWord.size();
    transform(guessWord.begin(), guessWord.end(), guessWord.begin(), ::tolower);
    char ans[size] = {};
    for(int i = 0; i<size; i++){
        cout<<"_";
    }
    cout<<endl;
    int check = -1;
    int winCheck = 0;
    while(true){
        bool flag = false;
        char c;
        cout<<"Guess a character! : "<<endl;
        cin>>c;
        if(!isPresent(c,guessWord,winCheck,ans)){
            callDraw(++check);
            print(ans,size);
            cout<<endl;
            cout<<"Oops!, Wrong guess"<<endl;;
        }
        else{
            print(ans,size);
            cout<<endl;
            cout<<"Your guessed character is present in the Word!"<<endl;
        }
        if(check == 4){
            cout<<"You Lost";
            break;
        }
        if(winCheck == size){
            cout<<"You won!";
            break;
        }
        cout<<endl;  
    }
    cout<<endl;
}