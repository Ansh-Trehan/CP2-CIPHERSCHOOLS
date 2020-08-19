// C++ program for a Queue based approach 
// to find first non-repeating character 
#include <bits/stdc++.h> 
using namespace std; 
const int MAX_CHAR = 26; 

int main() 
{ 
	char str[100];
	cin>>str;
	queue<char> q; 
	int charCount[MAX_CHAR] = { 0 }; 
	for (int i = 0; str[i]; i++) {
		q.push(str[i]);
		charCount[str[i] - 'a']++;
		while (!q.empty()) { 
			if (charCount[q.front() - 'a'] > 1) 
				q.pop();
			else {
				cout << q.front() << " ";
				break;
			}
		}
		if (q.empty()) 
			cout << -1 << " "; 
	} 
	cout << endl;
	return 0; 
} 