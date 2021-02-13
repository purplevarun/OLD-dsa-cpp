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
def insertBST(root,x):
    if root == None : 
        root = node (x)
        return root
    if x < root.value :
        root.left = insertBST (root.left,x)
    else : 
        root.right = insertBST (root.right,x)
    return root
def insert(root,x):
    if root == None :
        root = node (x)
        return
    
# -------------------------------------------------------

root = None

root = insertBST(root,5)
root = insertBST(root,3)
root = insertBST(root,4)
root = insertBST(root,1)
root = insertBST(root,10)
inorder(root)