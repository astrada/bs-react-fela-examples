[@bs.get_index] external getProp : (Js.t({..}), string) => 'a = "";

let title = props =>
  Css.(
    style([
      lineHeight(getProp(props, "data-foo") === "bar" ? em(1.2) : em(1.5)),
      fontSize(px(props##fontSize)),
      color(props##color)
    ])
  );

let make = (~fontSize, ~color, ~dataFoo, ~onClick, children) =>
  ReactFela.createComponentWithProxy(
    ~rule=title,
    ~baseElement=`String("div"),
    ~props={
      "fontSize": fontSize,
      "color": color,
      "data-foo": dataFoo,
      "onClick": onClick
    },
    children
  );

let greet = () => Js.log("Hello World");
