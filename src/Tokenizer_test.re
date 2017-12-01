open Jest;

open Tokenizer;

describe(
  "Run",
  () => {
    open Expect;
    open! Expect.Operators;
    let name = (code) => "Simple valid code: " ++ code;
    let test_1 = "var i = 5;";
    test(name(test_1), () => expect(run(test_1)) == ["var", " ", "i", " ", "=", " ", "5", ";"]);
    let test_2 = "console.log(5)";
    test(name(test_2), () => expect(run(test_2)) == ["console", ".", "log", "(", "5", ")"])
  }
);
