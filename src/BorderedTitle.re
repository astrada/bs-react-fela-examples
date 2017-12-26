let title = props =>
  BsCssCore.Css.(style([fontSize(px(20)), color(props##color)]));

let titleReactClass =
  ReactFela.createReactClassWithBaseElement(title, `String("h1"));

let bordered = props =>
  BsCssCore.Css.(
    style([
      borderWidth(px(props##borderWidth)),
      borderStyle(Solid),
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
