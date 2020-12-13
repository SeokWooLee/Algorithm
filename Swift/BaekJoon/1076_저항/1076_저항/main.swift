//
//  main.swift
//  1076_저항
//
//  Created by SeokWoo Lee on 04/11/2018.
//  Copyright © 2018 SeokWoo Lee. All rights reserved.
//

import Foundation

enum Resist: String {
    
    case black, brown, red, orange, yellow, green, blue, violet, grey, white
    
    var value: Double {
        switch self {
        case .black:
            return 0
        case .brown:
            return 1
        case .red:
            return 2
        case .orange:
            return 3
        case .yellow:
            return 4
        case .green:
            return 5
        case .blue:
            return 6
        case .violet:
            return 7
        case .grey:
            return 8
        case .white:
            return 9
        }
    }
    
    var multipledValue: Double {
        return pow(10.0, self.value)
    }
    
}

let firstResist = Resist(rawValue: readLine() ?? "") ?? .black
let secondResist = Resist(rawValue: readLine() ?? "") ?? .black
let thirdResist = Resist(rawValue: readLine() ?? "") ?? .black

print(Int(((firstResist.value * 10) + secondResist.value) * thirdResist.multipledValue))
