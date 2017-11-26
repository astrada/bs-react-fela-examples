module Header = {
  let component = ReasonReact.statelessComponent("Header");
  let make = (~title, ~styles, _children) => {
    ...component,
    render: (_self) =>
      <header className=styles##container>
        <h1 className=styles##title> (ReasonReact.stringToElement(title)) </h1>
      </header>
  };
};

let container = (_props: unit) => {"textAlign": "center", "padding": "20px", "height": "200px"};

let title = (props: {. "size": string, "color": string}) => {
  "lineHeight": 1.2,
  "fontSize": props##size,
  "color": props##color
};

let rules = {"container": container, "title": title};

let make = (~title, ~color: string, ~size: string, children) =>
  ReactFela.connect(
    ~rules,
    ~component=Header.component,
    ~make=Header.make(~title),
    ~props={"color": color, "size": size},
    children
  );
