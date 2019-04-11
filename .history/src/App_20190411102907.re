type action = | Click | Hover;
[@react.component]
let make = () => {
   
<main>
<div> {React.string("Cities")} </div>
<ul>

{ReasonReact.array(
    Belt.List.map( 
        Data.cities , city => <li> </li>))}
</ul>
</main>;
};

