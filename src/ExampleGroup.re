let exampleGroup = _props => BsCssCore.Css.(style([padding(px(5))]));

let component = ReasonReact.statelessComponent("ExampleGroup");

module Group = {
  let make = children =>
    ReactFela.createComponent(
      ~rule=exampleGroup,
      ~baseElement=`String("fieldset"),
      ~props=Js.Obj.empty(),
      children
    );
};

let make = (~title, children) => {
  ...component,
  render: _self => {
    let titleElement = ReasonReact.stringToElement(title);
    let groupChildren =
      Array.of_list([
        <legend key="legend"> titleElement </legend>,
        ...Array.to_list(children)
      ]);
    <Group> groupChildren </Group>;
  }
};
