type action = | Click | Hover
[@react.component]
let make = (props) => {
let (state, dispatch) = React.useReducer((state, action) => {
|Click => {...state, count: state.count +1}
| Hover
});

//React.useEffect();
<div> {React.string("Cities")} </div>;
}