import numpy as np
import math
import time


def F_(arg):
    result = np.zeros((10, 1))
    result[0, 0] = np.cos(arg[0] * arg[1]) - np.exp(-3.0 * arg[2]) + arg[3] * arg[4] * arg[4] - arg[5] - np.sinh(2 * arg[7]) * arg[8] + 2.0 * arg[9] + 2.0004339741653854440
    result[1, 0] = np.sin(arg[0] * arg[1]) + arg[2] * arg[8] * arg[6] - np.exp(-arg[9] + arg[5]) + 3 * arg[4] * arg[4] - arg[5] * (arg[7] + 1.0) + 10.886272036407019994
    result[2, 0] = arg[0] - arg[1] + arg[2] - arg[3] + arg[4] - arg[5] + arg[6] - arg[7] + arg[8] - arg[9] - 3.1361904761904761904
    result[3, 0] = 2.0 * np.cos(-arg[8] + arg[3]) + arg[4] / (arg[2] + arg[0]) - np.sin(arg[1] * arg[1]) + np.cos(arg[6] * arg[9]) * np.cos(arg[6] * arg[9]) - arg[7] - 0.1707472705022304757
    result[4, 0] = np.sin(arg[4]) + 2.0 * arg[7] * (arg[2] + arg[0]) - np.exp(-arg[6] * (-arg[9] + arg[5])) + 2.0 * np.cos(arg[1]) - 1.0 / (arg[3] - arg[8]) - 0.3685896273101277862
    result[5, 0] = np.exp(arg[0] - arg[3] - arg[8]) + arg[4] * arg[4] / arg[7] + 0.5 * np.cos(3 * arg[9] * arg[1]) - arg[5] * arg[2] + 2.0491086016771875115
    result[6, 0] = arg[1] * arg[1] * arg[1] * arg[6] - np.sin(arg[9] / arg[4] + arg[7]) + (arg[0] - arg[5]) * np.cos(arg[3]) + arg[2] - 0.7380430076202798014
    result[7, 0] = arg[4] * (arg[0] - 2.0 * arg[5]) * (arg[0] - 2.0 * arg[5]) - 2.0 * np.sin(-arg[8] + arg[2]) + 1.5 * arg[3] - np.exp(arg[1] * arg[6] + arg[9]) + 3.566832198969380904
    result[8, 0] = 7.0 / arg[5] + np.exp(arg[4] + arg[3]) - 2.0 * arg[1] * arg[7] * arg[9] * arg[6] + 3.0 * arg[8] - 3.0 * arg[0] - 8.4394734508383257499
    result[9, 0] = arg[9] * arg[0] + arg[8] * arg[1] - arg[7] * arg[2] + np.sin(arg[3] + arg[4] + arg[5]) * arg[6] - 0.78238095238095238096

    return -result

