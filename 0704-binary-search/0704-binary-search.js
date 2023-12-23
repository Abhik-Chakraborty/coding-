/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number}
 */
var search = function(arr, target) {
    let start = 0;
    let end = arr.length - 1;
    let mid = Math.floor(start + (end - start) / 2);

    while (start <= end) {
        if (arr[mid] === target) {
            return mid;
        }
        if (target > arr[mid]) {
            start = mid + 1;
        }
        else {
            end = mid - 1; 
        }
        mid = Math.floor(start + (end - start) / 2);
    }
    return -1;
};