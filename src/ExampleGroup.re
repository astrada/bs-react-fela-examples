let exampleGroup = (_props) => Css.(style([padding(px(5))]));

let component = ReasonReact.statelessComponent("ExampleGroup");

module Group = {
  let make = (children) =>
    ReactFela.createComponent(
      ~rule=exampleGroup,
      ~baseElement=`String("fieldset"),
      ~props=Js.Obj.empty(),
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
