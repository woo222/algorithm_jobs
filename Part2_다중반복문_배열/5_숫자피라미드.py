'''
# 문제
N과 시작 숫자 S가 주어지면 숫자 피라미드를 만드는 프로그램을 작성하시오.
예를 들어, N이 5이고 S가 3 이라면, 그 숫자 피라미드는 다음과 같다.
    3
   456
  21987
 3456789
987654321
시작 숫자 S는 꼭대기부터 1씩 증가한다.
시작 행의 번호가 1번이라고 했을때, 짝수번째 행은 왼쪽에서 오른쪽으로 1씩 증가하도록 적고, 홀수번째 행은 거꾸로 적는다.
숫자가 만약 10이 될 경우, 1로 바꾸고 다시 증가한다.  
# 입력 - 입력의 첫 번째 줄에 N과 시작 숫자 S가 주어진다. ( 1≤N≤100, 1 ≤S≤ 9)
# 출력 - 첫 번째 줄부터 숫자 피라미드를 출력한다. (각 줄에 존재하는 공백의 개수와 숫자의 개수를 정확하게 확인해주시바랍니다.)

'''

n, s = map(int, input().split())

blank = n-1
num = 1

for i in range(1, n+1):
  for j in range(blank):
    print(' ', end='')
  blank -= 1
    
  if (i % 2 == 0):
    # 짝수 줄
    current_first = prev_first + 1
    if (current_first >= 10):
        current_first = 1 
    for j in range(0, num):
      print(current_first, end='')
      prev_last = current_first
      current_first += 1
      
      if (current_first >= 10):
        current_first = 1
    
  else:
    # 홀수 줄
    if(i==1):
      current_first = s
    else:
      current_first = prev_last
      for j in range(0, num):
        current_first += 1
        if (current_first >= 10):
          current_first = 1
    
    prev_first = current_first
    
    for j in range(0, num):
      print(current_first, end='')
      current_first -= 1
      if (current_first <= 0):
        current_first = 9
      
    
  print()
  num += 2
