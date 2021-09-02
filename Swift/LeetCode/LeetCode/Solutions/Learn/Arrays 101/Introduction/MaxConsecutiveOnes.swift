//
//  MaxConsecutiveOnes.swift
//  LeetCode
//
//  Created by SeokWoo Lee on 2020/12/14.
//

import Foundation

/// Given a binary array, find the maximum number of consecutive 1s in this array.
/// https://leetcode.com/explore/learn/card/fun-with-arrays/521/introduction/3238/
struct MaxConsecutiveOnes: Solvable {
    
    func solve(input: [Int]) -> Int {
        var output = 0
        var count = 0
        
        input.forEach {
            if $0 == 1 {
                count += 1
                output = max(output, count)
            } else {
                output = max(output, count)
                count = 0
            }
        }
        
        return output
    }
    
}
