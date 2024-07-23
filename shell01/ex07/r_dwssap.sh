#!/bin/sh                                                                       
cat /etc/passwd | sed '/^#/d' | awk 'NR%2==0'| awk -F ":" '{print$1}' | rev | s\
ort -r | sed -n "$FT_LINE1"','"$FT_LINE2"'p' | awk '{print}' ORS=', ' | sed 's/\
..$/\./' | xargs echo -n
