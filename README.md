# MakeMeFaster
This exercise is based on [exercise](https://leetcode.com/problems/design-twitter/) where you need to create a simple API that "simulate" 
What you need to do is to fill(see `src/twitter.cc` and `src/twitter.hh`)up four functions:
- postTweet
- follow
- unfollow
- getNewsFeed

You can check what is those functions should be doing via the leetcode link.

What is provided is a test suite from generated input(use make check to run them) and a benchmark(run make bench).
The goal of this exercise is to push the performance of the getNewsFeed to its maximum and for you to learn more about
profiling and performance in general.

What I would suggest to do is to run `perf record ./bench` from `build/bench` and then run `perf report` to see what are
the bottleneck in your code.

### Prerequisites

To make it work you need:
- python3
- cppyy `pip install cppyy`
- Google BenchMark(archlinux: `yaourt -S benchmark`)

### Building 

To compile the project:

```
mkdir build
cd build
cmake ..
make
```

### Tools
You can run some test generated tests using:
```
make check
```
You can run a benchmark that is just running the different function of the lib from a input file:
```
make bench
```

## Authors

* **Clement Magnard** - [Deltova](https://github.com/deltova)
