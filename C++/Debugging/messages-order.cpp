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

int counter = 0;

class Message {
public:
	Message(string atext) {
		text = atext;
		timestamp = counter++;
	}
	const string& get_text() {
		return text;
	}
	bool operator<(Message& other) {
		if (timestamp < other.timestamp)
			return true;
		else
			return false;
	}
private:
	string text;
	int timestamp;
};

class MessageFactory {
public:
	MessageFactory() {}
	Message create_message(const string& text) {
		return Message(text);
	}
};

class Recipient {
public:
	Recipient() {}
	void receive(const Message& msg) {
		messages_.push_back(msg);
	}
	void print_messages() {
		fix_order();
		for (auto& msg : messages_) {
			cout << msg.get_text() << endl;
		}
		messages_.clear();
	}
private:
	void fix_order() {
		sort(messages_.begin(), messages_.end());
	}
	vector<Message> messages_;
};

class Network {
public:
	static void send_messages(vector<Message> messages, Recipient& recipient) {
		// simulates the unpredictable network, where sent messages might arrive in unspecified order
		random_shuffle(messages.begin(), messages.end());
		for (auto msg : messages) {
			recipient.receive(msg);
		}
	}
};


int main() {
	MessageFactory message_factory;
	Recipient recipient;
	vector<Message> messages;
	string text;
	while (getline(cin, text)) {
		messages.push_back(message_factory.create_message(text));
	}
	Network::send_messages(messages, recipient);
	recipient.print_messages();
}
