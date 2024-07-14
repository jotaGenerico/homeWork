#!/bin/bash

FT_LINE1=${1:-1}; FT_LINE2=${2:-$(wc -l < /etc/passwd)}; cat /etc/passwd | grep -v '#' | sed -n "n;p" | cut -d ':' -f 1 | rev | sort -r | awk -v FT_LINE1="$FT_LINE1" -v FT_LINE2="$FT_LINE2" 'NR >= FT_LINE1 && NR <= FT_LINE2' | paste -sd ',' - | sed 's/, */, /g' | sed 's/$/./'
