type action = | Click | Hover
[@react.component]
let make = (props) => {
let (state, dispatch) = React.useReducer((state, action) => {
|Click => {...state}
});

//React.useEffect();
<div> {React.string("Cities")} </div>;
}