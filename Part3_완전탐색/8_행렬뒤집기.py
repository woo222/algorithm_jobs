'''
# 문제 - 뒤집기 게임의 룰은 다음과 같다.
1. 뒤집기 게임을 진행할 맵과 뒤집기 횟수 N이 주어진다. 이때 맵은 10×10정삭각형 모양의 2차원 배열 형태이면 모든 원소들이 0으로 되어있는 상태이다.
2. 뒤집기 행위는 뒤집을 원소가 1이면 0으로 만들고, 0이면 1로 만든다는 뜻이다.
3. 첫번째 뒤집을 때는 1행의 원소들과 1열의 원소들을 모두 뒤집는다. 두번째 뒤집을 때는 2행의 원소들과 2열의 원소들을 모두 뒤집는다. 
마찬가지로 i번째 뒤집을 때는 i행의 원소들과 i열의 원소들을 모두 뒤집는다. 이렇게 총 N번의 뒤집기를 한다. (행과 열의 번호는 1번부터 시작한다.)
N이 주어졌을 때 뒤집기 게임을 모두 시행하고 난 뒤의 맵을 출력하는 프로그램을 작성해보자  
# 입력 - 입력 첫째 줄에는 뒤집을 횟수 N이 주어진다. N은 10 이하의 자연수이다.
# 예제 입력1
1
# 예제 입력2
3
# 출력 - 뒤집기 게임을 하고난 뒤의 맵의 상태를 출력한다. ( 맵은 숫자 사이에 공백을 두고 출력한다.)
# 예제 출력1
1 1 1 1 1 1 1 1 1 1 
1 0 0 0 0 0 0 0 0 0 
1 0 0 0 0 0 0 0 0 0 
1 0 0 0 0 0 0 0 0 0 
1 0 0 0 0 0 0 0 0 0 
1 0 0 0 0 0 0 0 0 0 
1 0 0 0 0 0 0 0 0 0 
1 0 0 0 0 0 0 0 0 0 
1 0 0 0 0 0 0 0 0 0 
1 0 0 0 0 0 0 0 0 0 
# 예제 출력2
1 0 0 1 1 1 1 1 1 1
0 1 0 1 1 1 1 1 1 1
0 0 1 1 1 1 1 1 1 1
1 1 1 0 0 0 0 0 0 0
1 1 1 0 0 0 0 0 0 0
1 1 1 0 0 0 0 0 0 0
1 1 1 0 0 0 0 0 0 0
1 1 1 0 0 0 0 0 0 0
1 1 1 0 0 0 0 0 0 0
1 1 1 0 0 0 0 0 0 0
'''

n = int(input())
map = [[0 for _ in range(10)]for __ in range(10)]

for i in range(n):
  for k in range(10):
    # 가로 뒤집기
    if (map[i][k] == 0):
      map[i][k] = 1
    else:
      map[i][k] = 0
    
    # 세로 뒤집기
    if (k == i):
      continue
    else:
      if (map[k][i] == 0):
        map[k][i] = 1
      else:
        map[k][i] = 0

for i in range(10):
  for j in range(10):
    print(map[i][j], end=' ')
  print()
