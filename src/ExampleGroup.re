let exampleGroup = (_props) => {"padding": "5px"};

let component = ReasonReact.statelessComponent("ExampleGroup");

module Group = {
  let make = (children) =>
    ReactFela.createComponent(
      ~rule=exampleGroup,
      ~baseElement=`String("fieldset"),
      Js.Obj.empty(),
      children
    );
};

let make = (~title, children) => {
  ...component,
  render: (_self) => {
    Js.Array.unshift(<legend> (ReasonReact.stringToElement(title)) </legend>, children) |> ignore;
    <Group> children </Group>
  }
};
