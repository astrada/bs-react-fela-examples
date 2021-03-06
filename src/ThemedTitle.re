let theme = {"fontColor": Css.green, "fontSize": "30px"};

let title = props =>
  Css.(
    style([
      fontSize(px(props##theme##fontSize)),
      color(props##theme##fontColor)
    ])
  );

let make = children =>
  ReactFela.createComponent(
    ~rule=title,
    ~baseElement=`String("h1"),
    ~props=Js.Obj.empty(),
    children
  );
