#include<iostream>
#include<string>
using namespace stdd;

//remove all adjacent duplicates in a string
class solution{
    public:
    int removeDuplicates(string s) {
        string temp = "";
        int n = s.length();
        int i=0;

        while(i<n) {
            if(temp.length()>0 && s[i]==temp[temp.length()-1]) {
                temp.pop_back();
            }

            else {
                temp.push_back(s[i]);
            }
        }
        return temp;
    }
}

//inorder -> LNR
//preorder -> NLR
//Postorder -> LRN