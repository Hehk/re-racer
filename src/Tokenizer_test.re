open Jest;

open Tokenizer;

test("Run", (_) => Expect.(expect(run("var i = 5;")) |> toBe([""])));
