//// Softeer [HSAT 5회 정기 코딩 인증평가 기출] 업무 처리
//
////#include <iostream>
////#include <vector>
////#include <cmath>
////#include <time.h>
////using namespace std;
////
////int compare(vector<int> all_array)
////{
////	int sum_output = 0;
////	int x = all_array.size();
////
////	for (int i = 0; i < x; i++)
////	{
////		for (int j = i+1; j < x; j++)
////		{
////
////			if (all_array[i] < all_array[j])
////			{
////				sum_output++;
////			}
////		}
////	}
////	return sum_output;
////}
////
////int main() 
////{
////	int x;
////	cin >> x;
////	vector<int> all_array;
////	
////	for (int i = 0; i < x; i++)
////	{
////		cin >> all_array[x];
////	}
////	int result = compare(all_array);
////	cout << compare;
////
////	return 0;
////}
//#include <iostream>
//using namespace std;
//
//const int MAX_N = 5000;
//
//int compare(int all_array[MAX_N], int x)
//{
//    int count = 0;
//
//    for (int i = 0; i < x; i++)
//    {
//        for (int j = i + 1; j < x; j++)
//        {
//
//            if (all_array[i] < all_array[j])
//            {
//                for (int k = j + 1; k < x; k++)
//                {
//                    if (all_array[i] > all_array[k])
//                    {
//                        count++;
//                    }
//                }
//            }
//            
//        }
//    }
//
//    return count;
//}
//
//int main()
//{
//    int x;
//    cin >> x;
//    int all_array[MAX_N];
//
//    for (int i = 0; i < x; i++)
//    {
//        cin >> all_array[i];
//    }
//
//    int unsort = compare(all_array, x);
//
//    if (unsort == 0)
//    {
//        cout << "0" << endl;
//    }
//    else
//    {
//        cout << unsort << endl;
//    }
//
//    return 0;
//}
//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <iostream>
//
//using namespace std;
//
//int main() {
//    int N;
//    cin >> N;
//
//    vector<vector<int>> scores(3, vector<int>(N));
//    vector<vector<int>> contest_ranks(3, vector<int>(N, 1));
//    vector<int> final_ranks(N, 0);
//
//    // 대회 결과 입력 받기
//    for (int i = 0; i < 3; ++i) {
//        for (int j = 0; j < N; ++j) {
//            cin >> scores[i][j];
//        }
//    }
//
//    // 대회별 등수 계산
//    for (int c = 0; c < 3; ++c) {
//        for (int i = 0; i < N; ++i) {
//            for (int j = 0; j < N; ++j) {
//                if (scores[c][i] < scores[c][j]) {
//                    contest_ranks[c][i]++;
//                }
//            }
//        }
//    }
//
//    // 최종 등수 계산
//    for (int i = 0; i < N; ++i) {
//        for (int c = 0; c < 3; ++c) {
//            final_ranks[i] += contest_ranks[c][i];
//        }
//    }
//
//    // 결과 출력
//    for (int c = 0; c < 3; ++c) {
//        for (int i = 0; i < N; ++i) {
//            cout << contest_ranks[c][i] << " ";
//        }
//        cout << endl;
//    }
//
//    for (int i = 0; i < N; ++i) {
//        cout << final_ranks[i] << " ";
//    }
//    cout << endl;
//
//    return 0;
//}

//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int n;
//	cin >> n;
//	string star = "*";
//
//
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < i; j++)
//		{
//			cout << ' ' << endl;
//		}
//		for (int j = i; j < 2 * (n - i) - 1; j++)
//		{
//			cout << star;
//		}
//		cout << '\n';
//	}
//
//	for (int i = 0; i < n - 1; i++)
//	{
//		for (int j = 0; j < n-i-2; j++)
//		{
//			cout << ' ';
//		}
//
//		for (int j = 0; j < 2 * (i+2) - 1; j++)
//		{
//			cout << star;
//		}
//		cout << endl;
//	}
//
//	return 0;
//}
//

#include <iostream>
#include <vector>
using namespace std;
vector<int> memo;

int make_one(int n)
{

	if (n == 1) return 0;
	if (memo[n] != -1) return memo[n];

	int result = 1 + make_one(n - 1);

	if (n % 3 == 0)
	{
		int temp = 1 + make_one(n / 3);
		if (temp < result) result = temp;
	}
	if (n % 2 == 0)
	{
		int temp = 1 + make_one(n / 2);
		if (temp < result) result = temp;
	}

	if (n % 3 != 0 && n % 2 != 0)
	{
		int temp = 1 + make_one(n - 1);
		if (temp < result) result = temp;
	}
	memo[n] = result;
	return result;
}

int main()
{
	int n;
	cin >> n;

	memo.assign(n + 1, -1);
	int result = make_one(n);
	cout << result;

	return 0;
}