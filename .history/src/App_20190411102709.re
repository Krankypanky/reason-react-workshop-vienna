type action = | Click | Hover;
[@react.component]
let make = () => {
   
<main>
<div> {React.string("Cities")} </div>
<ul>
{Belt.List.map(city => <li>
    </li>), }
</ul>
</main>;
};

