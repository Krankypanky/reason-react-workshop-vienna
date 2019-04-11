type action = | Click | Hover;
[@react.component]
let make = () => {
   
<main>
<div> {React.string("Cities")} </div>
<ul>
{Data.cities.map(city)}
</ul>
</main>;
};

