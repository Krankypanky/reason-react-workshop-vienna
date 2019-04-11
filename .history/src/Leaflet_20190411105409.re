

module Map = {
    [@react.component]
    [@bs.module "react-leaflet"]
    
    external make: (~center: array(float), ~children: React.element, style:) => React.element = "Map";
    
}

module TileLayer = {
    [@react.component]
    [@bs.module "react-leaflet"]

    external make: (~url: string) => React.element = "Map";
}



