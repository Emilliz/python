from setuptools import setup, Extension
from Cython.Build import cythonize
import numpy

extensions = [
    Extension(
        "gaus",
        ["src/gaus/gaus.pyx"],
        include_dirs=[numpy.get_include()]
    ),
]

compiler_directives = {"language_level": 3, "embedsignature": True}
extensions = cythonize(extensions, compiler_directives=compiler_directives)

setup(
    ext_modules=extensions,
)
