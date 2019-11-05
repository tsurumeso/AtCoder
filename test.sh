problem=$1
oj dl "https://${problem:0:6}.contest.atcoder.jp/tasks/${problem:0:8}"
g++ -Wall -std=c++14 ${problem:0:6}/$problem.cpp
oj test
rm -f a.out
rm -rf test
