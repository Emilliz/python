import numpy as np

ctypedef np.float64_t DTYPE_t
def vector_gauss(numpy.ndarray[DTYPE_t, ndim=2] a, numpy.ndarray[DTYPE_t, ndim=1] b):
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
