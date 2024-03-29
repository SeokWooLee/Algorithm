//
//  RemoveDuplicatesFromSortedArray.swift
//  LeetCode
//
//  Created by SeokWoo Lee on 2021/09/02.
//

import Foundation

/// Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place such that each unique element appears only once. The relative order of the elements should be kept the same.
/// Since it is impossible to change the length of the array in some languages, you must instead have the result be placed in the first part of the array nums. More formally, if there are k elements after removing the duplicates, then the first k elements of nums should hold the final result. It does not matter what you leave beyond the first k elements.
/// Return k after placing the final result in the first k slots of nums.
/// Do not allocate extra space for another array. You must do this by modifying the input array in-place with O(1) extra memory.
/// https://leetcode.com/explore/learn/card/fun-with-arrays/526/deleting-items-from-an-array/3248/
struct RemoveDuplicatesFromSortedArray {
    
    func removeDuplicates(_ nums: inout [Int]) -> Int {
        nums = nums.removingDuplicates()
        
        return nums.count
    }
    
}

extension Array where Element: Hashable {
    
    func removingDuplicates() -> [Element] {
        var addedDict = [Element: Bool]()
        
        return filter {
            addedDict.updateValue(true, forKey: $0) == nil
        }
    }
    
}
