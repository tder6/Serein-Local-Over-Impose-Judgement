#include <bits/stdc++.h>
using namespace std;
#define int long long
string plc(string add) {
    string ret = add;
    for(int i = 0; i < ret.length(); i++)
        if(ret[i] == '\\') ret[i] = '/';
    if(ret[ret.length() - 1] != '/')
        ret += "/";
    return ret;
}
signed main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    string A, P, C;
    A.resize(105);
    printf("\n----------- Setup for Serein Local Over-Impose Judgement -----------\n\n");
    printf("Input your install address: ");
    scanf("%s", &A[0]);
    auto tmp = A.c_str();
    A = tmp;
    P = plc(A);
    printf("\n");
    C = "Copying ./source to " + P + " ...";
    printf(C.c_str());
    printf("\n");
    C = "cp -r ./source " + P;
    printf("  ~");
    printf(C.c_str());
    printf("\n");
    system(C.c_str());
    printf("\n");
    C = "Setting up alias ...";
    printf(C.c_str());
    printf("\n");
    C = "echo \"\n# Serein Local Over-Impose Judgement\nalias judge='" + P + "judge'\" >> ~/.bashrc";
    printf("  ~");
    printf(C.c_str());
    printf("\n");
    system(C.c_str());
    C = "source ~/.bashrc";
    printf("  ~");
    printf(C.c_str());
    printf("\n");
    system(C.c_str());
    printf("\n----------- Setup for Serein Local Over-Impose Judgement -----------\n\n");
    return 0;
}

