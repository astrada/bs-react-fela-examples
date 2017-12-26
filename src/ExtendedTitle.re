let title = _props => BsCssCore.Css.(style([color(red)]));

let extendTitle = props => BsCssCore.Css.(style([color(props##color)]));

let make = (~color, children) =>
  ReactFela.createComponent(
    ~rule=title,
    ~props={"color": color, "extend": extendTitle},
    children
  );
