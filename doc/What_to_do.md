# Looking into the C++ type system
Here are some resources that can help you look into the C++ type system.
1. If you are not familiar with C++ (or if it has been a while), maybe check out (some of) the C++ tutorials on [cprogramming.com](https://www.cprogramming.com/tutorial/c++-tutorial.html).
2. To check out the various types C++ has to offer, have a look at the type classifications on [cppreference.com](https://en.cppreference.com/w/cpp/language/type).
3. Less complete but more verbose (and, in many ways, informative) is the article [C++ Type System (Modern C++)](https://docs.microsoft.com/en-us/cpp/cpp/cpp-type-system-modern-cpp) from Microsoft.
4. C++ employs templates for polymorphism. The [Wikipedia article](https://en.wikipedia.org/wiki/Template_(C%2B%2B)) on this topic is very informative. Also useful on this topic:
   - the article [Templates](http://www.cplusplus.com/doc/oldtutorial/templates/) on cplusplus.com
   - the article [Templates](https://en.cppreference.com/w/cpp/language/templates) on cppreference.com
5. In the files `include/templates.hpp` and `include/templates.tpp`, I have included an example of a function template. The reason for having those in header files (one of which may have a different file extention) is explained in [this StackOverflow answer](https://stackoverflow.com/a/495056/2382246).
6. The C++ templating mechanism also allows for so called _template metaprogramming_. The [Wikipedia article](https://en.wikipedia.org/wiki/Template_metaprogramming) on the subject is a good introduction into the topic.
7. C++ supports what is known as the _Curiously Recurring Template Pattern_ (or CRTP for short). [This article on dev.to](https://dev.to/sandordargo/the-curiously-recurring-template-pattern-crtp-46j7) offers a short (but non-trivial) introduction to the subject.