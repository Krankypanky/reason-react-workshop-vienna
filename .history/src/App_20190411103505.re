type action = | Click | Hover;
[@react.component]
let make = () => {
   
<main>
<div> {React.string("Cities")} </div>
<ul style={ReactDOMRe.Style.make(~d)}>

{ReasonReact.array(
    Belt.List.toArray(Belt.List.map( 
        Data.cities , city => <li>
        <h2>{React.string(city.name)}</h2>
        <img src=city.image.url/>
         </li>)
        ))}
</ul>
</main>;
};

