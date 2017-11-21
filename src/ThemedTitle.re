let theme = {"fontColor": "green", "fontSize": "30px"};

let title = (props) => {"fontSize": props##theme##fontSize, "color": props##theme##fontColor};

let make = (children) =>
  ReactFela.createComponent(~rule=title, ~baseElement=`String("h1"), Js.Obj.empty(), children);
