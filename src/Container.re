let container = (props) => {
  "padding": props##padding ++ "px",
  "backgroundColor": "rgb(124, 114, 231)",
  "fontSize": "20px"
};

let make = (~padding, children) =>
  ReactFela.createComponent(~rule=container, {"padding": padding}, children);
