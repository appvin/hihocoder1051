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
		v.resize(N + 2);
		for (int in = 1; in < N + 1; in++)
		{
			cin >> v[in];
		}
		v[N + 1] = 100;
		if (N <= M)
			cout << "100" << endl;
		else
		{
			int max = 0;
			int sum = 0;
			for (int ii = 0; ii <= N - M; ii++)
			{
				sum = v[ii + M + 1] - v[ii] - 1;
				if (sum > max)
					max = sum;
			}
			cout << max << endl;
		}
	}
}