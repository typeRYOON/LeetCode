/* easy :: typescript */
/*
    return "Hello World"
    - -                  - -
    Time  :: O(1) ::    50ms
    Space :: O(1) :: 49.75MB
*/
function createHelloWorld()
{
    return function(...args): string
    {
        return "Hello World";
    };
};