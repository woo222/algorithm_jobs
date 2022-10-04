'''
# 문제 - N이 주어질 때, 다음과 같은 프로그램을 작성해보자.  
# 입력 - 첫째 줄에 자연수 N이 주어진다.(1<=N<=100)
예제입력1 - 3
에제입력2 - 5
# 출력 - 예시를 참고하여 작성하자.
예제출력1
1 2 4
3 5
6 
예제출력2
1 2 4 7 11
3 5 8 12 
6 9 13 
10 14
15 
'''

'''
n번 반복
1부터 시작 1 2 3 4 5 씩 더함
다음은 2 3 4 5
다음은 3 4 5씩
두번째의 처음 숫자는 앞의 처음 숫자의 2 3 4씩 올라감
'''

# 풀이1
n = int(input())

first_num = 0
cnt = 1
cnt_x = 1

for i in range (n, 0, -1):
  first_num += cnt
  res = first_num
  cnt_x = cnt
  for j in range(1, i+1):
    print(res, end=' ')
    res += cnt_x
    cnt_x += 1

  cnt += 1
  print()
  
# 풀이2
