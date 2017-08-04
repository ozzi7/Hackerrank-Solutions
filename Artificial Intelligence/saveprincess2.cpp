#include <iostream>
#include <vector>
using namespace std;
void nextMove(int n, int r, int c, vector <string> grid){
	pair<int, int> bot = make_pair(r,c);
	pair<int, int> princess;
	for (int i = 0; i < grid.size(); ++i) {
		for (int j = 0; j < grid.size(); ++j) {
			if (grid[i][j] == 'p') {
				princess = make_pair(i, j);
			}
		}
	}
	
	if (bot.first > princess.first) {
		cout << "UP" << endl;
		bot.first--;
	}
	else if (bot.first < princess.first) {
		cout << "DOWN" << endl;
		bot.first++;
	}
	else if (bot.second > princess.second) {
		cout << "LEFT" << endl;
		bot.second--;
	}
	else if (bot.second < princess.second) {
		cout << "RIGHT" << endl;
		bot.second++;
	}
}
int main(void) {

    int n, r, c;
    vector <string> grid;

    cin >> n;
    cin >> r;
    cin >> c;

    for(int i=0; i<n; i++) {
        string s; cin >> s;
        grid.push_back(s);
    }

    nextMove(n, r, c, grid);
    return 0;
}
