# dimimap
> 2026 한국디지털미디어고등학교 프로그래밍 프로젝트 - 디미고 지도(디미 야호 팀)

많은 학생들이 헷갈려하는 디미고 길찾기, **디미맵**으로 해결합니다!

길찾기, 위치 찾기, 학교 지도 보기, 길 안내 기능을 하나의 맵으로 합쳤습니다.

### 사용법(macOS)
1. 터미널에서 make 입력 : 실행 파일 'dimimap'이 만들어짐
2. 터미널에서 ./dimimap 입력 : dimimap 실행파일 실행
2단계에서 오류가 발생했다면, 절대경로로 실행하자.

### 사용법(Windows)
1. build.bat 실행
2. run.bat 실행
또는 다음 방법으로도 가능함
1. 터미널에서 다음을 입력 : gcc main.c showmap/show_map.c showmap/bonguan/bonguan.c showmap/others/others.c findteacher/find_teacher.c findpos/find_pos.c -o dimimap.exe
2. 터미널에서 ./dimimap.exe 입력 : dimimap 실행파일 실행