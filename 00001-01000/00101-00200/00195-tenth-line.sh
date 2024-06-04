: ' easy :: shell  '
: '
    Use the tail command, prints last n lines,
    tail -n+10 -> print from line 10 until end.
    Pipe result into head, head -n 1 -> print one
    line of output.
    - -         - -
    Time  ::   23ms
    Space :: 3.77MB
: '
tail -n+10 file.txt | head -n 1