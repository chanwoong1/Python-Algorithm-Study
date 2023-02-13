// 24
// https://www.acmicpc.net/problem/1408

#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>

using namespace std;

struct Time {
    int h;
    int m;
    int s;
};

int findSum(Time t) {
    return t.h * 3600 + t.m * 60 + t.s;
}

int main() {
    Time now, mission;
    scanf("%d:%d:%d", &now.h, &now.m, &now.s);
    scanf("%d:%d:%d", &mission.h, &mission.m, &mission.s);
    int nowSum = findSum(now);
    int misSum = findSum(mission);
    int temp = misSum - nowSum;
    if (nowSum < misSum) {
        printf("%02d:%02d:%02d", temp /3600, temp % 3600 / 60, temp % 60);
    } else {
        temp = 24 * 3600 - nowSum + misSum;
        printf("%02d:%02d:%02d", (temp) / 3600, (temp) % 3600 / 60, (temp) % 60);
    }
    return 0;
}
