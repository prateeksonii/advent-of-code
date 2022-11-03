#include<bits/stdc++.h>
using namespace std;

int main() {
  ifstream input("input.txt");

  vector<pair<string, int>> arr;

  for (string line; getline(input, line); ) {
    string str = line.substr(0, line.size()-2);
    int num = (line[line.size()-1]) - '0';
    arr.push_back({ str, num });
  }

  int x = 0, y = 0, aim = 0;

  for (auto p: arr) {
    if (p.first == "forward") {
        x += p.second;
        y += aim * p.second;
    } else if (p.first == "down") {
        aim += p.second;
    } else if (p.first == "up") {
        aim -= p.second;
    }
  }

  cout << x * y << endl;

}