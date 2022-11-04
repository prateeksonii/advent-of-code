#include<bits/stdc++.h>
using namespace std;

int main() {
  ifstream input("input.txt");

  vector<string> arr;

  for (string line; getline(input, line); ) {
    string str = line.substr(0, line.size()-2);
    arr.push_back(line);
  }

  int len = arr[0].length();

  string gamma = "", epsilon = "";

  for (int i=0; i<len; i++) {
    int zeros = 0, ones = 0;

    for (int j=0; j<arr.size(); j++) {
      if (arr[j][i] == '0') zeros++;
      else ones++;
    }

    if (zeros > ones) {
      gamma += "0";
      epsilon += "1";
    } else {
      gamma += "1";
      epsilon += "0";
    }
  }

  cout << gamma << " " << epsilon << endl;

  unsigned long long int gm = strtoull(gamma.c_str(), 0, 2);
  unsigned long long int ep = strtoull(epsilon.c_str(), 0, 2);

  cout << gm << " " << ep << endl;

  cout << gm * ep << endl;
}