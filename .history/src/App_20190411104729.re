type action = | Click | Hover;
[@react.component]
let make = () => {
   
<main>
<div> {React.string("Cities")} </div>
<ul style={ReactDOMRe.Style.make(~display = "flex", ~flexDirection = "column", ())}>

{ReasonReact.array(
    Belt.List.toArray(Belt.List.map( 
        Data.cities , city => <li>
        <h2>{React.string(city.name)}</h2>
        <img src=city.image.url/>
        <Map center=[|city.coordinates.lat, city.coordinates.lng|]/>
         </li>)
        ))}
</ul>
</main>;
};

