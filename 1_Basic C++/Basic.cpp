#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <vector>
using namespace std;

bool sortPerson(const pair<int, string> &a, const pair<int, string> b) {
    return (a.second < b.second);
}

int main() {
    int n, age;
    string person;
    vector<pair<int, string>> persons;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> person >> age;
        persons.push_back(make_pair(age, person));
    }

    sort(persons.rbegin(), persons.rend());
    sort(persons.begin(), persons.end(), sortPerson);

    cout << endl;
    for (int i = 0; i < persons.size(); i++) {
        cout << persons[i].second << " " << persons[i].first << endl;
    }

    return 0;
}