let title = (props) => {"fontSize": props##fontSize ++ "px", "color": props##color};

let make = (~fontSize, ~color, children) =>
  ReactFela.createComponent(
    ~rule=title,
    ~baseElement=`String("h1"),
    {"fontSize": fontSize, "color": color},
    children
  );
