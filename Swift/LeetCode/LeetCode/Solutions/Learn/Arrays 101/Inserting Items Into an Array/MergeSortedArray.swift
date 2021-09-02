//
//  MergeSortedArray.swift
//  LeetCode
//
//  Created by SeokWoo Lee on 2021/09/02.
//

import Foundation

/// You are given two integer arrays nums1 and nums2, sorted in non-decreasing order, and two integers m and n, representing the number of elements in nums1 and nums2 respectively.
/// Merge nums1 and nums2 into a single array sorted in non-decreasing order.
/// The final sorted array should not be returned by the function, but instead be stored inside the array nums1. To accommodate this, nums1 has a length of m + n, where the first m elements denote the elements that should be merged, and the last n elements are set to 0 and should be ignored. nums2 has a length of n.
/// https://leetcode.com/explore/learn/card/fun-with-arrays/525/inserting-items-into-an-array/3253/

struct MergeSortedArray {
    
    func merge(_ nums1: inout [Int], _ m: Int, _ nums2: [Int], _ n: Int) {
        nums1 = Array(nums1.prefix(m) + nums2.prefix(n)).sorted()
    }
    
}
