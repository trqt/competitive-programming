use std::io;
use std::io::BufRead;
use std::fmt::Write;

fn main() {
    // Locking IO, CRINGE
    let stdin = io::stdin().lock();
    let mut out = String::with_capacity(8192);

    let mut lines = stdin.lines();
    let test_cases = lines.next().unwrap().unwrap().parse::<i32>().unwrap(); // UNWRAP HELL

    for _ in 1..=test_cases*2 {
        if lines.next().is_none() {
            break;
        }; // Skip string size
        
        let mut meow = lines.next().unwrap().unwrap();
        meow.make_ascii_lowercase();
        // I dont know how to do this without allocating another vector
        let mut meow_vec = meow.chars().collect::<Vec<char>>();
        meow_vec.dedup();
        if meow_vec == ['m','e','o','w'] {
            writeln!(out, "YES");
        } else {
            writeln!(out, "NO");
        }
    }

    println!("{}", out);
}
