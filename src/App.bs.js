'use strict';

var Antd = require("antd");
var React = require("react");
var Antd_Avatar$ReasonReactExamples = require("./components/Antd_Avatar.bs.js");

function doMenuClick(e) {
  console.log("test");
  
}

function onFinish(values) {
  console.log(values);
  
}

function App(Props) {
  return React.createElement("div", undefined, React.createElement(Antd_Avatar$ReasonReactExamples.make, {
                  children: "user"
                }), React.createElement(Antd_Avatar$ReasonReactExamples.make, {
                  style: {
                    backgroundColor: "#fde3cf",
                    color: "#f56a00"
                  },
                  children: "U1"
                }), React.createElement("div", undefined, React.createElement(Antd.Badge, {
                      count: 99,
                      children: React.createElement("a", {
                            className: "head-example",
                            href: "#"
                          })
                    })), React.createElement("div", undefined, React.createElement(Antd.Badge, {
                      dot: true,
                      children: React.createElement("a", {
                            href: "#"
                          }, "test")
                    }), React.createElement(Antd.Badge, {
                      count: 2,
                      children: React.createElement(Antd_Avatar$ReasonReactExamples.make, {
                            size: "64",
                            children: "R"
                          })
                    })), React.createElement("div", undefined, React.createElement(Antd.Breadcrumb, {
                      children: null
                    }, React.createElement(Antd.Breadcrumb.Item, {
                          children: "Home"
                        }), React.createElement(Antd.Breadcrumb.Item, {
                          children: React.createElement("a", {
                                href: ""
                              }, "Application Center")
                        }))), React.createElement("div", undefined, React.createElement(Antd.Timeline, {
                      children: null
                    }, React.createElement(Antd.Timeline.Item, {
                          children: "a"
                        }), React.createElement(Antd.Timeline.Item, {
                          children: "b"
                        }))), React.createElement("div", undefined, React.createElement(Antd.Statistic.Countdown, {
                      value: 1000
                    }), React.createElement(Antd.Statistic, {
                      value: "10000"
                    })), React.createElement("div", undefined, React.createElement(Antd.Tree, {
                      checkable: true,
                      children: React.createElement(Antd.Tree.TreeNode, {
                            key: "0-0",
                            title: "parent 1",
                            children: null
                          }, React.createElement(Antd.Tree.TreeNode, {
                                key: "0-0-0",
                                title: "parent 1-0",
                                children: null
                              }, React.createElement(Antd.Tree.TreeNode, {
                                    key: "0-0-0-0",
                                    title: "leaf"
                                  }), React.createElement(Antd.Tree.TreeNode, {
                                    key: "0-0-0-1",
                                    title: "leaf"
                                  })), React.createElement(Antd.Tree.TreeNode, {
                                key: "0-0-1",
                                title: "parent 1-1",
                                children: React.createElement(Antd.Tree.TreeNode, {
                                      key: "0-0-1-0",
                                      title: "cccc"
                                    })
                              }))
                    }), React.createElement(Antd.Tree.DirectoryTree, {
                      children: React.createElement(Antd.Tree.TreeNode, {
                            key: "0-0",
                            title: "parent 1",
                            children: null
                          }, React.createElement(Antd.Tree.TreeNode, {
                                key: "0-0-0",
                                title: "parent 1-0",
                                children: null
                              }, React.createElement(Antd.Tree.TreeNode, {
                                    key: "0-0-0-0",
                                    title: "leaf"
                                  }), React.createElement(Antd.Tree.TreeNode, {
                                    key: "0-0-0-1",
                                    title: "leaf"
                                  })), React.createElement(Antd.Tree.TreeNode, {
                                key: "0-0-1",
                                title: "parent 1-1",
                                children: React.createElement(Antd.Tree.TreeNode, {
                                      key: "0-0-1-0",
                                      title: "cccc"
                                    })
                              }))
                    })), React.createElement(Antd.Form, {
                  children: null,
                  onFinish: onFinish
                }, React.createElement(Antd.Form.Item, {
                      children: React.createElement(Antd.Input, { }),
                      name: "username",
                      rules: /* :: */[
                        {
                          required: true
                        },
                        /* [] */0
                      ],
                      required: true,
                      label: "username",
                      hasFeedback: true
                    }), React.createElement(Antd.Form.Item, {
                      children: React.createElement(Antd.Input, { }),
                      name: "passwd",
                      label: "passwd",
                      hasFeedback: true
                    }), React.createElement(Antd.Button, {
                      children: "click",
                      htmlType: "submit"
                    })));
}

var make = App;

exports.doMenuClick = doMenuClick;
exports.onFinish = onFinish;
exports.make = make;
/* antd Not a pure module */
