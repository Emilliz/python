from setuptools import setup, Extension
from Cython.Build import cythonize

extensions = [
    Extension("hello", ["src/hello/hello.pyx"]),
]

compiler_directives = {"language_level": 3, "embedsignature": True}
extensions = cythonize(extensions, compiler_directives=compiler_directives)

with open("requirements.txt") as fp:
    install_requires = fp.read().strip().split("\n")

setup(
    ext_modules=extensions,
    install_requires=install_requires,
) 
