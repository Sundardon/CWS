#!/bin/bash

echo "Enter the student's grade:"
read grade

if [ $grade -ge 90 ]; then
    echo "Result: Pass with A Class"
elif [ $grade -ge 80 ]; then
    echo "Result: Pass with Second Class"
elif [ $grade -ge 70 ]; then
    echo "Result: Pass with Third Class"
else
    echo "Result: Fail"
fi
