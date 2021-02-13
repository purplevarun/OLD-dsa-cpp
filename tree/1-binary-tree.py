class node :
    def __init__(this,value):
        this.value = value
        this.left,this.right = None,None
def preorder(root):
    if not root : return
    print (root.value, end=" ")
    preorder (root.left)
    preorder (root.right)

root = node(None)
root = node(5)
preorder(root)