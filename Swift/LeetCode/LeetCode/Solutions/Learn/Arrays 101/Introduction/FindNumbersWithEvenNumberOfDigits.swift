//
//  FindNumbersWithEvenNumberOfDigits.swift
//  LeetCode
//
//  Created by SeokWoo Lee on 2020/12/14.
//

import Foundation

/// Given an array nums of integers, return how many of them contain an even number of digits.
/// https://leetcode.com/explore/learn/card/fun-with-arrays/521/introduction/3237/
struct FindNumbersWithEvenNumberOfDigits: Solvable {
    
    func solve(input: [Int]) -> Int {
        input
            .map { String($0) }
            .filter { $0.count % 2 == 0 }
            .count
    }
    
}