def J_(arg):
    jac = np.zeros((10, 10))
    jac[0, 0] = -np.sin(arg[0] * arg[1]) * arg[1]
    jac[0, 1] = -np.sin(arg[0] * arg[1]) * arg[0]
    jac[0, 2] = 3.0 * np.exp(-3.0 * arg[2])
    jac[0, 3] = arg[4] * arg[4]
    jac[0, 4] = 2.0 * arg[3] * arg[4]
    jac[0, 5] = -1.0
    jac[0, 6] = 0.0
    jac[0, 7] = -2.0 * np.cosh(2 * arg[7]) * arg[8]
    jac[0, 8] = -np.sinh(2.0 * arg[7])
    jac[0, 9] = 2.0
    jac[1, 0] = np.cos(arg[0] * arg[1]) * arg[1]
    jac[1, 1] = np.cos(arg[0] * arg[1]) * arg[0]
    jac[1, 2] = arg[8] * arg[6]
    jac[1, 3] = 0.0
    jac[1, 4] = 6.0 * arg[4]
    jac[1, 5] = -np.exp(-arg[9] + arg[5]) - arg[7] - 1.0
    jac[1, 6] = arg[2] * arg[8]
    jac[1, 7] = -arg[5]
    jac[1, 8] = arg[2] * arg[6]
    jac[1, 9] = np.exp(-arg[9] + arg[5])
    jac[2, 0] = 1.0
    jac[2, 1] = -1.0
    jac[2, 2] = 1.0
    jac[2, 3] = -1.0
    jac[2, 4] = 1.0
    jac[2, 5] = -1.0
    jac[2, 6] = 1.0
    jac[2, 7] = -1.0
    jac[2, 8] = 1.0
    jac[2, 9] = -1.0
    jac[3, 0] = -arg[4] * (arg[2] + arg[0])**(-2.0)
    jac[3, 1] = -2.0 * np.cos(arg[1] * arg[1]) * arg[1]
    jac[3, 2] = -arg[4] * (arg[2] + arg[0])**(-2.0)
    jac[3, 3] = -2.0 * np.sin(-arg[8] + arg[3])
    jac[3, 4] = 1.0 / (arg[2] + arg[0])
    jac[3, 5] = 0.0
    jac[3, 6] = -2.0 * np.cos(arg[6] * arg[9]) * np.sin(arg[6] * arg[9]) * arg[9]
    jac[3, 7] = -1.0
    jac[3, 8] = 2.0 * np.sin(-arg[8] + arg[3])
    jac[3, 9] = -2.0 * np.cos(arg[6] * arg[9]) * np.sin(arg[6] * arg[9]) * arg[6]
    jac[4, 0] = 2.0 * arg[7]
    jac[4, 1] = -2.0 * np.sin(arg[1])
    jac[4, 2] = 2.0 * arg[7]
    jac[4, 3] = (-arg[8] + arg[3])**(-2.0)
    jac[4, 4] = np.cos(arg[4])
    jac[4, 5] = arg[6] * np.exp(-arg[6] * (-arg[9] + arg[5]))
    jac[4, 6] = -(arg[9] - arg[5]) * np.exp(-arg[6] * (-arg[9] + arg[5]))
    jac[4, 7] = 2.0 * arg[2] + 2.0 * arg[0]
    jac[4, 8] = -(-arg[8] + arg[3])**(-2.)
    jac[4, 9] = -arg[6] * np.exp(-arg[6] * (-arg[9] + arg[5]))
    jac[5, 0] = np.exp(arg[0] - arg[3] - arg[8])
    jac[5, 1] = -1.5 * np.sin(3. * arg[9] * arg[1]) * arg[9]
    jac[5, 2] = -arg[5]
    jac[5, 3] = -np.exp(arg[0] - arg[3] - arg[8])
    jac[5, 4] = 2.0 * arg[4] / arg[7]
    jac[5, 5] = -arg[2]
    jac[5, 6] = 0.0
    jac[5, 7] = -arg[4] * arg[4] * (arg[7])**(-2.)
    jac[5, 8] = -np.exp(arg[0] - arg[3] - arg[8])
    jac[5, 9] = -1.5 * np.sin(3. * arg[9] * arg[1]) * arg[1]
    jac[6, 0] = np.cos(arg[3])
    jac[6, 1] = 3.0 * arg[1] * arg[1] * arg[6]
    jac[6, 2] = 1.0
    jac[6, 3] = -(arg[0] - arg[5]) * np.sin(arg[3])
    jac[6, 4] = np.cos(arg[9] / arg[4] + arg[7]) * arg[9] * (arg[4])**(-2.0)
    jac[6, 5] = -np.cos(arg[3])
    jac[6, 6] = (arg[1])**3.
    jac[6, 7] = -np.cos(arg[9] / arg[4] + arg[7])
    jac[6, 8] = 0.0
    jac[6, 9] = -np.cos(arg[9] / arg[4] + arg[7]) / arg[4]
    jac[7, 0] = 2.0 * arg[4] * (arg[0] - 2. * arg[5])
    jac[7, 1] = -arg[6] * np.exp(arg[1] * arg[6] + arg[9])
    jac[7, 2] = -2.0 * np.cos(-arg[8] + arg[2])
    jac[7, 3] = 1.5
    jac[7, 4] = (arg[0] - 2. * arg[5])**2.0
    jac[7, 5] = -4.0 * arg[4] * (arg[0] - 2.0 * arg[5])
    jac[7, 6] = -arg[1] * np.exp((arg[1] * arg[6]) + arg[9])
    jac[7, 7] = 0.0
    jac[7, 8] = 2.0 * np.cos(-arg[8] + arg[2])
    jac[7, 9] = -np.exp((arg[1] * arg[6]) + arg[9])
    jac[8, 0] = -3.0
    jac[8, 1] = -2.0 * arg[7] * arg[9] * arg[6]
    jac[8, 2] = 0.0
    jac[8, 3] = np.exp((arg[4] + arg[3]))
    jac[8, 4] = np.exp((arg[4] + arg[3]))
    jac[8, 5] = -7.0 * (arg[5])**(-2.0)
    jac[8, 6] = -2.0 * arg[1] * arg[7] * arg[9]
    jac[8, 7] = -2.0 * arg[1] * arg[9] * arg[6]
    jac[8, 8] = 3.0
    jac[8, 9] = -2.0 * arg[1] * arg[7] * arg[6]
    jac[9, 0] = arg[9]
    jac[9, 1] = arg[8]
    jac[9, 2] = -arg[7]
    jac[9, 3] = np.cos(arg[3] + arg[4] + arg[5]) * arg[6]
    jac[9, 4] = np.cos(arg[3] + arg[4] + arg[5]) * arg[6]
    jac[9, 5] = np.cos(arg[3] + arg[4] + arg[5]) * arg[6]
    jac[9, 6] = np.sin(arg[3] + arg[4] + arg[5])
    jac[9, 7] = -arg[2]
    jac[9, 8] = arg[1]
    jac[9, 9] = arg[0]

    return jac


