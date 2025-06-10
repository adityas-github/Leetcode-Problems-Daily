/**
 * @param {number[]} nums
 * @param {Function} fn
 * @param {number} init
 * @return {number}
 */
var reduce = function (nums, fn, init) {
    let result = init;
    let i = 0;
    while (i < nums.length) {
        result = fn(result, nums[i]);
        i++;
    }
    return result;
};