# About

This repo is the based on C++ Templates & the STL Courses on Linkedin Learn.

## Templating

Templating is compiler abstraction that's allow the programmer to write a generic code deploy
to various type or classes without the concern of the detail of the types. The detail of the
implementation can be found in `templating/src/main.cpp`.

Code snippets:

Implement the template system

```c++
template <typename T>
T maxof(const T &a, const T &b)
{
    return (a > b ? a : b);
}
```

Implemention of Specific data type

```c++
int maxof(const int &a, const int &b)
{
    return (a > b ? a : b);
}
```

The usage of `template <typename T>` and `template <class T>` are interchangeable.

In the main.cpp of template/src, the `typename T` is replace with `int` as shown below as template
parameters to to tell the compilerwhat sort of specialization to use in the runtime. As
`template <typename T>` is just a compiler abstraction, hence we need to tell the compiler which
datatype we are going to use in the runtime.

```c++
cout << "max is " << maxof<int>(a, b) << endl;
```