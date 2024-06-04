/* easy :: typescript */
/*
    Check if the input array is empty.
    Otherwise, use the reduceRight method
    of the array to apply the functions
    in reverse order. reduceRight is used
    instead of reduce to ensure that the
    functions are applied from right to left.
    - -                  - -
    Time  :: O(n) ::    65ms
    Space :: O(n) :: 52.09MB
*/
type F = (arg: any) => any;

function compose(functions: F[]): F
{
  if (functions.length === 0) {
    return (x: any) => x;
  }

  return functions.reduceRight((prev, next) => {
    return (x: any) => {
      return next(prev(x));
    };
  });
}