'''
# 문제 : 5x5 2차원 배열이 주어질 때 어떤 원소가 상하좌우에 있는 원소보다 작을 때 해당 위치에 * 을 표시하는 프로그램을 작성하시오. 
경계선에 있는 수는 상하좌우 중 존재하는 원소만을 비교한다.
# 입력 : 5x5 행렬의 정보가 25 개의 수로 주어진다. 각 수는 0 에서 9 사이 수이다.
# 예제 입력
3 4 1 4 9
2 9 4 5 8
9 0 8 2 1
7 0 2 8 4
2 7 2 1 4
# 출력 : *를 포함한 행렬을 출력예의 형식으로 출력한다.
# 예제 출력
3 4 * 4 9 
* 9 4 5 8 
9 0 8 2 * 
7 0 2 8 4 
* 7 2 * 4 
'''

n = []
l = [[10 for j in range(7)]for i in range(7)]
for i in range(5):
  n.append(list(map(int, input().split())))

for i in range(5):
  for j in range(5):
    l[i+1][j+1] =  n[i][j]
  
for i in range(1, 6):
  for j in range(1, 6):
    if(l[i][j]<l[i+1][j] and l[i][j]<l[i-1][j] and l[i][j]<l[i][j+1] and l[i][j]<l[i][j-1]):
      print('*', end=' ')
    else:
      print(l[i][j], end=' ')
  print()
