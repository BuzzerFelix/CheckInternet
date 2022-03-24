#pragma once

#include "includes.h"
using namespace std;

void CheckInternet() {
    bool check = InternetCheckConnectionA((LPCSTR)"https://www.google.com/", FLAG_ICC_FORCE_CONNECTION, 0);
    if (check) {
        cout << xorstr("You are Connected to Internet...");
    }
    else {
        cout << xorstr("You Are not Connected to Internet...");
    }
}
