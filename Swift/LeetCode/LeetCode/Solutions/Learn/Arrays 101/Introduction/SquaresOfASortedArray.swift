//
//  SquaresOfASortedArray.swift
//  LeetCode
//
//  Created by SeokWoo Lee on 2020/12/14.
//

import Foundation

/// Given an integer array nums sorted in non-decreasing order, return an array of the squares of each number sorted in non-decreasing order.
/// https://leetcode.com/explore/learn/card/fun-with-arrays/521/introduction/3240/
struct SquaresOfASortedArray: Solvable {
    
    func solve(input: [Int]) -> [Int] {
        input
            .map { $0 * $0 }
            .sorted()
    }
    
}
