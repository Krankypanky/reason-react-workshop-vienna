

module Map = {
    [@react.component]
    [@bs.module "react-leaflet"]
    
    external make: (~center: array(float), ~zoom: int,~children: React.element, ~style: ReactDOMRe.style) => React.element = "Map";
    
}

module TileLayer = {
    [@react.component]
    [@bs.module "react-leaflet"]

    external make: (~url: string) => React.element = "TileLayer";
}



