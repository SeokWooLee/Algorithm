//
//  main.swift
//  9996_한국이 그리울 땐 서버에 접속하지
//
//  Created by SeokWoo Lee on 20/10/2018.
//  Copyright © 2018 SeokWoo Lee. All rights reserved.
//

import Foundation

let n = Int(readLine() ?? "0") ?? 0
let pattern = readLine() ?? ""
let patternItems = pattern.split(separator: "*")
let prefix = String(patternItems.first ?? "")   // 백준 컴파일러에 문제가 있어서 String으로 타입 캐스팅
let suffix = String(patternItems.last ?? "")

(0..<n)
    .forEach { _ in
        let fileName = readLine() ?? ""
        
        guard fileName.count >= (pattern.count - 1) else {
            print("NE")
            
            return
        }
        
        if fileName.hasPrefix(prefix) && fileName.hasSuffix(suffix) {
            print("DA")
        } else {
            print("NE")
        }
}
