pub fn is_armstrong_number(num: u32) -> bool {
    if num == 0 {
        return true;
    }

    let digits = num.ilog10() + 1;

    let mut armstrong_number: u64 = 0;
    for digit in num.to_string().chars() {
        armstrong_number += digit.to_digit(10).unwrap().pow(digits) as u64;
    }

    if armstrong_number == num as u64 {
        true
    } else {
        false
    }
}
