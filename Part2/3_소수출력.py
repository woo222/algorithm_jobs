# 문제 - 자연수n,m이 주어질 때, n부터m까지 존재하는 소수를 모두 출력하는 프로그램을 작성하여라. 여기서 소수란, 약수가 1과 자기자신밖에 존재하지 않는 수를 말한다.
# 입력 - 첫째 줄에 자연수 n, m이 주어진다. (1≤n,m≤20,000)
# 출력 - 첫째 줄에 n부터m까지 존재하는 소수를 모두 출력한다.
# 예제 입력 - 1 10 / 예제 출력 - 2 3 5 7 
# 예제 입력 - 13 30 / 예제 출력 - 13 17 19 23 29

def prime_num(x):
  if (x == 1):
    return False
  for i in range(2, x):
    if(x % i == 0):
      return False
  return True
    
    
n, m = map(int, input().split())

for i in range(n, m+1):
  if(prime_num(i)):
    print(i, end=' ')
