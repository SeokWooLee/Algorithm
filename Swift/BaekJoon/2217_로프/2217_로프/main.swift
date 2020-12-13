//
//  main.swift
//  2217_로프
//
//  Created by SeokWoo Lee on 04/11/2018.
//  Copyright © 2018 SeokWoo Lee. All rights reserved.
//

import Foundation

let n = Int(readLine() ?? "0") ?? 0
var ropes: [Int] = []

(1...n).forEach { _ in
    ropes.append(Int(readLine() ?? "0") ?? 0)
}

var maximumWeight = 0

ropes
    .sorted(by: >)
    .enumerated()
    .forEach { (offset, element) in
        let availableWeight = element * (offset + 1)
        
        if maximumWeight < availableWeight {
            maximumWeight = availableWeight
        }
}

print(maximumWeight)
