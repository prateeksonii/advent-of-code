#include<bits/stdc++.h>
using namespace std;

int main() {
  ifstream input("input.txt");

  vector<int> arr;

  for (string line; getline(input, line); ) {
    arr.push_back(stoi(line));
  }

  int count = 0;

  for (int i=1; i<arr.size(); i++) {
    if (arr[i] > arr[i-1]) {
      count++;
    }
  }

  cout << count << endl;
}