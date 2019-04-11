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
    width(`pct( 100.0)),
    height(`em(6.0)),
    marginBottom(`em(1.0)),
    hover: [
       transform(`scale(`1.0))
    ]
]]

   