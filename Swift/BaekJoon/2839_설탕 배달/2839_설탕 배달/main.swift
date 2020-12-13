//
//  main.swift
//  2839_설탕 배달
//
//  Created by SeokWoo Lee on 14/10/2018.
//  Copyright © 2018 SeokWoo Lee. All rights reserved.
//

import Foundation

enum Sack: Int {
    
    case small = 3
    case big = 5
    
    static func calculateMinimumNumberOfSacks(for weight: Int) -> Int {
        let maximumNumberOfBigs = weight / self.big.rawValue
        
        guard (weight % self.big.rawValue) != 0 else { return maximumNumberOfBigs }
        
        for numberOfBigs in (0...maximumNumberOfBigs).reversed() {
            let weightForSmall = weight - (numberOfBigs * self.big.rawValue)
            let numberOfSmalls = weightForSmall / self.small.rawValue
            
            guard (weightForSmall % self.small.rawValue) != 0 else { return numberOfBigs + numberOfSmalls }
        }
        
        return -1
    }
    
    static func test(weight: Int, numberOfBigs: Int) {
        
    }
    
}

let weight = Int(readLine() ?? "0") ?? 0
print(Sack.calculateMinimumNumberOfSacks(for: weight))
