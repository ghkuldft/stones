#include <iostream> 
#include <vector>

using namespace std;

int main(){
	int n, m;
	cin >> n>> m;
	if (n % 2 == 0 && m % 2 == 0) {
		cout << "Lose";
	}
	else {
		cout << "Win";
	}
	return 0;
}
