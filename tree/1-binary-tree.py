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
def height (root):
    if not root: return 0
    return 1 + max (height(root.left),height(root.right))
def printGivenLevel (root,L):
    # print ("root value = {}".format(root.value), "level = ",L)
    if not root: return 
    if L == 1: 
        print ()
    else :
        printGivenLevel (root.left,L-1)
        printGivenLevel (root.right,L-1) 
def display (root):
    h = height (root)
    for i in range(1,h+1):
        printGivenLevel (root,h)
def insert (root, x):
    if not root: 
        root = node (x)
        # return root
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
for i in range (1,4): root = insert (root, i)
display(root)