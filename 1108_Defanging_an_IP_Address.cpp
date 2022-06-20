// @algorithm @lc id=1205 lang=cpp 
// @title defanging-an-ip-address


#include <iostream>
#include <vector>
#include <string>
#include "algm/algm.h"
using namespace std;
// @test("1.1.1.1")="1[.]1[.]1[.]1"
// @test("255.100.50.0")="255[.]100[.]50[.]0"
class Solution {
public:
    string defangIPaddr(string address) {
        string ans;
        for(auto &i : address){
            if(i != '.')
                ans += i;
            else
                ans += "[.]";
        }
        return ans;
    }
};