'''x − sin x = 0.25'''


def F_scalar(x):
    return x - math.sin(x) - 0.25


'''d/dx(x − sin x = 0.25)'''


def J_scalar(x):
    return 1 - math.cos(x)

def LU(A):
    n = len(A)
    U = np.copy(A)
    P = np.identity(n)
    L = np.zeros((n, n))
    Q = np.identity(n)
    k = 0
    for i in range(n - 1):
        max_element = None
        for s in range(i, n):  # ищем максимум
            for j in range(i, n):
                if max_element == None or abs(U[j, s]) > abs(max_element):  # or max == None
                    max_element = U[j, s]
                    index_max = j
                    index_max_column = s
        if i != index_max:
            U[[i, index_max]] = U[[index_max, i]]  # Меняем строки местами
            L[[i, index_max]] = L[[index_max, i]]
            P[[i, index_max]] = P[[index_max, i]]
        if i != index_max_column:
           # s *= -1
            Q[:, [i, index_max_column]] = Q[:, [index_max_column, i]]
            U[:, [i, index_max_column]] = U[:, [index_max_column, i]]
            L[:, [i, index_max_column]] = L[:, [index_max_column, i]]
        for ind in range (i + 1, n):  # ():n - 1, i, -1
            factor = U[ind, i] / max_element  # if max_element - U[ind,i] * tmp == 0 else -tmp
            k += 1
            U[ind] -= U[i] * factor
            k += n
            L[ind, i] = factor
            if U[ind, i] < 10**(-5):
                U[ind, i] = 0
        L[i, i] = 1
    L[n - 1, n - 1] = 1
    K = np.dot (P, A)
    return L, U, P, Q, k


def solve_LU(l, u, p, q, b):
    rows, cols = p.shape

    y = np.zeros(rows)
    k = 0

    b = np.dot(p, b)

    y[0] = b[0]

    for i in range(1, rows):
        sum = 0
        for j in range(i):
            sum += y[j] * l[i, j]
            k += 2
        y[i] = b[i] - sum
        k += 1

    x = np.zeros((rows, 1))

    for j in range(rows-1, 0, -1):
        if np.allclose(u[j], x, atol=10e-9) and abs(y[j]) < 10e-9:
            rows -= 1
            cols -= 1
        elif np.allclose(u[j], x, atol=10e-9) and not abs(y[j]) < 10e-9:
            return x, k

    x[rows-1, 0] = y[rows-1] / u[rows-1, cols-1]
    k += 1

    for i in range(2, rows+1):
        sum = 0
        for j in range(1, i):
            sum += x[rows-j, 0] * u[rows-i, cols-j]
            k+=2
        x[rows-i, 0] = (y[rows-i] - sum) / u[rows-i, rows-i]
        k+=1
    x = np.dot(q, x)
    k += 19
    return x,k

