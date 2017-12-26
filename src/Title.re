let title = props =>
  BsCssCore.Css.(style([fontSize(px(props##fontSize)), color(props##color)]));

let make = (~fontSize, ~color, children) =>
  ReactFela.createComponent(
    ~rule=title,
    ~baseElement=`String("h1"),
    ~props={"fontSize": fontSize, "color": color},
    children
  );
