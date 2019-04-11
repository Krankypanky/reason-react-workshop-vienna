type action = | Click | Hover;
[@react.component]
let make = () => {
    /*
let (state, dispatch) = React.useReducer((state, action) => switch(action){
| Click => {...state, count: state.count +1}
});*/

//React.useEffect();
<div> {React.string("Cities")} </div>;
};

[@react.component]
[@bs.module "Foo"]
external: (~prop1, ~props2) => React.element: "bar"

<Foo/>