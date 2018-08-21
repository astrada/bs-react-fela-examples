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
type colorsType = {
  primary: Css.color
};

[@bs.deriving abstract]
type themeType = {
  colors: colorsType
};

[@bs.deriving abstract]
type propsType = {
  theme: themeType
};

[@bs.deriving abstract]
type stylesInput = {
  container: Css.style,
  title: Css.style
};

let rules =
  `Function(
    props => {
      let theme = props->themeGet;
      let color = Css.(style([color(theme->colorsGet->primaryGet)]));
      stylesInput(~container=color, ~title=color);
    }
  );

let theme = themeType(~colors=colorsType(~primary=Css.blue));

let make = (~title, children) =>
  ReactFela.connect(
    ~rules,
    ~component=Header.component,
    ~make=Header.make(~title),
    ~props=propsType(~theme=themeType(~colors=colorsType(~primary=Css.white))),
    children
  );

