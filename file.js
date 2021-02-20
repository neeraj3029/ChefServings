await this.setState({ tabList, activeTabId: newItem.id });
      // set form component
      // for now it will be guess and win v2 later it can be arbitrary
    this.setState({
      activeTabId: newItem.id,
      FormComponent: this.props.campaignTypeToComponentMap[
        GAME_CAMPAIGN_TYPE.GUESS_AND_WIN_V2
      ],
      campaignDetails: {},
    });