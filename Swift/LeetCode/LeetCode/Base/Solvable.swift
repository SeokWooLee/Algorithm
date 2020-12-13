//
//  Solvable.swift
//  LeetCode
//
//  Created by SeokWoo Lee on 2020/12/14.
//

import Foundation

protocol Solvable {
    
    associatedtype Input
    associatedtype Output
    
    func solve(input: Input) -> Output
    
}
