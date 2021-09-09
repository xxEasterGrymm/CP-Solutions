/**
*   Return the second largest number in the array.
*   @param {Number[]} nums - An array of numbers.
*   @return {Number} The second largest number in the array.
**/
function getSecondLargest(n) {
    var largest = n[0];
    for(var i = 0; i < n.length; i++) {
        if(n[i] >= largest) largest = n[i];
    }
    var secondLargest = n[0];
    for(var i = 0; i < n.length; i++)
        if(n[i] >= secondLargest && n[i] < largest && secondLargest < largest) secondLargest = n[i];

    return secondLargest;
    // Complete the function
}