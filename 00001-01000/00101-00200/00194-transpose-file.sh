: ' easy :: shell  '
: '
    Use the awk command to transpose the
    contents.
    - -         - -
    Time  ::   69ms
    Space :: 4.09MB
: '
awk '{
    for (i = 1; i <= NF; i++)
    {
        if (NR == 1) { s[i] = $i;  }
        else { s[i] = s[i] " " $i; }
    }
}
END {
    for (i in s) { print s[i]; }
}' file.txt