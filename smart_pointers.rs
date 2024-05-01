fn main() {
    let rc: Rc<String> = Rc::new("Howdy".to_String());
    let rc2 = rc.clone(); // only duplicating a pointer to the value
    // rc keeps track of how many references to a value there are
    let rc3 = rc.clone();
    drop(rc2);
    
}