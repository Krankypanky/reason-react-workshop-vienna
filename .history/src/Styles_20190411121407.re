open Emotion

let card = [%css [
    width(`pct( 33.0)),
    overflow(`hidden),
  display(`flex),
  flexDirection(`column),
  alignItems(`center),
  boxShadow(`em(1.0), inset: true)

]]

let img = [%css [
    height(`em( 5.0))
]]
   