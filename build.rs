fn main() {
    println!("cargo:rerun-if-changed=src/wrapped.cpp");

    cc::Build::new()
        .cpp(true)
        .file("src/wrapped.cpp")
        .compile("wrapped");

    let bindigngs = bindgen::Builder::default()
        .generate_inline_functions(true)
        .layout_tests(false)
        .header("src/wrapped.cpp")
        .generate()
        .expect("Failed generating bindings");

    let out_path = std::env::var("OUT_DIR").unwrap();
    let out_path = std::path::PathBuf::from(out_path);
    bindigngs
        .write_to_file(out_path.join("bindings.rs"))
        .unwrap();
}
