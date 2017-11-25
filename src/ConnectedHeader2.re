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

let rules = (props) => {
  let theme = props##theme;
  let color = {"color": theme##colors##primary};
  {"container": color, "title": color}
};

let theme = {"colors": {"primary": "blue"}};

let make = (~title, children) =>
  ReactFela.connect(rules, Header.component, Header.make(~title), Js.Obj.empty(), children);
