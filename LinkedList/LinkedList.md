# Linked List

가장 간단한 형태인 자료구조

## Linked List 란?

- 컴퓨터에 여러 개의 데이터를 저장할 때 배열을 사용하곤 하지만, 배열은 고정된 크기를 가지고 있기 때문에 메모리 낭비나 부족 상태가 생길 수 있다. Linked List는 여러 개의 데이터의 수에 맞춰 메모리를 효율적으로 관리하는 방법의 자료구조이다.
- 데이터 목록을 다루는 가장 단순한 자료구조로 선형 구조로 되어 있다. 순서가 있음.
- 종류는 singly Linked List / Doubly Linked List / Circular Linked List 가 있다.
- 중복 허용
- 배열의 index 개념을 버린 자료구조

## 시간 복잡도

- **O(n)**
- ✅ 배열 기반 리스트의 경우 : O(1)

## Linked List 의 구조

- node (데이터 내용 부분, 다른 node 주소 저장된 pointer로 구성)
- pointer (다음 node를 가리키는, 주소가 저장된 부분)
- head (가장 맨 처음의 node)
- tail (가장 마지막의 node)
  <img src="https://velog.velcdn.com/images%2Fwoojinn8%2Fpost%2Ff384a51f-73cb-4e99-82c0-5643470d7585%2F%EB%A7%81%ED%81%AC%EB%93%9C%EB%A6%AC%EC%8A%A4%ED%8A%B8%EA%B5%AC%EC%A1%B0.PNG">

## 주요 연산 구현(singly linked list 예시)

- `node` : 노드 구조체 구현, (data, pointer)
  <br>
- 노드 추가/삽입
  - `create node` : new node 생성
  - `add node` : list 의 끝에 new node 추가
  - `insert node` : list 중간에 new node 삽입
    <br>
- 노드 탐색
  - `get node target data` : list 내 찾고 싶은 data를 저장한 node의 주소 값을 반환
    <br>
- 노드 삭제
  - `delete node` : node의 메모리 해제
  - `remove last node` : tail node 제거
    - 삭제할 node 이전 노드의 next pointer는 null로 변경
  - `remove target node` : list 중간 노드 제거
    - 삭제할 node의 이전 node 찾아야함. 이전 노드의 next pointer에는 삭제할 노드의 다음 노드 주소값으로 변경

## Linked List의 장단점

- **장점**
- 구현 쉬움
- 데이터의 추가, 삽입, 삭제가 쉬움
- 크기가 가변적임
- 포인터 정보로 추가적인 연산 없이 다음 노드 가져올 수 있음

- **단점**
- 포인터를 위한 메모리 필요
- 특정 위치 노드 탐색하는데 많은 연산 필요

## Singly Linked List

- 하나의 node에 next node를 가르키는 pointer가 존재한다.
  <img src="https://media.geeksforgeeks.org/wp-content/uploads/singly-linkedlist.png">

## Doubly Linked List

- 하나의 node에 pre node와 next node를 가르키는 pointer가 2개 존재한다.
  <img src="https://media.geeksforgeeks.org/wp-content/cdn-uploads/gq/2014/03/DLL1.png">

## Circular Linked List

- head와 tail을 서로 연결시킨 구조이다.
  <img src="https://media.geeksforgeeks.org/wp-content/uploads/CircularLinkeList.png">
  <img src="https://velog.velcdn.com/images%2Fwoojinn8%2Fpost%2Fa80262a6-5c75-423c-9914-4626ebf3eccf%2Fcircular.PNG">

### 참고 자료

- https://velog.io/@woojinn8/%EC%9E%90%EB%A3%8C%EA%B5%AC%EC%A1%B0-Linked-List
- https://www.geeksforgeeks.org/singly-linked-list-definition-meaning-dsa/?ref=ml_lbp
- https://velog.io/@yyj8771/%EB%A6%AC%EC%8A%A4%ED%8A%B8-List-%EC%9E%90%EB%A3%8C%EA%B5%AC%EC%A1%B0
