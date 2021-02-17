# nearest greater to the right
A = [1,3,2,4] # result = [3,4,4,-1] # TC 1
# A = [1,3,0,0,1,2,4] # result = [3,4,1,1,2,4,-1] # TC 2
# N = len (A)
# ----------------------------------------------

# ----------------------------------------------
# BRUTE FORCE
# Result = []
# for i in range (N):
#     key = A[i]
#     flag = False
#     for j in range (i+1,N): 
#         if A[j] > key:
#             Result.append (A[j])
#             flag = True
#             break
#     if not flag:
#         Result.append(-1)
# print (Result)