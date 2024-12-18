#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

struct film {
    int start;
    int duration;

    film(int s, int d) {
        start = s; 
        duration = d;
    }
};

bool comp(film f1, film f2) {
    return f1.start + f1.duration < f2.start + f2.duration;
}

int maxfilms(vector<film> fs) {
    int c = 0;
    int time = 0; 

    sort(fs.begin(), fs.end(), comp);
    for (int i = 0; i < fs.size(); i++) {
        if (time < fs[i].start) {
            time += fs[i].duration;
            c++;
        }
    }

    return c;
}



int main() {
    srand(time(NULL));

    vector<film> fs;
    for (int i = 0; i < 100; i++) {
        fs.push_back(film(rand() % 24, (rand() % 24) + 1));
    }

    cout << "max films: " << maxfilms(fs) << endl;
}