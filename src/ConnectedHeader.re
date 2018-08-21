[@bs.deriving abstract]
type stylesOutput = {
  container: string,
  title: string
};

module Header = {
  let component = ReasonReact.statelessComponent("Header");
  let make = (~title, ~styles, _children) => {
    ...component,
    render: _self =>
      <header className=styles->containerGet>
        <h1 className=styles->titleGet> (ReasonReact.string(title)) </h1>
      </header>
  };
};

[@bs.deriving abstract]
type props = {
  size: int,
  textColor: Css.color,
};

let containerStyle =
  _props =>
    Css.(
      style([textAlign(center), padding(px(20)), height(px(200))])
    );

let titleStyle =
  props =>
    Css.(
      style([
        lineHeight(1.2),
        fontSize(px(props->sizeGet)),
        color(props->textColorGet)
      ])
    );

[@bs.deriving abstract]
type stylesInput = {
  container: props => Css.style,
  title: props => Css.style
};

let rules = `Object(stylesInput(~container=containerStyle, ~title=titleStyle));

let make = (~title, ~color: Css.color, ~size: int, children) =>
  ReactFela.connect(
    ~rules,
    ~component=Header.component,
    ~make=Header.make(~title),
    ~props=props(~textColor=color, ~size),
    children
  );
