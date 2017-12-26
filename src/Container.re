let container = props =>
  BsCssCore.Css.(
    style([
      padding(px(props##padding)),
      backgroundColor(rgb(124, 114, 231)),
      fontSize(px(20))
    ])
  );

let make = (~padding, children) =>
  ReactFela.createComponent(
    ~rule=container,
    ~props={"padding": padding},
    children
  );
