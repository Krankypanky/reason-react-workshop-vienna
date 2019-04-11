type action = | Click | Hover;
[@react.component]
let make = () => {
   
<main>
<div> {React.string("Cities")} </div>
<ul>
{Bs.map(city => <li>
    </li>)}
</ul>
</main>;
};

