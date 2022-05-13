import numpy as np


def detM(u,s):
    k = np.prod(np.diagonal(u))
    return s*k


def find_rank(u, n):
    k = n
    while np.sum(np.abs(u[k - 1])) < 10**(-14):
        k -= 1
    return k


def solve_LU(L, U, P, Q, b, n):
    """PLUx=Pb ; LU=PAQ => 1) Ly=Pb 2)Uz=y 3) x=Qz"""
    Ab = np.c_[a, b]
    rang = find_rank(U, n)
    b = np.dot (P, b)  # Ly = b
    y = np.array (b, dtype=np.float64)
    for i in range (1, n):
        for j in range (i):
            y[i] -= L[i, j] * y[j]
    z = np.array (y, dtype=np.float64)
    if rang == n:
        z[n - 1] /= U[n - 1, n - 1]
        for i in range(n - 2, -1, -1):
            for j in range(n - 1, i, -1):
                z[i] -= z[j] * U[i, j]
            z[i] /= U[i, i]
        x = np.dot (Q, z)
        print('x: \n', x)
    elif rang < n:
        c = 0
        for i in range(rang - 1, n):
            if y[i] == 0:
                c+=n
        if (c == n - rang):
            print('Матрица несовместная')
        else:
            print('Матрица совместная')
            for i in range(rang - 1, n):
                z[i] = 0
            for i in range(0, n - rang):
                for j in range(n - rang - 1, i, -1):
                    z[i] -= z[j] * U[i, j]
                z[i] /= U[i, i]
                x = np.dot(Q, z)
            print('Частное решение x: \n', x)


def inverse_matrix(L, U, P, Q, n):
    E = np.eye(n)
    for i in range(n):
        x = np.transpose(solve_LU(L, U, P, Q, E[:, i], n))
        E[:, i] = x
    return E


def LU(A, n):
    U = np.copy(A)
    P = np.identity(n)
    L = np.zeros((n, n))
    Q = np.identity(n)
    s = 1
    for i in range (n - 1):
        max_element = None
        for k in range (i, n):  # ищем максимум
            for j in range (i, n):
                if max_element == None or abs (U[j, k]) > abs (max_element):  # or max == None
                    max_element = U[j, k]
                    index_max = j
                    index_max_column = k
        if i != index_max:
            U[[i, index_max]] = U[[index_max, i]]  # Меняем строки местами
            L[[i, index_max]] = L[[index_max, i]]
            P[[i, index_max]] = P[[index_max, i]]
            s *= -1
        if i != index_max_column:
           # s *= -1
            Q[:, [i, index_max_column]] = Q[:, [index_max_column, i]]
            U[:, [i, index_max_column]] = U[:, [index_max_column, i]]
            L[:, [i, index_max_column]] = L[:, [index_max_column, i]]
        for ind in range (i + 1, n):  # ():n - 1, i, -1
            factor = U[ind, i] / max_element  # if max_element - U[ind,i] * tmp == 0 else -tmp
            U[ind] -= U[i] * factor
            L[ind, i] = factor
            if U[ind, i] < 10**(-5):
                U[ind, i] = 0
        L[i, i] = 1
        print(U)
    L[n - 1, n - 1] = 1
    print(L)
    print(U)
    print(np.dot(L, U))
    K = np.dot (P, A)
    print (np.dot (K, Q))
    return L, U, P, Q, s


n = 4
# A = np.random.sample ((n, n)) * 50 // 1
# a = np.array (A)
# a[:, 2] = a[:, 1] - 2 * a[:, 0]

# a = np.array([[-2, 2, -1],
#        [-6, 6,  -4],
#         [3, -8, 4]])

# a = np.array ([[17,  9, 20,  3, 24],
#       [28, 24, 43, 25, 21],
#        [36, 46, 33, 43,  2],
#        [14, 29, 43, 19, 13],
#        [25,  3, 18, 16, 17]])
a = np.array([[1., 2., -1., 2.],
              [2., -3., 2, 4.],
              [3., 1., 1., 6.],
              [-1., -6., 7, -3]], dtype=float)
print(a)
L, U, P, Q, s = LU (a, n)
A = np.random.sample ((n, 1)) * 50 // 1
b = np.array (A)
rang = np.linalg.matrix_rank (a)
print('Определитель встроенной функцией:', np.linalg.det (a), '\nОпределитель:', s * detM(U,s))
print('Ранг встроенной функцией:', rang, '\nРанг:', find_rank (U, n))
if rang == n:
    print('Обратная матрица встроенной функцией:\n', np.linalg.inv (a), '\n Обратная матрица:\n', inverse_matrix(L, U, P, Q, n))
    print('Встроенное решение x: \n', np.linalg.solve(a, b))
print(solve_LU(L, U, P, Q, b, n))



