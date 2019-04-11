open Emotion

let card = [%css [
    width(`pct( 30.0)),
    overflow(`hidden),
  display(`flex),
  flexDirection(`column),
  alignItems(`center)
]]

let img = [%css [
   