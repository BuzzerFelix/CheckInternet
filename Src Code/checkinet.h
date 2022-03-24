#pragma once

#include "includes.h"
using namespace std;

void CheckInternet(LPCSTR website) {
    bool check = InternetCheckConnectionA((LPCSTR)website, FLAG_ICC_FORCE_CONNECTION, 0);
    if (check) {
        cout << xorstr("You are Connected to Internet...");
    }
    else {
        cout << xorstr("You Are not Connected to Internet...");
    }
}
