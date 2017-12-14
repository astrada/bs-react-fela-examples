let title = _props => Css.(style([color(red)]));

let extendTitle = props => Css.(style([color(props##color)]));

let make = (~color, children) =>
  ReactFela.createComponent(
    ~rule=title,
    ~props={"color": color, "extend": extendTitle},
    children
  );
