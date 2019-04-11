type action = | Click | Hover;
[@react.component]
let make = () => {
   
<main>
<div> {React.string("Cities")} </div>
<ul style={ReactDOMRe.Style.make(~display = "flex", ~flexDirection = "column", ())}>

{ReasonReact.array(
    Belt.List.toArray(Belt.List.map( 
        Data.cities , city => <li key=city.id>
        <h2>{React.string(city.name)}</h2>
        <img src=city.image.url/>
        <Leaflet.Map zoom=10 center=[|city.coordinates.lat, city.coordinates.lng|] style={ReactDOMRe.Style.make(~width = "200px", ~height = "200px", ())}>
        <Leaflet.TileLayer url="http://{s}.tile.osm"/>
        </Leaflet.Map>
         </li>)
        ))}
</ul>
</main>;
};

