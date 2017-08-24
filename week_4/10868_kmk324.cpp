#include<iostream>
#include <vector>
#include <algorithm>
#define MAX 2100000000
using namespace std;
// https://www.acmicpc.net/blog/view/9#comment-42 세그먼트트리 공부

// 노드가 담당하고 있는 부분 ex)n=10일 때 노드 1=0~9을 Node_S와 Node_E로 표현.
// 즉 노드1의 Node_S=0이고 Node_E=9이다.
// 최소값을 구해야 하는 구간을 Minimum_L 과 Minimum_R로 표현.

// 트리의 노드가 담길 배열 arr
// 트리의 노드의 값이 담길 배열 tree
int init(vector<int>&arr, vector<int> &tree, int node, int Node_S, int Node_E)
{
	if (Node_S == Node_E)
	{
		return tree[node] = arr[Node_S];
	}
	else
		return tree[node] = min(init(arr, tree, 2 * node, Node_S, (Node_S + Node_E) / 2), init(arr, tree, 2 * node + 1, (Node_S + Node_E) / 2 + 1, Node_E));
}

int MIN(vector<int> &tree, int node, int Node_S, int Node_E, int Minimum_L, int Minimum_R)
{
	if (Minimum_L > Node_E || Minimum_R < Node_S) // 탐색범위가 노드의 범위를 벗어나는 경우
		return MAX;
	if (Minimum_L <= Node_S && Node_E <= Minimum_R)
		return tree[node]; //이해필요

	return min(MIN(tree, node * 2, Node_S, (Node_S + Node_E) / 2, Minimum_L, Minimum_R), MIN(tree, node * 2 + 1, (Node_S + Node_E) / 2 + 1, Node_E, Minimum_L, Minimum_R));
}

int main()
{
	int n, m, a, b;
	scanf("%d %d", &n, &m);
	vector<int> arr(100005), tree(300000);
	for (int i = 0; i < n; i++)
	scanf("%d", &arr[i]);	
	
	init(arr, tree, 1, 0, n - 1);

	while (m--)
	{
		scanf("%d %d", &a, &b);
		printf("%d\n", MIN(tree, 1, 0, n - 1, a - 1, b - 1));
	}
	return 0;

}