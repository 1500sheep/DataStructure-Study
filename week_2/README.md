# Week_2
>일정 : 7월 28일 (금) ~ 8월 10일 (목)

## To Do
### 알고리즘 중급  part1 완료

## To Debate
* 강석윤 : __분할정복__ / __이분탐색__ / __자료구조2__
* 김민규 : __완전탐색0__ / __완전탐색1__ / __그리디__

## Tips

* 강석윤 :
	* : [1931_sheep1500.cpp](https://github.com/1500sheep/DataStructure-Study/blob/master/week_2/1931_sheep1500.cpp)
		* : 정렬 문제인데 고려 해야할 변수가 여러 개 일 경우!
		 
				'''
				struct Meeting{
					int from, to;
				};
				bool cmp(const Meeting &1,const Meeting&m2){
					if(m1.from==m2.from)//같을 경우!
						return m1.to>m2.to;
					else m1.from>m2.from;
				}
				...
				sort(a.begin(),a.end(),cmp);
				//sort알고리즘에 bool함수 cmp를 넣으면 여러 변수 일경우 까지 고려한 정렬 가능! 
		
				'''
	* 이분탐색은 left or right에 최소 또는 최대 값을 넣고 mid = (left+right)/2 해가면서 원하는 값이 left쪽에 있으면 right = mid-1 , right쪽에 있으면 left = mid+1 하면서 찾는 탐색법이다
* 김민규  
	

## To ask

* 강석윤 :
	* 완전탐색 다음 순열, 이전 순열, 모든 순열...?
* 김민규 :
	* 
## Progress

* 강석윤 : 그리디(문제 많이 안 품), 분할정복(__쿼드트리1992번__,__버블소트1517번__ 꼭 풀기), 이분탐색, 완전탐색0
* 김민규 : 그리디

## Solved

* 강석윤 : 1931, 2875, 11047, 11399, 10815, 11728, 11729,  2263, 1654, 1939, 2805, 11723, 10972, 10973, 10974
* 김민규 : 1541 1744 1783 1931 2875 10610 11047 11399