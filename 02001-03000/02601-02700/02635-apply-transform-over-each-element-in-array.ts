/* easy :: typescript */
/*
    Give every element of the array to the
    callback function.
    - -                  - -
    Time  :: O(n) ::    50ms
    Space :: O(1) :: 50.86MB
*/
function map(arr: number[], fn: (n: number, i: number) => number): number[]
{
    for (let i = 0; i < arr.length; i++) { arr[i] = fn(arr[i], i); }
    return arr;
};