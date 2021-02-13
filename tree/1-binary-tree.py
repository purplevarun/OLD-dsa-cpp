class node :
    def __init__(this,value=None):
        this.value = value
        this.left = None
        this.right = None
def preorder(root):
    if not root : return
    print (root.value, end=" ")
    preorder (root.left)
    preorder (root.right)
def inorder(root):
    if not root : return
    inorder (root.left)
    print (root.value, end=" ")
    inorder (root.right)
def insert(root,x):
    if root == None : 
        root = node (x)
        return root
    if x < root.value :
        root.left = insert (root.left,x)
    else : 
        root.right = insert (root.right,x)
    return root

# -------------------------------------------------------

root = None

root = insert(root,5)
root = insert(root,3)
root = insert(root,4)
root = insert(root,1)
root = insert(root,10)

inorder(root)
print()
preorder(root)