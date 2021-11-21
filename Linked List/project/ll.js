// const n1 = {
//     data: 100
// }

// const n2 = {
//     data:200
// }
// const n3 = {
//     data:300
// }

// n1.next = n2
// n2.next = n3

// console.log(n1);



class node{
    constructor(data, next=null){
        this.data = data;
        this.next = next;
    }
}

class linkedList{
    constructor(){
        this.head = null;
        this.size = 0;
    }

    // Insert the first node
    insertFirst(data){
        this.head = new node(data, this.head);
    }

    // Insert at end
    insertAtEnd(data){
        let current = this.head
        var newnode = new node(data)
        while(current.next){
            current = current.next;
        }
        current.next = newnode;
    }

    // print
    printListData(){
        let current = this.head;
        while(current){
            console.log(current.data);
            current = current.next;
        }
    }
}

const ll = new linkedList()
ll.insertFirst(100);
ll.insertAtEnd(200);
ll.insertAtEnd(300);
ll.insertAtEnd(400);
ll.insertAtEnd(500);
ll.printListData();