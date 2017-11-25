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
            ...<ThemedTitle> "I am green and big" </ThemedTitle>
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
        <ExampleGroup title="ThemeProvider">
          <ReactFela.ThemeProvider theme={"color": "blue", "fontSize": "15px"}>
            ...<div>
                 <ThemedText> "I am blue and 15px sized" </ThemedText>
                 <ReactFela.ThemeProvider overwrite=true theme={"fontSize": "20px"}>
                   ...<ThemedText> "I am red and 20px sized" </ThemedText>
                 </ReactFela.ThemeProvider>
               </div>
          </ReactFela.ThemeProvider>
        </ExampleGroup>
        <ExampleGroup title="withTheme">
          <ReactFela.ThemeProvider theme={"primary": "red"}>
            ...<ComponentWithTheme />
          </ReactFela.ThemeProvider>
        </ExampleGroup>
        <ExampleGroup title="connect">
          <ConnectedHeader title="Hello World" color="red" size="17px" />
          <ReactFela.ThemeProvider theme=ConnectedHeader2.theme>
            ...<ConnectedHeader2 title="Hello World" />
          </ReactFela.ThemeProvider>
        </ExampleGroup>
      </div>
    </ReactFela.Provider>
};
