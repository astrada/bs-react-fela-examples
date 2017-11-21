let title = (props) => {"fontSize": "20px", "color": props##color};

let titleReactClass = ReactFela.createReactClassWithBaseElement(title, `String("h1"));

let bordered = (props) => {"border": props##borderWidth ++ "px solid green"};

let make = (~color, ~borderWidth, children) =>
  ReactFela.createComponent(
    ~rule=bordered,
    ~baseElement=`ReactClass(titleReactClass),
    {"color": color, "borderWidth": borderWidth},
    children
  );
