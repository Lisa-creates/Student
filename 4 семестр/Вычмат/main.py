import numpy as np

def apriore(x0,x1,q):
    k = 0
    nrm = np.linalg.norm(x1-x0)
    e = 10**(-6)
    while (q**k)/(1-q) * nrm > e:
        k += 1
    return k

def Jacobi_method(A,b, n,  apr):
    R = np.triu(A, k=1)
    L = np.tril(A, k=-1)
    D_inv = np.linalg.inv(A - L - R)
    B = np.dot(-D_inv, (L + R))
    q = np.linalg.norm(B)
    C = np.dot(D_inv, b)
    x = np.copy(C)
    xk = np.dot(B, x) + C
    if q >= 1:
        return -1
    e = 10**(-6)
    if apr:
        k = apriore(x,xk,q)
        print(k)
        for i in range(k-1):
            i += 1
            x = np.copy (xk)
            xk = np.dot(B, x) + C
    else:
        eq = e * (q/(1-q))
        itr = 1
        while np.linalg.norm(xk - x) > e:
            itr += 1
            x = np.copy (xk)
            xk = np.dot (B, x) + C
        print(itr)
    return xk


def Seidel_method(A,b, n, apr):
    L = np.tril(A)
    U = A - L
    B = np.dot(np.linalg.inv(L), -U)
    q = np.linalg.norm (B)
    C = np.dot(np.linalg.inv(L),b)
    itr = 0
    x = C
    xk = np.dot (B, x) + C
    e = 10 ** (-6)
    if apr:
        k = apriore (x, xk, q)
        for i in range (k):
            i += 1
            x = np.copy (xk)
            xk = np.dot(B,x) + C
        print(k)
    else:
        itr += 1
        eq = e * (q / (1 - q))
        while np.linalg.norm (xk - x) > eq:
            itr += 1
            x = np.copy (xk)
            xk = np.dot (B, x) + C
        print(itr)
    return xk



n = 5
A = np.random.sample((n,n)) * 10 // 1 + 10*n*np.eye(n) # Диаганальное преобладание
# n = 3
# A = np.array([[4,2,6],
#              [2,10,9],
#              [6,9,14]])
b = np.random.sample((n,1)) * 20 // 1
print('Встроенное решение x: \n', np.linalg.solve(A, b), '\nx: \n', Jacobi_method(A, b, n, True),'\n', np.linalg.solve(A, b) - Jacobi_method(A, b, n, True))
print(Jacobi_method(A, b, n, False),'\n', np.linalg.solve(A, b) - Jacobi_method(A, b, n, False))
print(Seidel_method(A, b, n, True),'\n', np.linalg.solve(A, b) - Seidel_method(A, b, n, True))
print(Seidel_method(A, b, n, False),'\n', np.linalg.solve(A, b) - Seidel_method(A, b, n, False))