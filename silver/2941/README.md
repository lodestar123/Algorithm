## [2941 크로아티아 알파벳](https://www.acmicpc.net/problem/2941)

문자열을 입력받아 특정 문자열 조합의 개수를 세는 문제이다. 
어떻게 해결해야 할 지 감을 못잡아서.. 결국 다른 사람의 코드를 참고했다.
find, replace 함수를 쓰면 간단하게 해결할 수 있다.

string의 find, replace 함수를 알게 되었다. 
- `str.find(문자열)`: str에서 a(문자열)을 찾아 문자열의 시작 위치를 반환하고,
    문자열을 찾지 못하면 string::npos를 반환한다. 

- `str.replace(시작 위치, 길이, 바꿀 문자열)`: 문자열의 일부를 교체한다.
    

+) 추가로 알게 된 사실
length와 size의 차이점: 
- length()는 string클래스에 종속적이고, 문자열의 길이를 반환함. (unsigned int)
- size()는 다양한 컨테이너(벡터,리스트,배열 등) 크기를 반환할 수 있다. (size_t)


