#include <bits/stdc++.h>
#include <sys/time.h>
using namespace std;
#define int long long
string exe(string cpp) {
	string ret = "";
	for(auto i : cpp) {
		if(i == '.') break;
		ret += i;
	}
	return ret;
}
string out(string ans) {
	string ret = "";
	for(auto i : ans) {
		if(i == '.') break;
		ret += i;
	}
    ret = ret + ".out";
	return ret;
}
signed main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	string P, I, A, E, C, O;
	int T;
	P.resize(105);
	I.resize(105);
	A.resize(105);
	printf("\n---------------- Serein Local Over-Impose Judgement ----------------\n\n");
	printf("Input your program(.cpp) file: ");
	scanf("%s", &P[0]);
	auto tmp = P.c_str();
	P = tmp;
	E = exe(P);
	printf("Input your data(.in) file: ");
	scanf("%s", &I[0]);
	tmp = I.c_str();
	I = tmp;
	printf("Input your data(.ans) file: ");
	scanf("%s", &A[0]);
	tmp = A.c_str();
	A = tmp;
	O = out(A);
	printf("Input your time limit(ms): ");
	scanf("%d", &T);
	printf("\n");
	C = "Compiling " + P + " to " + E + " ...";
	printf(C.c_str());
	printf("\n");
	C = "g++ " + P + " -o " + E + " -O2 -std=c++14";
	printf("  ~");
	printf(C.c_str());
	printf("\n");
	system(C.c_str());
	printf("\n");
	C = "Creating " + O + " ...";
	printf(C.c_str());
	printf("\n");
	C = "type nul > " + O;
	printf("  ~");
	printf(C.c_str());
	printf("\n");
	system(C.c_str());
	printf("\n");
	C = "Running " + E + " ...";
	printf(C.c_str());
	printf("\n");
	C = "./" + E + " < " + I + " > " + O;
	printf("  ~");
	printf(C.c_str());
	printf("\n");
	struct timeval time;
	gettimeofday(&time, NULL);
	auto a = time.tv_sec * 1000 + time.tv_usec / 1000;
	system(C.c_str());
	gettimeofday(&time, NULL);
	auto b = time.tv_sec * 1000 + time.tv_usec / 1000;
	printf("\n");
	C = "Comparing " + O + " and " + A + " ...";
	printf(C.c_str());
	printf("\n");
	C = "diff -s -w " + O + " " + A;
	printf("  ~");
	printf(C.c_str());
	printf("\n");
	system(C.c_str()); 
	printf("\n");
	printf("Getting result ...\n");
	if(b - a > T) {
		C = "echo -e \"\\e[1;36m[TLE]\\e[0m\"";
		printf("  ~");
		printf(C.c_str());
		printf("\n\n");
		system(C.c_str());
	} else {
		C = "if g++ " + P + " -o " + E + " -O2 -std=c++14; then if diff -w " + O + " " + A + "; then echo -e \"\n\\e[1;32m[AC]\\e[0m\"; else echo -e \"\n\\e[1;31m[WA]\\e[0m\"; fi; else echo -e \"\n\\e[1;33m[CE]\\e[0m\"; fi;";
		printf("  ~");
		printf(C.c_str());
		printf("\n\n");
		system(C.c_str());
	}
	printf("\n");
	if(b - a < 1000) printf("Time: %lld ms\n", b - a);
	else printf("Time: %.2f s\n", (b - a) / 1000.0);
	printf("\n---------------- Serein Local Over-Impose Judgement ----------------\n\n");  
	return 0;
}

