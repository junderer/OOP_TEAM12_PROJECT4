# OOP_TEAM12_PROJECT4

## Model public 메소드
* void update()
  * Model의 state를 갱신 해주는 메소드
* DeskComp* elements()
  * DeskComp 배열 반환용 메소드
* void command(int)
  * ~번째 DeskComp의 고유 command 실행

## View public 메소드
* void draw()
  * 화면 출력 메소드
* void refresh()
  * 화면 갱신 메소드

## Control public 메소드
* void init()
  * Model 초기화 메소드
* void command(int)
  * ~번째 고유 command 실행
* void refresh()
  * Model의 state 갱신
* void push(DeskComp)
  * DeskComp를 Model에 추가하기 (디버그용)

## DeskComp public 메소드
* int size_x()
  * 구성품의 상대적 x 크기
* int size_y()
  * 구성품의 상대적 y 크기
* **텍스트가 아닌 출력 매체를 고려해 상대적 단위라고 생각할 것 (문자 수 등에 의존하지 않기)**
* string display_str()
  * 화면에 표시해야할 정보
* void command()
  * 자신의 고유 기능
