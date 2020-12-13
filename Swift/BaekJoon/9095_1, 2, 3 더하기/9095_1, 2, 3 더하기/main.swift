//
//  main.swift
//  9095_1, 2, 3 더하기
//
//  Created by SeokWoo Lee on 20/10/2018.
//  Copyright © 2018 SeokWoo Lee. All rights reserved.
//

/*
 기형적인 숫자는 맨 처음에 오는 3가지 수
 1(1):
 2(2): (1+1), 2
 3(4): (1+1+1), (1+2), (2+1), 3
 
 그 후로는 N = (N-1) + (N-2) + (N-3)이 된다.
 */

import Foundation

func makeAnswers(to lastIndex: Int) -> [Int] {
    var answers = [1, 2, 4, 7]
    
    guard lastIndex > answers.count else {
        return answers
    }
    
    while answers.count < lastIndex {
        let index = answers.count - 1
        
        answers.append(answers[index] + answers[index] - answers[index - 3])
    }
    
    return answers
}


let n = Int(readLine() ?? "0") ?? 0
var numbers = [Int]()

(0..<n)
    .forEach { _ in
    numbers.append(Int(readLine() ?? "0") ?? 0)
}

let maximumNumber = numbers.sorted().last ?? 0
let answers = makeAnswers(to: maximumNumber)
numbers.forEach { print(answers[$0 - 1]) }
