#include <iostream>
#include <map>

#include <vector>

using namespace std;


int main()
{
  map<int, int> lmap;

  string str = "this is a string containing something random";

  for(auto c: str) {
    lmap[c]++;
  }

  for(auto it: lmap) {
    cout << "Character " << (char)it.first << " appears " << it.second << " times" << endl; 
  }

  return 0;
}
