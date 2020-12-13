//
//  main.swift
//  1026_보물
//
//  Created by SeokWoo Lee on 20/10/2018.
//  Copyright © 2018 SeokWoo Lee. All rights reserved.
//

import Foundation

let n = Int(readLine() ?? "0") ?? 0

let a = (readLine() ?? "")
    .split(separator: " ")
    .compactMap { Int($0) }
    .sorted()

let b = (readLine() ?? "")
    .split(separator: " ")
    .compactMap { Int($0) }
    .sorted(by: >)

let result = zip(a, b)
    .reduce(0) { $0 + ($1.0 * $1.1) }

print(result)
