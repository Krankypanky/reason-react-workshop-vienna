type action = | Click | Hover;
[@react.component]
let make = () => {
   
<main>
<div> {React.string("Cities")} </div>
<ul>

{ReasonReact.array(
    Belt.Ar.map( 
        Data.cities , city => <li> </li>)
        )}
</ul>
</main>;
};

