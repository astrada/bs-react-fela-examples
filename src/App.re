let component = ReasonReact.statelessComponent("App");

let make = (_children) => {
  ...component,
  render: (_self) =>
    <ReactFela.Provider>
      <div>
        <ExampleGroup title="createComponent">
          <Container padding="20"> "Padding anywhere" </Container>
          <Title fontSize="20" color="red"> "I am red" </Title>
          <BorderedTitle color="red" borderWidth="2"> "I am red" </BorderedTitle>
          <ReactFela.ThemeProvider theme=ThemedTitle.theme>
            <ThemedTitle> "I am green and big" </ThemedTitle>
          </ReactFela.ThemeProvider>
          <TitleClick fontSize="23" color="red" onClick=TitleClick.greet>
            "Hello World"
          </TitleClick>
          <ExtendedTitle color="green"> "Hello World" </ExtendedTitle>
        </ExampleGroup>
        <ExampleGroup title="createComponentWithProxy">
          <TitleWithProxy fontSize="23" color="red" dataFoo="baz" onClick=TitleWithProxy.greet>
            "Hello World"
          </TitleWithProxy>
          <TitleWithProxyAndPassThrough
            fontSize="23" color="red" dataFoo="bar" onClick=TitleWithProxyAndPassThrough.greet>
            "Hello World"
          </TitleWithProxyAndPassThrough>
        </ExampleGroup>
      </div>
    </ReactFela.Provider>
};
