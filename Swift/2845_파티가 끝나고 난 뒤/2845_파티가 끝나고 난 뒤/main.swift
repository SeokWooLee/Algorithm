//
//  main.swift
//  2845_파티가 끝나고 난 뒤
//
//  Created by SeokWoo Lee on 04/11/2018.
//  Copyright © 2018 SeokWoo Lee. All rights reserved.
//

import Foundation

let numberOfPeople = readLine()?
    .split(separator: " ")
    .compactMap { Int($0) }
    .reduce(1) { $0 * $1 } ?? 0

readLine()?
    .split(separator: " ")
    .compactMap { Int($0) }
    .forEach {
        print($0 - numberOfPeople, terminator: " ") }
