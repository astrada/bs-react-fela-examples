let component = ReasonReact.statelessComponent("App");

let make = _children => {
  ...component,
  render: _self =>
    <ReactFela.Provider>
      <div>
        <ExampleGroup title="createComponent">
          <Container key="container" padding=20>
            "Padding anywhere"
          </Container>
          <Title key="title" fontSize=20 color=BsCssCore.Css.red> "I am red" </Title>
          <BorderedTitle key="borderedTitle" color="red" borderWidth=2>
            "I am red"
          </BorderedTitle>
          <ReactFela.ThemeProvider key="themedTitle" theme=ThemedTitle.theme>
            ...<ThemedTitle> "I am green and big" </ThemedTitle>
          </ReactFela.ThemeProvider>
          <TitleClick
            key="titleClick"
            fontSize=23
            color=BsCssCore.Css.red
            onClick=TitleClick.greet>
            "Hello World"
          </TitleClick>
          <ExtendedTitle key="extendedTitle" color="green">
            "Hello World"
          </ExtendedTitle>
        </ExampleGroup>
        <ExampleGroup title="createComponentWithProxy">
          <TitleWithProxy
            key="titleWithProxy"
            fontSize=23
            color=BsCssCore.Css.red
            dataFoo="baz"
            onClick=TitleWithProxy.greet>
            "Hello World"
          </TitleWithProxy>
          <TitleWithProxyAndPassThrough
            key="titleWithProxyAndPassThrough"
            fontSize=23
            color=BsCssCore.Css.red
            dataFoo="bar"
            onClick=TitleWithProxyAndPassThrough.greet>
            "Hello World"
          </TitleWithProxyAndPassThrough>
        </ExampleGroup>
        <ExampleGroup title="ThemeProvider">
          <ReactFela.ThemeProvider
            key="themedText" theme={"color": "blue", "fontSize": "15px"}>
            ...<div>
                 <ThemedText> "I am blue and 15px sized" </ThemedText>
                 <ReactFela.ThemeProvider
                   overwrite=true theme={"fontSize": "20px"}>
                   ...<ThemedText> "I am red and 20px sized" </ThemedText>
                 </ReactFela.ThemeProvider>
               </div>
          </ReactFela.ThemeProvider>
        </ExampleGroup>
        <ExampleGroup title="withTheme">
          <ReactFela.ThemeProvider
            key="componentWithTheme" theme={"primary": "red"}>
            ...<ComponentWithTheme />
          </ReactFela.ThemeProvider>
        </ExampleGroup>
        <ExampleGroup title="connect">
          <ConnectedHeader
            key="connectedHeader"
            title="Hello World"
            color="red"
            size="17px"
          />
          <ReactFela.ThemeProvider
            key="connectedHeader2" theme=ConnectedHeader2.theme>
            ...<ConnectedHeader2 title="Hello World" />
          </ReactFela.ThemeProvider>
        </ExampleGroup>
      </div>
    </ReactFela.Provider>
};
