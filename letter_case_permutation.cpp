#include <bits/stdc++.h>

using namespace std;

void solve(string ip, string op, vector<string> &v){

	if(ip.length()==0){
		v.push_back(op);
		return;
	}

	string op1 = op;
	string op2 = op;

	if(isalpha(ip[0])){
		op1.push_back(tolower(ip[0]));	
		op2.push_back(toupper(ip[0]));
		ip.erase(ip.begin() + 0);
		solve(ip, op1);
		solve(ip, op2);
	}
	else{
		string op1 = op;
		op1.push_back(ip[0]);
		ip.erase(ip.begin() + 0);
		solve(ip, op);
	}
}

int main(){

	vector<string> fun(string s){
		string ip = s;
		string op = " ";
		vector<string> v;
		solve(ip, op, v);
	}
}