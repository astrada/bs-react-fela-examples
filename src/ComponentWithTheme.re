module Component = {
  let component = ReasonReact.statelessComponent("Component");
  let make = (~theme, _children) => {
    ...component,
    render: _self =>
      <div>
        (
          ReasonReact.string("The primary color is " ++ theme##primary)
        )
      </div>
  };
};

let make = children =>
  ReactFela.withTheme(
    ~component=Component.component,
    ~make=Component.make,
    children
  );
