/* easy :: typescript */
/*
    Iterate over each element of the array,
    apply the reducer function to the current
    value and the current element, and update
    the accumulated value.
    - -                  - -
    Time  :: O(n) ::    48ms
    Space :: O(1) :: 51.41MB
*/
type Fn<T, U> = (accum: T, curr: U) => T;

function reduce<T, U>(nums: U[], fn: Fn<T, U>, init: T): T
{
  let val: T = init;
  for (let i = 0; i < nums.length; i++) {
    val = fn(val, nums[i]);
  }
  return val;
}
