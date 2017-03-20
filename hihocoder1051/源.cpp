#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int M, N;
		cin >> N >> M;
		vector<int> v;
		v.resize(N);
		for (int in = 0; in < N; in++)
		{
			cin >> v[in];
		}
		if (N <= M)
			cout << "100" << endl;
	}
}