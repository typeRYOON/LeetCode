/* easy :: typescript */
/*
    Return the obj of functions as intended.
    - -                  - -
    Time  :: O(1) ::    65ms
    Space :: O(1) :: 52.26MB
*/
type ReturnObj =
{
    increment: () => number,
    decrement: () => number,
    reset: () => number,
}

function createCounter(init: number): ReturnObj
{
    let c: number = init;
    return {
        increment: () => c += 1, decrement: () => c -= 1, reset: () => (c = init),
    }
};