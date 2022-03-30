#!python3

import time
import numpy as np
import gaus
from numpy.linalg import solve as solve_out_of_the_box


def vector_gauss(a, b, n):
    a = a.copy()
    b = b.copy()
    for  j in range(n - 1):
        for i in range(j + 1, n):
            frac = a[i, j] / a[j, j]
            a[i, j + 1:n] -= a[j, j + 1:n] * frac
            b[i] = b[i] - frac * b[j]

    for i in range(n - 1, -1, -1):
        b[i] = (b[i] - np.dot(a[i, i + 1:n], b[i + 1:n])) / a[i, i]
    return b


def main():
    a = np.array([
        [1.5, 2.0, 1.5, 6.0],
        [3.0, 2.0, 4.8, 1.0],
        [1.0, 6.0, 5.8, 4.0],
        [2.0, 1.0, 4.0, 3.0]
    ], dtype = float)

    b = np.array([5.0, 6.0, 7.0, 8.0], dtype = float)

    n = len(a)


    t1 = time.time()
    solution_no_cython = vector_gauss(a, b, n)
    t2 = time.time()
    no_cython_time = t2 - t1

    t1 = time.time()
    solution_cython = gaus.vector_gauss(a, b, n)
    t2 = time.time()
    cython_time = t2 - t1

    t1 = time.time()
    solution_obb = solve_out_of_the_box(a, b)
    t2 = time.time()
    obb_time = t2 - t1

    print("no_cython_time:", round(no_cython_time, 6))
    print("cython_time   :", round(cython_time, 6))
    print("oob_time      :", round(obb_time, 6))
    print()
    print("max deviation cython   :", np.linalg.norm(
        solution_cython - solution_obb, ord=1))
    print("max deviation no cython:", np.linalg.norm(
        solution_no_cython - solution_obb, ord=1))

if __name__ == "__main__":
    main()
