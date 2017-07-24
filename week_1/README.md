# Week_1
>일정 : 7월 20일 (목) ~ 7월 27일 (목)

## To Do
### 알고리즘 기초 part 완료

## To Debate
* 강석윤 : __다이나믹프로그래밍1__ / __그래프__ / __수학__
* 김민규 : __정렬__ / __자료구조1__ / __트리__

## Tips

* 강석윤
	* [10992_sheep1500](https://github.com/1500sheep/DataStructure-Study/blob/master/week_1/10992_sheep1500.cpp)
		* C++ 에서도 C언어 입출력 scanf(), printf()를 쓰면 속도가 더 빨라진다.
	* [9012_sheep1500](https://github.com/1500sheep/DataStructure-Study/blob/master/week_1/9012_sheep1500.cpp)
		* stack 에서 예외처리에 해당하는 경우, 내가 범한건 여기서 2번째이다. stack이 empty인데도 불구하고 top()함수를 호출할 경우 그다음으로 넘어가지 않고 자동으로 예외처리 된다.

			1. 예외처리1. pop할 데이터가 없을때 Pop() 함수를 호출 한 경우

			2. 예외처리2. pTop이 Null 일때 Top() 함수를 호출 한 경우

			3. 예외처리3. Push 실패시 (메모리 할당 실패)

* 김민규  
	* [11727_kmk](https://github.com/1500sheep/DataStructure-Study/blob/master/week_1/11727_kmk.cpp)
		*  백준 알고리즘 문제를 풀 때 "~한 값을 출력하라" 라는 식으로 문제가 나오면 출력할 때 ~하는 게 아니라 미리 값을 수정해놓고 그 값을 출력하는 방식으로 코딩해야 오답처리가 안된다.
		EX) 방법의 수를 10,007로 나눈 나머지를 출력한다.
        정답) D[i] %= 10007; cout << D[i];
        나의 오류) cout << D[i]%10007;

## To ask
* 강석윤
	* [11726_sheep1500](https://github.com/1500sheep/DataStructure-Study/blob/master/week_1/11726_sheep1500.cpp)
		* Top-down 방식으로 풀었는데 계속 틀렸다고 나오네.. 이유가 뭐징
* 김민규 :
## Progress

* 강석윤 : 알고리즘과 입출력, 자료구조1
* 김민규 : 알고리즘과 입출력, 자료구조1

## Solved

* 강석윤 : 10992, 9012, 1406, 1158, 1463, 11726, 9095, 10844, 2156
* 김민규 : 1158, 1406, 1463, 9012, 9095, 10799, 10828, 11052, 	11726, 11727
