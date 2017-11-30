[@bs.val] [@bs.module "js-tokens"] external jsRegex : Js.Re.t = "default";

let mapToString = (strOption) =>
  switch strOption {
  | None => ""
  | Some(str) => str
  };

let run = (code) =>
  switch (Js.Re.exec(code, jsRegex)) {
  | None => []
  | Some(result) =>
    result
    |> Js.Re.captures
    |> Array.to_list
    |> List.map(Js.Nullable.to_opt)
    |> List.map((_) => "")
  };
