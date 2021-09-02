//
//  DuplicateZeros.swift
//  LeetCode
//
//  Created by SeokWoo Lee on 2021/09/02.
//

import Foundation

/// Given a fixed-length integer array arr, duplicate each occurrence of zero, shifting the remaining elements to the right.
/// https://leetcode.com/explore/learn/card/fun-with-arrays/525/inserting-items-into-an-array/3245/
struct DuplicateZeros {
    
    func duplicateZeros(_ arr: inout [Int]) {
        let zeroDuplicated = arr.flatMap { (input) -> [Int] in
            if input == 0 { return [0, 0] }
            
            return [input]
        }
            
        arr = Array(zeroDuplicated.prefix(arr.count))
    }
    
}
