let mapVariantToString = (strOption) =>
  switch strOption {
  | None => ""
  | Some(str) => str
  };

let run = (code) =>
  switch (Js.String.match(JsTokens.re, code)) {
  | None => []
  | Some(result) => result |> Array.to_list
  };
