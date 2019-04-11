type action = | Click | Hover;
[@react.component]
let make = () => {
   
<main>
<div> {React.string("Cities")} </div>
<ul>

{ReasonReact.array(
    Belt.List.toArray(Belt.List.map( 
        Data.cities , city => <li>
        <img src=city.image.url/>
        
         </li>)
        ))}
</ul>
</main>;
};

