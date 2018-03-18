# assignment

## popen(), strtok() 함수

system() 함수는 명령을 실행하지만, 결과를 받아올 수 없다.
csv 값을 받아와 다시 출력하는 프로그램을 만들고, 나아가 csv 값을 해석해 나눠 출력하는 프로그램을 만들어보자.

[StackOverflow 질문](https://stackoverflow.com/questions/646241/c-run-a-system-command-and-get-output)은 `popen()`을 이용해 `ls`의 값을 받아오는 함수를 가지고 있다.

`get_geo_by_ip.c` 파일을 수정해

```bash
168.131.32.1,KR,Republic of Korea,29,Gwangju,Gwangju,,Asia/Seoul,35.15,126.92,0`
```

이 결과를

```bash
168.131.32.1
KR
Republic of Korea
29
Gwangju
Gwangju

Asia/Seoul
35.15
126.92
0
```

으로 출력하도록 해 보자.