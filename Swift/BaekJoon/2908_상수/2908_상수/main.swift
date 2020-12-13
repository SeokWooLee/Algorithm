//
//  main.swift
//  2908_상수
//
//  Created by SeokWoo Lee on 20/10/2018.
//  Copyright © 2018 SeokWoo Lee. All rights reserved.
//

import Foundation

let const = (readLine() ?? "")
    .split(separator: " ")
    .map { String($0.reversed()) }
    .sorted()
    .last ?? ""

print(const)
