#include <bits/stdc++.h>
#define K 1000006
using namespace std;

typedef long double ld;

int main()
{
	int n, q;	scanf("%d %d", &n, &q);

	vector < tuple <int, int, int> > circles;

	int arr[K + 6];
	memset(arr, 0, sizeof arr);

	for (int i = 0; i < n; i++)
	{
		int x, y, r;
		scanf("%d %d %d", &x, &y, &r);

		circles.push_back({x, y, r});
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			ld x1, y1, r1;
			tie(x1, y1, r1) = circles[i];

			ld x2, y2, r2;
			tie(x2, y2, r2) = circles[j];

			if (r2 < r1)	swap(r1, r2);

			ld D = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));

			double start = K + 6, end = K + 6;

			if (r1 + D <= r2)
			{
				// circle inside circle
				start = r2 - D - r1;
			}
			else if (D >= r1 + r2)
			{
				// Circle outide circle or touching
				start = D - r1 - r2;
			}
			else if (D < r1 + r2)
			{
				// circles intersecting
				start = 0;
			}

			end = r1 + r2 + D;

			arr[int(ceil(start))]++;
			arr[int(end + 1)]--;
		}
	}

	for (int i = 1; i < K; i++)
		arr[i] += arr[i - 1];

	while (q--)
	{
		int k;	scanf("%d", &k);
		printf("%d\n", arr[k]);
	}

	return 0;
}