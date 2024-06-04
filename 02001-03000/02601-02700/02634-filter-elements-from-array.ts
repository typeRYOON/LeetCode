/* easy :: typescript */
/*
    Higher order function usage.
    - -                  - -
    Time  :: O(n) ::    57ms
    Space :: O(1) :: 51.20MB
*/
type Filter<T> = (element: T, index?: number) => boolean;

function filter<T>(arr: T[], fn: Filter<T>): T[]
{
    const ret: T[] = [];
    for (let i = 0; i < arr.length; i++)
    {
        if (fn(arr[i], i)) { ret.push(arr[i]); }
    }
    return ret;
}
