type action = | Click | Hover;
[@react.component]
let make = () => {
   
<main>
<div> {React.string("Cities")} </div>
<ul>
{.map(city => <li>
    </li>)}
</ul>
</main>;
};

