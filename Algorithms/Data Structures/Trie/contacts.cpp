#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <string>
#include <stack>
#include <queue>
#include <unordered_set>
#include <unordered_map>
#include <cstdlib>
#include <ctime>
#include <deque>
#include <bitset>
#include <fstream>
#include <iomanip>
#include <sstream>
#include <numeric>

using namespace std;

#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define pii pair <int, int>
#define pll pair <long long, long long>
#define vi vector <int>

#define FOR(i, a, b) for (int i=a; i<b; i++)
#define F0R(i, a) for (int i=0; i<a; i++)
#define FORd(i,a,b) for (int i = (b)-1; i >= a; i--)
#define F0Rd(i,a) for (int i = (a)-1; i >= 0; i--)

#define mp make_pair
#define pb push_back
#define f first
#define s second
#define lb lower_bound
#define ub upper_bound

typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;

const int MOD = 1000000007;

long long gcd(long long a, long long b) { if (b == 0) return a; a %= b; return gcd(b, a); }
long long lcm(long long a, long long b) { return (a * b / gcd(a, b)); }

using namespace std;


/* tri implentation from https://www.geeksforgeeks.org/trie-insert-and-search/ */
/* the idea is probably to have key strings not the data in the tree, works anyway*/

// trie node
struct TrieNode
{
	struct TrieNode *children[26];

	// isEndOfWord is true if the node represents
	// end of a word
	int words_in_subtree;
};

// Returns new trie node (initialized to NULLs)
struct TrieNode *getNode(void)
{
	struct TrieNode *pNode = new TrieNode;

	pNode->words_in_subtree = 0;

	for (int i = 0; i < 26; i++)
		pNode->children[i] = NULL;

	return pNode;
}

void insert(struct TrieNode *root, string key)
{
	struct TrieNode *pCrawl = root;

	for (int i = 0; i < key.length(); i++)
	{
		int index = key[i] - 'a';
		if (!pCrawl->children[index])
			pCrawl->children[index] = getNode();

		pCrawl->words_in_subtree++;
		pCrawl = pCrawl->children[index];
	}

	pCrawl->words_in_subtree++;
}

// Returns number of words that match key
int search(struct TrieNode *root, string key)
{
	struct TrieNode *pCrawl = root;

	for (int i = 0; i < key.length(); i++)
	{
		int index = key[i] - 'a';
		if (!pCrawl->children[index])
			return 0;

		pCrawl = pCrawl->children[index];
	}

	if (pCrawl == NULL) {
		return 0;
	}
	else {
		return pCrawl->words_in_subtree;
	}
}

/*
* Complete the contacts function below.
*/
vector<int> contacts(vector<vector<string>> queries) {
	/*
	* Write your code here.
	*/
	vector<int> res;
	struct TrieNode *root = getNode();

	for (int i = 0; i < queries.size(); i++) {
		if (queries[i][0] == "find") {
			res.push_back(search(root, queries[i][1]));
		}
		else if (queries[i][0] == "add") {
			insert(root, queries[i][1]);
		}
	}
	return res;
}
int main()
{
	ofstream fout(getenv("OUTPUT_PATH"));

	int queries_rows;
	cin >> queries_rows;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	vector<vector<string>> queries(queries_rows);
	for (int queries_row_itr = 0; queries_row_itr < queries_rows; queries_row_itr++) {
		queries[queries_row_itr].resize(2);

		for (int queries_column_itr = 0; queries_column_itr < 2; queries_column_itr++) {
			cin >> queries[queries_row_itr][queries_column_itr];
		}

		cin.ignore(numeric_limits<streamsize>::max(), '\n');
	}

	vector<int> result = contacts(queries);

	for (int result_itr = 0; result_itr < result.size(); result_itr++) {
		fout << result[result_itr];

		if (result_itr != result.size() - 1) {
			fout << "\n";
		}
	}

	fout << "\n";

	fout.close();

	return 0;
}