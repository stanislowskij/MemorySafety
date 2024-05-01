fn main() {
    // Ownership helps manage data on the stack and the heap.

    // Ownership rules:
    // 1. Every value in Rust has an owner.
    // 2. Every value can only have one owner at a time.
    // 3. The value is lost once the owner is out of scope.

    // Scope is usually denoted by curly braces. This is a new scope:
    {
        let /*mut*/ _s = "Hello!"; // s only lives inside this block.
                              // also, this is stack memory (not heap memory)
    }
    // s no longer exists as the program executes
    // s = "Goodbye!"; // fails to compile


    let _s = String::from("Hello!"); // String allocated on the heap. NOT a literal!



    // Ownership: Memory "owned" by a variable is freed when the variable goes out of scope
    {
        let _t = String::from("Howdy"); // Space allocated for String t
    } // "drop" function is called here. t is no longer valid

    // String metadata such as length, capacity and its pointer are stored on the stack.
    // String contents are stored on the heap.
    let u = String::from("I'm a string");
    let v = u; // Copies u's pointer into v's pointer. They take the same space on the heap.
               // This operation makes u invalid and it goes out of scope, in order to avoid
               // double freeing (see double_free.c).
    // We say that u was "moved" into v.

    // If both variables absolutely must be preserved, we call clone() instead:
    drop(v);

    let u = String::from("This String will be cloned");
    let v = u.clone();

    println!("u: {}, v: {}", u, v);

    // Side note: arrays can also stored on the stack. The book doesn't mention this.
    let a = [1, 2, 3];
    let b = a;
    for i in a {
        print!("{} ", i);
    }
    println!("");
    for i in b {
        print!("{} ", i);
    }
    println!("");
}