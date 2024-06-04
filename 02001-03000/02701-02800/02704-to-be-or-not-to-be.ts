/* easy :: typescript */
/*
    Do what the problem says in its desc.
    - -                  - -
    Time  :: O(1) ::    56ms
    Space :: O(1) :: 49.70MB
*/
type ToBeOrNotToBe =
{
    toBe: (val: any) => boolean;
    notToBe: (val: any) => boolean;
};


function expect(val: any): ToBeOrNotToBe
{
    const throwError = (error_s) => { throw new Error(error_s) };
    
    return {
        toBe:    (val2) => val2 === val || throwError('Not Equal'),
        notToBe: (val2) => val2 !== val || throwError('Equal'),
    };
};