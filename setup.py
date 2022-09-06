import setuptools


with open('README.md', 'r') as fstream:
    long_description = fstream.read()

setuptools.setup(
    name="pyracetrack", # Replace with your own username
    version="0.1.5",
    author="Christoph Hoeppke",
    author_email="hoeppke@maths.ox.ac.uk",
    description="A python package for modelling 2D race tracks",
    long_description=long_description,
    long_description_content_type="python",
    url="https://github.com/Hoeppke/pyracetrack",
    packages=setuptools.find_packages(),
    classifiers=[
        "Programming Language :: Python :: 3",
        "License :: OSI Approved :: MIT License",
        "Operating System :: OS Independent",
    ],
    install_requires=[
        'numpy',
        'matplotlib',
        'tikzplot',
        'numba'
    ],
    python_requires='>=3.7',
)
