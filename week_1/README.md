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
	* [2751_sheep1500](https://github.com/1500sheep/DataStructure-Study/blob/master/week_1/2751_sheep1500.cpp)
		* 동일한 파일을 scanf, printf 말고 cin, cout 으로 하면 시간 초과 뜸 cin,cout 쓰면 안되나요ㅜㅜ
	* [10871_sheep1500](https://github.com/1500sheep/DataStructure-Study/blob/master/week_1/10871_sheep1500.cpp)
		* __[](Person u,Person v){}__ 는 __익명 함수(=람다 식)__을 사용한 것으로써 C++11버전 부터 사용하게 된 익명 함수 객체 호출방법
		* [람다 개념 및 문법](https://msdn.microsoft.com/ko-kr/library/dd293608.aspx) 
		
		```
		sort(a.begin(), a.end(), [](Person u, Person v) {
		return (u.age < v.age) || (u.age == v.age && u.join < v.join);
	});	
		```
* 김민규  
	* [11727_kmk](https://github.com/1500sheep/DataStructure-Study/blob/master/week_1/11727_kmk.cpp)
		*  백준 알고리즘 문제를 풀 때 "~한 값을 출력하라" 라는 식으로 문제가 나오면 출력할 때 ~하는 게 아니라 미리 값을 수정해놓고 그 값을 출력하는 방식으로 코딩해야 오답처리가 안된다.
		EX) 방법의 수를 10,007로 나눈 나머지를 출력한다.
        정답) D[i] %= 10007; cout << D[i];
        나의 오류) cout << D[i]%10007;
    
    *  [10844_kmk](https://github.com/1500sheep/DataStructure-Study/blob/master/week_1/kmk_10844.cpp)
    	*  100개면 0 ~ 99니까 100참조하면 오류
10개면 0 ~ 9니까 10참조하면 오류
D[101][11]로 잡아야 뒷칸에서 참조오류가안생김

    *  [2193_kmk](https://github.com/1500sheep/DataStructure-Study/blob/master/week_1/kmk_2193)
		* 나의 오류 : 1<n<90 이라 해서 단순히 D[90]; 을 선언했다. 하지만 D[90]을 선언하면 실질적 인덱스는 89까지 이므로 90의 값에 쓰레기값이 들어간다.
	따라서 원하는 인덱스값+1 만큼 선언해 주어야 한다.
    
    *  [11005_kmk](https://github.com/1500sheep/DataStructure-Study/blob/master/week_1/11005_kmk)
    	* reverse(스트링이름.begin(), 스트링이름.end()); 스트링의 순서를 역으로 바꿔준다. 헤더는 #include<algorithm 
    	아스키코드 'A' ==65
    
## To ask
* 강석윤
	* [11726_sheep1500](https://github.com/1500sheep/DataStructure-Study/blob/master/week_1/11726_sheep1500.cpp)
		* Top-down 방식으로 풀었는데 계속 틀렸다고 나오네.. 이유가 뭐징
* 김민규 :
 * [11653_kmk](https://github.com/1500sheep/DataStructure-Study/blob/master/week_1/11653_kmk.cpp)
 		* if (N > 1)
	
		cout << N;
	*이 부분 정확히 이해가 안됌ㅠㅠ
## Progress

* 강석윤 : 알고리즘과 입출력, 자료구조1, 정렬
* 김민규 : 알고리즘과 입출력, 자료구조1, DP1(1/2), 수학1

## Solved

* 강석윤 : 10992, 9012, 1406, 1158, 1463, 11726, 9095, 10844, 2156, 2609, 2751, 11651, 10814, 10989
* 김민규 : 1158, 1406, 1463, 9012, 9095, 10799, 10828, 11052, 	11726, 11727, 10844, 2156, 9465, 2193, 11653, 1978, 2745, 11005 
