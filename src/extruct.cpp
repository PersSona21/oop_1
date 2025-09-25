#include "../include/extruct.h"
#include <cctype>

vector<string> extructNumbers(const string text){
    string out;
    vector<string> ans;
    bool flag = false;

    for (char c: text){
        if (isdigit(c)){
            out += c;
            flag = true;
        }
        else{
            if (flag){
                flag = false;
                ans.push_back(out);
                out.clear();
            }
        }
    }
    if (flag){
        ans.push_back(out);
    }
    return ans;
}
