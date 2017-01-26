bunbo=1
bunshi=0

bunbo=`cat d1.mecab d2.mecab | sort | uniq |wc -l`
bunshi=`cat d1.mecab d2.mecab | sort | uniq -d |wc -l`

result=`echo "scale=3; ${bunshi}/${bunbo}" | bc`
echo "Jaccard係数: ${result}"
