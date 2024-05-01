fn main() {
    // References: Like pointers, without the hassle
    let str1: String = String::from("hey");
    // Give this value to the function steal_your_value()
    steal_your_value(str1);
    // str1 is no longer valid since it doesn't own the data anymore,
    // its pointer was moved to the str argument of the function below.

    // str1.push_str(" there"); // won't compile

    // Instead, we can allow a function to "borrow" a value using references.
    let mut str2: String = String::from("sup");
    borrow_your_value(&str2); // creates a reference to the value owned by str2
    // str2 still owns the data stored in it. We can manipulate it still:
    str2.push('?');
    println!("{}", str2);
}

fn steal_your_value(str: String) {
    println!("I own the string \"{}\" now", str);
    // This function's str will go out of scope. The value is lost forever!
}

fn borrow_your_value(str: &String) {
    println!("Just using the string \"{}\" real quick", str);
    // This function's str will go out of scope, but it doesn't own the value
    // so it's okay.

    // Note that references are also immutable by default.
    // str.push_str("random stuff"); // won't compile

    // If we wanted to change this value, borrow_your_value would have to
    // take an argument of &mut String instead.

    // Only one mutable reference can exist at a time. This helps prevent race conditions.
}