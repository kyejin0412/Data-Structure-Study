### 1. 리스트란?
- 유한하고 순서가 있는 데이터의 나열.
- 리스트 속의 데이터는 위치가 있다.
- 연산: 삽입, 조회, 변경, 요소 삭제, 비우기, 개수 파악 

### 2. 배열 기반 리스트 
#### ✅ 장점
- 인덱스를 통한 빠른 접근이 가능하다.

#### ✅ 단점

- 데이터 삽입, 삭제의 비용이 크다.
- 크기가 고정되어 있어서 할당된 메모리를 넘어가면 에러가 나고, 메모리보다 데이터가 너무 적으면 낭비가 된다.

### 3. 연결 기반 리스트
- 데이터와 포인터로 구성된다.
- 각 노드가 데이터와 포인터를 가지고 한 줄로 연결되어 있는 구조이다.
- 각 포인터는 다음 노드의 주소를 값으로 가지고 있다. (단순연결리스트)
- 배열과는 달리 메모리를 연속적으로 사용하지 않는다.
- 트리의 근간이 되는 자료구조이다.
- 맨 처음 노드를 head, 맨 마지막 노드를 tail이라고 부른다.
- 연산 시 head와 tail의 데이터 필드를 안 쓰는 게 구현에 용이하다.
- 아무 데이터가 없는 노드를 더미 노드라고 한다.

#### ✅ 장점
- 리스트의 길이가 가변적이다. 고정되어 있다는 배열의 단점을 보완한다.
- 리스트를 늘리거나 줄이고 싶을 때 노드를 삭제하거나 추가하기만 하면 된다.
- 삽입과 삭제에 용이하다.
- 데이터의 논리적인 순서와 물리적인 순서가 일치하지 않아도 된다.

