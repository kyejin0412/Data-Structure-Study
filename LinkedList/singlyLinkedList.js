class Node {
  constructor(data) {
    this.data = data;
    this.pointer = null;
  }
}

class LinkedList {
  constructor(data) {
    this.head = new Node(data);
  }

  showHead() {
    const head = this.head;
    console.log("< head 출력>");
    console.log(head.data);
  }

  showList() {
    let current = this.head;
    console.log("< list 출력>");
    while (true) {
      console.log(current.data);
      if (current.pointer === null) {
        break;
      }
      current = current.pointer;
    }
  }

  create(newData) {
    let current = this.head;
    while (current.pointer !== null) {
      current = current.pointer;
    }
    current.pointer = new Node(newData);
  }

  insert(index, newData) {
    let current = this.head;
    while (current.data !== index) {
      current = current.pointer;
    }
    const newNode = new Node(newData);
    newNode.pointer = current.pointer;
    current.pointer = newNode;
  }

  deleteTarget(data) {
    let current = this.head;
    let prev = this.head;
    while (current.data !== data) {
      prev = current;
      current = current.pointer;
    }
    prev.pointer = current.pointer;
  }

  deleteLast() {
    let current = this.head;
    while (current.pointer.pointer !== null) {
      current = current.pointer;
    }
    current.pointer = null;
  }
}

function main() {
  const linkedList = new LinkedList(1);
  linkedList.create(2);
  linkedList.create(3);
  linkedList.create(4);
  linkedList.insert(2, 5);
  // linkedList.showHead();
  linkedList.showList();
  // 타겟 삭제
  linkedList.deleteTarget(3);
  linkedList.showList();
  // 마지막 노드 삭제
  linkedList.deleteLast();
  linkedList.showList();
}

main();
