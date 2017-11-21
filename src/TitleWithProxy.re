[@bs.get_index] external getProp : (Js.t({..}), string) => 'a = "";

let title = (props) => {
  "lineHeight": getProp(props, "data-foo") === "bar" ? 1.2 : 1.5,
  "fontSize": props##fontSize ++ "px",
  "color": props##color
};

let make = (~fontSize, ~color, ~dataFoo, ~onClick, children) =>
  ReactFela.createComponentWithProxy(
    ~rule=title,
    ~baseElement=`String("div"),
    {"fontSize": fontSize, "color": color, "data-foo": dataFoo, "onClick": onClick},
    children
  );

let greet = () => Js.log("Hello World");
