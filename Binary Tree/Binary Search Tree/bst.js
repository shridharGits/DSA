class node{
    constructor(element){
        this.element = element;
        this.element.left = null;
        this.element.right = null;
    }
}

class bst{
    constructor(){
        this.root = null;
    }
    createBst(root, element) {
        var t = root;
        if (root.data === 0){
            var newnode  = new node(element);
            root = newnode;
            return root;
        }
        else{
            while(t){
                if (element == t){
                    return root;
                }
                else if (element < t){
                    t = t.left;
                }
                else{
                    t = t.right;
                }
            }
            var newnode = new node (element);
            if (element<t){
                t.left = newnode;
            }
            else{
                t.right = newnode;
            }
            return root;
        }
    }

    inOrder(root){
        if (root){
            this.inOrder(root.left);
            console.log(root.data);
            this.inOrder(root.right);
        }
    }
};



const tree = new bst();
var root = new node(0);
root = tree.createBst(root, 40);
root = tree.createBst(root, 20);
root = tree.createBst(root, 30);
root = tree.createBst(root, 60);
root = tree.createBst(root, 50);
root = tree.createBst(root, 10);
root = tree.createBst(root, 70);
tree.inOrder(root);
