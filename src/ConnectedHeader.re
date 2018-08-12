module Header = {
  let component = ReasonReact.statelessComponent("Header");
  let make = (~title, ~styles, _children) => {
    ...component,
    render: _self =>
      <header className=styles##container>
        <h1 className=styles##title> (ReasonReact.string(title)) </h1>
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
    Css.(
      style([textAlign(center), padding(px(20)), height(px(200))])
    );

let title:
  {
    .
    "size": int,
    "color": Css.color
  } =>
  {
    .
    "lineHeight": string,
    "fontSize": string,
    "color": string
  } =
  props =>
    Css.(
      style([
        lineHeight(1.2),
        fontSize(px(props##size)),
        color(props##color)
      ])
    );

let rules = `Object({"container": container, "title": title});

let make = (~title, ~color: Css.color, ~size: string, children) =>
  ReactFela.connect(
    ~rules,
    ~component=Header.component,
    ~make=Header.make(~title),
    ~props={"color": color, "size": size},
    children
  );
