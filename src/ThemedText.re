let text = (props) => {
  let themeColor = props##theme##color;
  let themeColor = Js.Nullable.to_opt(themeColor);
  let themeColor = Js.Option.getWithDefault("red", themeColor);
  Css.(style([fontSize(px(props##theme##fontSize)), unsafe("color", themeColor)]))
};

let make = (children) => ReactFela.createComponent(~rule=text, ~props=Js.Obj.empty(), children);
