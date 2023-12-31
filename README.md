# Serein Local Over-Impose Judgement

A local judgement for [NOI Linux](https://www.noi.cn/gynoi/jsgz/2021-07-16/732450.shtml) in China, we are about to update the script for the Windows version

[![GitHub commit activity](https://github.com/img.shields.io/github/commit-activity/m/tder6/Serein-Local-Over-Impose-Judgement)](https://github.com/tder6/Serein-Local-Over-Impose-Judgement/commits/main)

## Background 

In OI competitions, we often encounter the following questions: How to evaluate my score locally? How to quickly compare when my test point has a large amount of data? How can I determine the time spent on my program?
Our project can effectively solve all these problems

## Usage

- Automatically compile and run the given program and input and answer files, judge the results, and return the runtime
- Judge $\color{green}\texttt{[AC]}$, $\color{red}\texttt{[WA]}$, $\color{gold}\texttt{[CE]}$, $\color{teal}\texttt{[TLE]}$ and other situations
- Supports given time limits

## How to use

In order to use it, you need to prepare your program and test points. Please check our [Wiki](https://github.com/tder6/Serein-Local-Over-Impose-Judgement/wiki) to learn about it

Here are the simplified install methods:

- [Download .zip](https://github.com/tder6/Serein-Local-Over-Impose-Judgement/archive/refs/heads/main.zip)
- Unzip it
- Run setup to install

## Requirements

Make sure that the following programs are all installed on your computer:

- Terminal
- gcc/g++

## Upcoming

We are about to launch the following features:

- Various parameters and options, such as:
  - Compilation options like `-O2` and `-std=c++14`
  - Simplify output
  - Hide or delete temporary files such as output files and compiled files
  - Comparison options like `-i` and `-B`
- Judge $\color{blue}\texttt{[MLE]}$, $\color{violet}\texttt{[RE]}$, $\color{gray}\texttt{[PE]}$ and other situations
- Automatically terminate the program after exceeding the time limit to prevent infinite loops
- Special judgements like `SPJ checker` and `Interactor`

## Thanks

[tder](https://github.com/tder6)
