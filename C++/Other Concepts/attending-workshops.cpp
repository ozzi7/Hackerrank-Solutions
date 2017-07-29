#include<bits/stdc++.h>

using namespace std;

struct Workshop {
public:
	int start_time;
	int duration;
	int end_time;

	Workshop(int st, int dur, int et) {
		start_time = st; duration = dur; end_time = et;
	}
};
struct Available_Workshops {
public:
	int n;
	vector<Workshop> ws;

	Available_Workshops(int an) {
		n = an;
	}
};

Available_Workshops* initialize(int start_time[], int duration[], int n) {
	Available_Workshops* aws = new Available_Workshops(n);

	for (int i = 0; i < n; ++i) {
		Workshop ws = Workshop(start_time[i], duration[i], start_time[i] + duration[i]);
		aws->ws.push_back(ws);
	}
	return aws;
}
bool pairCompare(Workshop firstElem, Workshop secondElem) {
	return firstElem.end_time < secondElem.end_time;
}
int CalculateMaxWorkshops(Available_Workshops* ptr) {
	sort(ptr->ws.begin(), ptr->ws.end(), pairCompare);
	vector<Workshop> toattend;
	int k = 0;
	int n = ptr->n;
	toattend.push_back(ptr->ws[0]);
	for (int i = 1; i < n; ++i) {
		if (ptr->ws[i].start_time >= ptr->ws[k].end_time) {
			toattend.push_back(ptr->ws[i]);
			k = i;
		}
	}
	return toattend.size();
}

int main(int argc, char *argv[]) {
    int n; // number of workshops
    cin >> n;
    // create arrays of unknown size n
    int* start_time = new int[n];
    int* duration = new int[n];

    for(int i=0; i < n; i++){
        cin >> start_time[i];
    }
    for(int i = 0; i < n; i++){
        cin >> duration[i];
    }

    Available_Workshops * ptr;
    ptr = initialize(start_time,duration, n);
    cout << CalculateMaxWorkshops(ptr) << endl;
    return 0;
}