// Generated by BUCKLESCRIPT VERSION 5.0.1, PLEASE EDIT WITH CARE

import * as React from "react";
import * as Belt_List from "bs-platform/lib/es6/belt_List.js";
import * as ReactLeaflet from "react-leaflet";
import * as Data$ReactTemplate from "./Data.bs.js";
import * as Styles$ReactTemplate from "./Styles.bs.js";

function App(Props) {
  return React.createElement("main", undefined, React.createElement("div", undefined, "Cities"), React.createElement("ul", {
                  style: {
                    display: "flex",
                    flexDirection: "row"
                  }
                }, Belt_List.toArray(Belt_List.map(Data$ReactTemplate.cities, (function (city) {
                            return React.createElement("li", {
                                        key: city[/* id */0],
                                        className: Styles$ReactTemplate.card,
                                        style: {
                                          flexBasis: "33%"
                                        }
                                      }, React.createElement("h2", undefined, city[/* name */1]), React.createElement("img", {
                                            className: Styles$ReactTemplate.img,
                                            src: city[/* image */3][/* url */0]
                                          }), React.createElement("p", undefined, "Location:"), React.createElement(ReactLeaflet.Map, {
                                            center: /* array */[
                                              city[/* coordinates */2][/* lat */0],
                                              city[/* coordinates */2][/* lng */1]
                                            ],
                                            zoom: 10,
                                            children: React.createElement(ReactLeaflet.TileLayer, {
                                                  url: "http://{s}.tile.osm.org/{z}/{x}/{y}.png"
                                                }),
                                            style: {
                                              height: "200px",
                                              width: "350px"
                                            }
                                          }));
                          })))));
}

var make = App;

export {
  make ,
  
}
/* react Not a pure module */
