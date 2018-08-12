let title = props =>
  Css.(style([fontSize(px(20)), color(props##color)]));

let titleReactClass =
  ReactFela.createReactClassWithBaseElement(title, `String("h1"));

let bordered = props =>
  Css.(
    style([
      borderWidth(px(props##borderWidth)),
      borderStyle(solid),
      borderColor(green)
    ])
  );

let make = (~color, ~borderWidth, children) =>
  ReactFela.createComponent(
    ~rule=bordered,
    ~baseElement=`ReactClass(titleReactClass),
    ~props={"color": color, "borderWidth": borderWidth},
    children
  );
