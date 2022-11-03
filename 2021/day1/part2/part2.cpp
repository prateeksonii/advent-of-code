#include<bits/stdc++.h>
using namespace std;

int main() {
  ifstream input("input.txt");

  vector<int> arr;

  for (string line; getline(input, line); ) {
    arr.push_back(stoi(line));
  }

  int count = 0;

  int curr = arr[0] + arr[1] + arr[2];

  int prev = curr;

  for (int i=3; i<arr.size(); i++) {
    curr -= arr[i-3];
    curr += arr[i];

    if (curr > prev) {
      count++;
    }

    prev = curr;
  } 

  cout << count << endl;
}