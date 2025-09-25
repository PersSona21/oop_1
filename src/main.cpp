#include <iostream>
#include "../include/extruct.h"
using namespace std;

int main(){
    string input;
    cin >> input;
    vector<string> numbers = extructNumbers(input);
    for (const string s : numbers){
        cout << s << endl;
    }
    return 0;
}
