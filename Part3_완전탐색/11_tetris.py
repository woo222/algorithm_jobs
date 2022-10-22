c, r = map(int, input().split())
tetris = [[] for _ in range(r)]

for i in range(r):
  tetris[i] = list(map(int, input().split()))
  
result_col = bar = -1

for col in range(c):
  count_zero = 0
  for row in range(r):
    if(tetris[row][col] == 0):
      count_zero += 1
    if(tetris[row][col] == 1):
      count_zero = 0
    
    # if(i번째 열에 작대기를 둘 수 있다면):
    if (count_zero >= 4 and tetris[row][col] == 0):
      result = 0
      # i번째 열에 작대기를 둔다.
      for i in range(4):
        tetris[row-i][col] = 1
      
      # 몇 줄이 사라지는지 계산한다.
      for i in range(r):
        count_one = 0
        for j in range(c):
          if(tetris[i][j] == 1):
            count_one += 1
        if (count_one == c):
          result += 1
          
      if result >= bar:
        bar = result
        result_col = col + 1
    
      # i번째 열에 뒀던 작대기를 지운다.
      for i in range(4):
        tetris[row-i][col] = 0
        
if(result_col == -1):
  bar = 0
  result_col = 0
      
print(result_col, bar)
