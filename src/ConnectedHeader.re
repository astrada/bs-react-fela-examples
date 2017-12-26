module Header = {
  let component = ReasonReact.statelessComponent("Header");
  let make = (~title, ~styles, _children) => {
    ...component,
    render: _self =>
      <header className=styles##container>
        <h1 className=styles##title> (ReasonReact.stringToElement(title)) </h1>
      </header>
  };
};

let container:
  unit =>
  {
    .
    "textAlign": string,
    "padding": string,
    "height": string
  } =
  _props =>
    BsCssCore.Css.(
      style([textAlign(Center), padding(px(20)), height(px(200))])
    );

let title:
  {
    .
    "size": int,
    "color": BsCssCore.Css.color
  } =>
  {
    .
    "lineHeight": string,
    "fontSize": string,
    "color": string
  } =
  props =>
    BsCssCore.Css.(
      style([
        lineHeight(em(1.2)),
        fontSize(px(props##size)),
        color(props##color)
      ])
    );

let rules = `Object({"container": container, "title": title});

let make = (~title, ~color: string, ~size: string, children) =>
  ReactFela.connect(
    ~rules,
    ~component=Header.component,
    ~make=Header.make(~title),
    ~props={"color": color, "size": size},
    children
  );