#### ✅ 단점
- 메모리를 연속적으로 사용하지 않아 임의 접근이 불가하기 때문에(순차 접근) 노드를 탐색하거나 데이터를 변경할 때 바로 찾아낼 수가 없다.
- worst case에서는 리스트 전체를 탐색하여 O(n)의 시간이 걸릴 수 있다.
- 포인터를 사용하므로 추가적인 메모리 공간이 발생한다.
  ![image](https://github.com/kyejin0412/Data-Structure-Study/assets/74754782/f70eac93-a7cd-40ab-86ba-b5cb31ceaf5b)

### 4. 용도
- 배열: 빠른 접근이 요구되고, 데이터의 삽입과 삭제가 적을 때
- 연결리스트: 삽입과 삭제 연산이 잦고, 검색 빈도가 적을 때

### 5. 단순 연결리스트 (
- 앞 노드의 포인터가 다음 노드를 가리켜 연결되는 구조.
- 단방향 순환
- 뒤쪽 노드는 찾기 쉽지만 앞쪽 노드는 찾기 어렵다.
  
#### 5.1 삽입 (insert)
- 처음에 노드를 삽입하는 경우-연결리스트가 비어있는 경우 (head==NULL일 때)

  :head가 새 노드를 가리키도록 한다.  
![image](https://github.com/kyejin0412/Data-Structure-Study/assets/74754782/5dad0be0-607f-48c8-ab4b-ba4248dd05ca)

- 처음에 노드를 삽입하는 경우-연결리스트가 비어있지 않은 경우

  :새 노드를 생성한 후 head가 가리키는 노드를 새노드의 next 포인터가 가리키게 한다. 그 후 head가 새 노드를 가리키게 한다.
![image](https://github.com/kyejin0412/Data-Structure-Study/assets/74754782/41fa2705-3f0b-4403-85f5-6e04540e4a15)
![image](https://github.com/kyejin0412/Data-Structure-Study/assets/74754782/5881511c-379f-4727-9e16-e4b77e1e7eee)
- 중간에 노드를 삽입하는 경우

  :위와 같이 새 노드를 생성 후 앞 노드가 새 노드를, 새 노드가 뒷 노드를 가리키게 바꿔준다.
  ![image](https://github.com/kyejin0412/Data-Structure-Study/assets/74754782/661846a1-57ae-4864-9614-03ff0f1b779e)
![image](https://github.com/kyejin0412/Data-Structure-Study/assets/74754782/43d3d29d-467f-4ac8-970c-34365e358258)
- 가장 뒤에 노드를 삽입하는 경우

  :마지막 노드의 next 포인터가 새 노드를 가리키도록 바꾼다.
  ![image](https://github.com/kyejin0412/Data-Structure-Study/assets/74754782/9e48a97c-dd40-40de-95b0-0308da909377)

#### 5.2 삭제 (delete)
- 가장 앞의 노드를 삭제하는 경우

  :head가 cur->next를 가리키게 하고, cur->next를 NULL로 설정한다. 그 후 free(cur)을 해준다.
  ![image](https://github.com/kyejin0412/Data-Structure-Study/assets/74754782/515e0b09-9289-4bf5-938c-cad803771dc7)

- 마지막 혹은 중간 노드를 삭제하는 경우

  :prev라는 포인터로 삭제할 노드의 이전 노드를 가리킨다.

  그 후 cur 포인터가 원하는 노드의 값을 가리키면 삭제를 시작한다. prev->next가 cur->next를 가리키게 하고, cur->next는 NULL로 만든다.
  마지막으로 free(cur)을 해준다.
  ![image](https://github.com/kyejin0412/Data-Structure-Study/assets/74754782/43c4bd0a-51c7-4cd4-9e8f-f4b0ff4a2c6a)
  ![image](https://github.com/kyejin0412/Data-Structure-Study/assets/74754782/d6d153d6-54e7-48c7-9df6-8f0673475d4a)
  ![image](https://github.com/kyejin0412/Data-Structure-Study/assets/74754782/20957767-bbf1-491a-a14d-b43a7b21b9a0)

#### 5.3 탐색 (search)

:반복문으로 전체를 돌면서 원하는 데이터가 나올 때까지 찾는다.

### 6. 이중 연결리스트 (Doubly Linked List)
- 단순연결리스트와 달리 전후 탐색이 가능하다.
- 데이터, 이전 노드의 주소, 다음 노드의 주소를 저장한다.
- 양방향 순환하는 구조
#### 장점
- 단순연결리스트에서 탐색할 때, 최악의 경우 O(n)의 시간이 걸리지만,
  이중 연결리스트에서는 얻고자 하는 데이터가 tail에 가깝다면 역방향 탐색이 가능하여 시간을 줄일 수 있다.
 ![image](https://github.com/kyejin0412/Data-Structure-Study/assets/74754782/5a815f66-8424-4b36-a8a6-96b1acc3709c)


### 7. 원형 연결리스트 (Circular Linked List)
- 원형 연결리스트는 단순 연결리스트의 마지막 노드가 null을 가리키는 게 아닌, 처음 노드를 가리키는 구조이다.
- head에서부터 순회를 반복하다보면 다시 처음으로 돌아온다.
- 단방향 순환하는 구조
  ![image](https://github.com/kyejin0412/Data-Structure-Study/assets/74754782/d12903c3-2677-4845-be70-6ce0d2b2793d)

### 8. 원형 이중 연결리스트 (Circular Doubly Linked List)
- 이중 연결리스트의 마지막 노드가 처음 노드를 가리키는 구조
- 양방향 순환하는 구조  
  ![image](https://github.com/kyejin0412/Data-Structure-Study/assets/74754782/fa362be3-3be5-420a-9c0b-2a91a2514eb5)

----------------
### Reference

https://reakwon.tistory.com/25

https://code-lab1.tistory.com/2

https://toward-the-future.tistory.com/entry/%EC%9E%90%EB%A3%8C%EA%B5%AC%EC%A1%B0-%EC%97%B0%EA%B2%B0-%EB%A6%AC%EC%8A%A4%ED%8A%B8-Linked-List

https://velog.io/@xxhaileypark/%EC%9E%90%EB%A3%8C-%EA%B5%AC%EC%A1%B0-%EB%B0%B0%EC%97%B4-%EC%97%B0%EA%B2%B0-%EB%A6%AC%EC%8A%A4%ED%8A%B8-Array-LinkedList
