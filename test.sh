FILEPATH=$1
SPLITFILEPATH=(`echo $FILEPATH | tr -s '/' ' '`)
problem=`basename ${SPLITFILEPATH[-1]} .cpp`
contest=${SPLITFILEPATH[-3]}${SPLITFILEPATH[-2]}
oj dl "https://${contest}.contest.atcoder.jp/tasks/${contest}_${problem}"
g++ -Wall -std=c++14 $FILEPATH
oj test
rm -f a.out
rm -rf test
