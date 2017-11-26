let title = (props) => {
  "lineHeight": 1.2,
  "fontSize": props##fontSize ++ "px",
  "color": props##color
};

let greet = () => Js.log("Hello World");

let make = (~fontSize, ~color, ~onClick, children) =>
  ReactFela.createComponent(
    ~rule=title,
    ~baseElement=`String("div"),
    ~passThrough=[|"onClick"|],
    ~props={"fontSize": fontSize, "color": color, "onClick": onClick},
    children
  );
