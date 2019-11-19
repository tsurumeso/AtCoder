FILEPATH=$1
SPLITFILEPATH=(`echo $FILEPATH | tr -s '/' ' '`)
problem=`basename ${SPLITFILEPATH[-1]} .cpp`
contest_name=${SPLITFILEPATH[-3]}
if [ ${contest_name} = "others" ]; then
    contest_name=${SPLITFILEPATH[-2]}
else
    contest_name=${contest_name}${SPLITFILEPATH[-2]}
fi
oj dl "https://${contest_name}.contest.atcoder.jp/tasks/${contest_name//-/_}_${problem}"
g++ -Wall -std=c++14 $FILEPATH
oj test
rm -f a.out
rm -rf test
