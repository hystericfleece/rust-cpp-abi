include!(concat!(env!("OUT_DIR"), "/bindings.rs"));

fn main() {
    let x = unsafe { Wrapped::new(1., 2., 3., 4., 5.) };
    dbg!(x);

    let y = unsafe { x.getReversed() };
    dbg!(x);
    dbg!(y);

    let y = unsafe { x.getReversed() };
    dbg!(x);
    dbg!(y);
}
