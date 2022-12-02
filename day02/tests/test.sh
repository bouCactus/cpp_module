#! /bin/bash


INPUT=$1
INPUT2=$2


if [ $# -eq 0 ]
  then
    echo "No arguments supplied!"
    exit 99
fi

echo "Comparing files for their content..."


[ ! -f $INPUT ] && { echo "$INPUT file not found"; exit 99; }
[ ! -f $INPUT2 ] && { echo "$INPUT2 file not found"; exit 99; }

$INPUT > inputResult

newContent=`comm -13 <(sort inputResult) <(sort $INPUT2) | wc -l`

if [ $newContent -eq 0 ]
then
   echo [OK]
else
    echo [KO]
    echo "the program:"
    cat inputResult
    echo "_______________________________________________"
    echo "the test they give you:"
    cat $INPUT2
fi
#rm inputResult