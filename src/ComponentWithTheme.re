module Component = {
  let component = ReasonReact.statelessComponent("Component");
  let make = (~theme, _children) => {
    ...component,
    render: (_self) =>
      <div> (ReasonReact.stringToElement("The primary color is " ++ theme##primary)) </div>
  };
};

let make = (children) => ReactFela.withTheme(Component.component, Component.make, children);
