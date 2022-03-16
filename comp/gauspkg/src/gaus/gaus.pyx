cimport numpy as np


ctypedef np.float64_t ARR_TYPE_t


cdef inline double dot(
        np.ndarray[ARR_TYPE_t,ndim = 1] v1,
        np.ndarray[ARR_TYPE_t,ndim = 1] v2
    ):
    cdef double result = 0
    cdef int i = 0
    cdef int length = v1.size
    cdef double el1 = 0
    cdef double el2 = 0

    for i in range(length):
        el1 = v1[i]
        el2 = v2[i]
        result += el1*el2

    return result


cpdef np.ndarray[ARR_TYPE_t, ndim=1] vector_gauss(
        np.ndarray[ARR_TYPE_t, ndim=2] a,
        np.ndarray[ARR_TYPE_t, ndim=1] b,
    ):
    a = a.copy()
    b = b.copy()

    cdef int n = len(a)
    cdef int j = 0
    cdef int i = 0

    for j in range(n - 1):
        for i in range(j + 1, n):
            frac = a[i, j] / a[j, j]
            a[i, j + 1:n] -= a[j, j + 1:n] * frac
            b[i] = b[i] - frac * b[j]

    for i in range(n - 1, -1, -1):
        b[i] = (b[i] - dot(a[i, i + 1:n], b[i + 1:n])) / a[i, i]

    return b
