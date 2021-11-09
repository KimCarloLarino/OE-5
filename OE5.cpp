//Name: Kim Carlo Larino
//Activity: OE-5

#include<iostream>
#include<string>
#include<windows.h>

using namespace std;

void reverseword (string word){
    int w = word.length();

    for(int q=0;q<w/2;q++){
        swap(word[q], word[w-q-1]);
    }
    cout << "Decrypted String: " << word;
}
void reversenum (unsigned int num){

    int z=0,x;
    while(num !=0){

        x=num%10;
        z=z*10+x;
        num /= 10;
    }
    cout << "Reversed Integer: "<<z;

}

int main(){

    string word;
    unsigned int num;
    int ch, ans=0;

    system("Color 01");

    system("cls");

    do{

        system("cls");

        cout << endl;
        cout << endl;
        cout << "<<Decrypter>>" << endl;
        cout << endl;
        cout << "[1] Reverse a String" <<endl;
        cout << "[2] Reverse an integer" <<endl;
        cout << "[3] Exit the Program" <<endl;
        cout << endl;
        cout << "Select Operation: ";
        cin >> ch;

        switch(ch){
            case 1: {
                cout << endl;
                cout << "<<Reverse A String>>" <<endl<<endl; 
                cout << "Enter Input: ";
                cin >> word;
                reverseword(word);
                cout << endl;
                cout << endl;
                system("pause");
            break;
            }

            case 2:{
                cout << endl;
                cout << "<<Reverse An Integer>>" <<endl<<endl; 
                cout << "Enter Input: ";
                cin >> num;
                reversenum(num);
                cout << endl;
                cout << endl;
                system("pause");
            break;
            }

            case 3:{
                cout << endl;
                cout << "Program Terminated" <<endl; 
                cout << "Thank you for using the app!";
                cout << endl<<endl;
                return 0;
            break;
            }
            default:{
                cout << endl;
                cout << endl;
                cout << "Invalid Input!";
                cout << endl;
                system("pause");
            break;
            }
        }
    } while(ans == 0);
}