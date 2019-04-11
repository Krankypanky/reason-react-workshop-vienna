

module Map = {
    [@react.component]
    [@bs.module "react-leaflet"]
    
    external make: (~center: array(float), ) => React.element = "Map";
    
}

module TileLayer = {
    [@react.component]
    [@bs.module "react-leaflet"]

    
}



