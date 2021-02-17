class node:
    value = 0
    left = None
    right = None
    def __init__ (this,value=0):
        this.value = value
def inorder (root):
    if not root: return
    inorder (root.left)
    print (root.value,end=" ")
    inorder (root.right)
def insert (root, x):
    if not root: 
        print ("root is null")
        root = node (x)
        return

root = None
root = node (1)
root.left = node (2)
root.right = node (3)
inorder (root)
insert (root,10)