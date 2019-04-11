open Emotion

let card = [%css [
    width(`pct( 33.0)),
    overflow(`hidden),
  display(`flex),
  flexDirection(`column),
  alignItems(`center),
  boxShadows([
        (`px(0), `px(2), `px(4), `px(0), `rgba((0, 0, 0, 0.2)), false),
      ]),
      margin(`em(1.0)),
      padding(`em(1.0))

]]

let img = [%css [
    width(`pc( 5.0))
]]
   