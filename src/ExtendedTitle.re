let title = (_props) => {"color": "red"};

let extendTitle = (props) => {"color": props##color};

let make = (~color, children) =>
  ReactFela.createComponent(~rule=title, {"color": color, "extend": extendTitle}, children);
