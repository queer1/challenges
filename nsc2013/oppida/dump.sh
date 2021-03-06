#!/bin/sh

export PIN=../../../pintool/ia32/bin/pin.exe

# dump all tables
for addr in `grep 'ptr \[' $1 |grep '*4'|egrep '(lea|push)'|cut -d+ -f2|cut -d] -f1`; do
    $PIN -t baboon-x86.dll --table $addr -- baboon.exe ;
done

python dumpmem.py baboon.exe 0xe00 0x10000 \
    `egrep '(lea|mov)' $1|grep '\['|python logparser.py a|grep -v '\#'`
