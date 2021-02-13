class node :
    value = None
    left,right = None,None
    def __init__(this,value):
        this.value = value
        left,right = None,None
def preorder(root):
    if not root : return
    print (root.value, end=" ")
    preorder (root.left)
    preorder (root.right)
def insert(root,x):
    if not root : root = node(x)
    else :
        
root = node(1)
root.left = node(2)
root.right = node(3)
root.left.left = node(4)
root.left.right = node(5)
preorder(root)