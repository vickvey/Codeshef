/*
  Chef is on a solo mission in Chefland, facing N enemies. The strength of the ith enemy is denoted by Ai​.
Chef starts with an initial strength of H and a resistance level of X.

Here are the rules of the fight:

    If an enemy's strength is less than or equal to Chef's resistance (X), Chef wins without losing any strength.
    If an enemy's strength exceeds Chef's resistance, Chef can still win, but only if his strength is strictly greater than the enemy's.
    In this case, Chef's strength decreases by the enemy's strength after the battle.

Your task is to find the minimum resistance value (X) that Chef needs to defeat all N enemies while ensuring he maintains a 
positive strength after the last battle.
*/

#include <bits/stdc++.h>
using namespace std;

int minResistance(int n, int h, vector<int> v) {
    int total_strength_of_enemies = accumulate(v.begin(), v.end(), 0);
    if(total_strength_of_enemies < h) {
        return 0; // no resistance required
    }
    // here is the case where total strength of enemies is greater than or equal to h
    // so we need to find the minimum resistance required
    int min_resistance = INT_MAX;
    for(int i = 0; i<n; i++) {
        min_resistance = v[i];
        total_strength_of_enemies -= v[i];
        if(total_)
        if(total_strength_of_enemies < h) {
            break;
        }
    } 
    return min_resistance;
}

int main() {
    // code here
    int t;
    cin >> t;
    while(t--) {
        int n,h; // n = number of enemies and h = chefs initial's strength

        vector<int> v;
        for(int i=0; i<n; i++) {
            int x;
            cin >> x;
            v.push_back(x);
        }

        // solution here
        cout << minResistance(n, h, v) << endl;
    }
    return 0;
}