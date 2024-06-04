/* easy :: typescript */
/*
    Create an initial value and increment
    everytime the function is called.
    - -                  - -
    Time  :: O(1) ::    47ms
    Space :: O(1) :: 50.96MB
*/
function createCounter(n: number): () => number
{
    let s = -1;
    return () => n + (++s)
}