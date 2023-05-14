use std::io;
use std::io::BufRead;

fn main() {
    // Locking IO, CRINGE
    let mut stdin = io::stdin().lock();
    let mut nums = String::with_capacity(1024);
    let mut _size = String::with_capacity(1024);

    stdin.read_line(&mut _size).unwrap(); // skip one line;
    
    stdin.read_line(&mut nums).unwrap();
    let mut numbers: Vec<i32> = nums
        .split_whitespace()
        .map(|s| s.parse().expect("parse error"))
        .collect();

    numbers.sort();

    println!("{}", numbers.last().unwrap() - numbers[0]);
}
