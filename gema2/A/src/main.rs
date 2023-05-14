use std::io;
use std::io::BufRead;

fn main() {
    // Locking IO, CRINGE
    let mut stdin = io::stdin().lock();
    let mut nums = String::with_capacity(1024);

    stdin.read_line(&mut nums).unwrap();
    let mut split = nums.split_whitespace();
    let mut samu: i32 = split.next().unwrap().parse().unwrap();
    let mut loppa: i32 = split.next().unwrap().parse().unwrap(); // unwrap, unwrap, unwrap...

    let mut passes = 0;
    loop {
        passes += 1;
        samu *= 3;
        loppa *= 2;
        if samu > loppa {
            break;
        }
    }
    println!("{}", passes);
}
