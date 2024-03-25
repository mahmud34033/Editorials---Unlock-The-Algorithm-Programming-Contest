// knapsack
// ChapGPT

#include <bits/stdc++.h>
#include <math.h>
#include <vector>
#include <algorithm>
#include <string>
#include <numeric>
#define ll long long
#define nl endl
using namespace std;

using namespace std;

struct Student {
    int solveCount;
    int penaltyTime;
    int index;
};

bool compareStudents(Student a, Student b) {
    if (a.solveCount != b.solveCount)
        return a.solveCount > b.solveCount;
    return a.penaltyTime < b.penaltyTime;
}

int main() {
    int N, M;
    cin >> N >> M;

    // vector<Student> students(N);
    struct Student students[N];
    for (int i = 0; i < N; ++i) {
        cin >> students[i].solveCount;
        students[i].index = i;
    }

    for (int i = 0; i < N; ++i)
        cin >> students[i].penaltyTime;

    // sort(students.begin(), students.end(), compareStudents);
    sort(students, students+N, compareStudents);

    for (int i = 0; i < M; ++i)
        cout << students[i].penaltyTime << endl;

    return 0;
}