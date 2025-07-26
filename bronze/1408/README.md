## [1408 24](https://www.acmicpc.net/problem/1408)

시간을 계산해서 출력하는 문제이다. 삼항연산자를 활용해보았다.
00:00:00과 같은 형식으로 시간을 입력받는데, 어떻게 입력 받는지 몰라 찾아보았다. 

1. scanf를 사용할 경우 다음과 같이 사용할 수 있고, 
 `scanf("%d:%d:%d", &h1, &m1, &s1);`
2. cin을 사용할 경우 colon을 받아 버려주거나,
 `cin >> h >> colon >> m >> colon >> s;`

3. cin.ignore를 사용한다. 
 
 ```cpp
    cin >> h;
    cin.ignore(); //또는 cin.ignore(1, ':');
    cin >> m;
    cin.ignore();
    cin >> s;
```

그러고도 한 번 틀렸는데, 시간 계산을 하는 부분에서 h2-h1이 음수가 나올 수 있다는 것을 생각하지 못했다.
h2-h1이 음수일 경우 24를 더해주어 해결했다.


