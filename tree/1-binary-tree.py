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
def preorder (root):
    if not root: return
    print (root.value,end=" ")
    preorder (root.left)
    preorder (root.right)
def insert (root, x):
    if not root: 
        root = node (x)
        return root
    else:
        q = [] # empty queue
        q.append(root)
        while (q != []):
            temp = q[0]
            del q[0] # remove first element from queue
            if not temp.left:
                temp.left = node (x)
                break
            else: q.append (temp.left)

            if not temp.right:
                temp.right = node (x)
                break
            else: q.append (temp.right)
    return root
root = None
for i in range (1,7+1): root = insert (root, i)
print ("inorder =",end=" ") 
inorder(root)
print ("\npreorder =",end=" ") 
preorder(root)