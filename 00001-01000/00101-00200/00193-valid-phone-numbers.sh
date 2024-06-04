: ' easy :: shell  '
: '
    Use the grep command, use multiple regular
    expressions to capture the all cases.
    - -         - -
    Time  ::   70ms
    Space :: 3.36MB
: '
grep -e "^[0-9]\{3\}\-[0-9]\{3\}\-[0-9]\{4\}$" -e "^([0-9]\{3\}) [0-9]\{3\}\-[0-9]\{4\}$" file.txt