def Newton1(x):
    e = 10e-4
    x_k = x
    x -= F_scalar(x_k)/J_scalar(x_k)
    while abs(x - x_k) >= e:
        x_k = x
        x -= F_scalar(x_k) / J_scalar(x_k)
    print(x, F_scalar(x))

def newton(x, mod, k, period):
    x_previous = np.copy(x)
    max_iter = 1e3
    iter = 0
    operations = 0
    start_time = time.time()
    n = 10
    while True and not mod:
        f = F_(x_previous)
        operations += n
        j = J_(x_previous)
        operations += n * n

        L, U, P, Q, m = LU(j)
        delta, с = solve_LU(L, U, P, Q, f)
        operations = operations + m + с
        x_previous += delta

        iter += 1

        if np.linalg.norm(delta) < 1e-6 or iter > max_iter:
            break

        if iter >= k and k != 0:
            mod = True

    if not mod:
        print("Итераций: ", iter)
        print("Время: ", time.time() - start_time)
        print("Операций: ", operations)
        print("x: ", x_previous.T)
        print("F(x):  ", F_(x_previous).T)

    if mod:
        while True:
            if iter == 0 or (period and iter % k == 0):
                j = J_(x_previous)
                operations += n * n
                L, U, P, Q, s = LU(j)
                operations += s

            f = F_(x_previous)
            operations += n
            delta, kk = solve_LU(L, U, P, Q, f)
            operations += kk
            x_previous += delta
            iter += 1
            if np.linalg.norm(delta) < 1e-6 or iter > max_iter:
                break

        print("Итераций: ", iter)
        print("Время: ", time.time() - start_time)
        print("Операций: ", operations)
        print(x_previous.T)
        print(F_(x_previous).T)




Newton1(1)
x = np.array([[0.5], [0.5], [1.5], [-1.0], [-0.5], [1.5], [0.5], [-0.5], [1.5], [-1.5]]) #([0.5, 0.5, 1.5, -1.0, -0.5, 1.5, 0.5, -0.5, 1.5, -1.5])
print("Метод Ньютона")
print(newton(x, False, 0, False))
print("Модифицированные метод Ньютона")
print(newton(x, True, 0, False))
print("Метод Ньютона с переходом на модифицированный")
print(newton(x, False, 3, False))
print("Гибридный метод")
print(newton(x, True, 5, True))
x = np.array([[0.5], [0.5], [1.5], [-1.0], [-0.2], [1.5], [0.5], [-0.5], [1.5], [-1.5]]) #([0.5, 0.5, 1.5, -1.0, -0.5, 1.5, 0.5, -0.5, 1.5, -1.5])
print("Метод Ньютона")
print(newton(x, False, 0, False))
print("Модифицированные метод Ньютона")
print(newton(x, True, 0, False))
print("Метод Ньютона с переходом на модифицированный")
print(newton(x, False, 3, False))
print("Гибридный метод")
print(newton(x, True, 5, True))
print("x_5 = - 0.2. При k < 7")
print(newton(x, True, 2, True))
print("x_5 = - 0.2. При k = 7")
print(newton(x, True, 7, True))
print("x_5 = - 0.2. При k > 7")
print(newton(x, True, 8, True))
print(newton(x, False, 5, True))
print("x_5 = - 0.2. При k < 7")
print(newton(x, True, 2, True))
print("x_5 = - 0.2. При k = 7")
print(newton(x, True, 7, True))
print("x_5 = - 0.2. При k > 7")
print(newton(x, True, 8, True))

