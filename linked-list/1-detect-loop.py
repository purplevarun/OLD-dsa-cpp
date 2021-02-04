class node:
    val = None
    next = None
    def __init__(this,val):
        this.val = val
        this.next = None

a = node (1)
b = node (2)
c = node (3)
d = node (4)
a.next = b
b.next = c
c.next = d
d.next = b
seen = set()
while a!=None:
    if a in seen : exit("True")
    seen.add(a)
    a=a.next
exit("False")