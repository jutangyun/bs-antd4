'use strict';

var Antd = require("antd");
var React = require("react");
var Antd_Avatar$ReasonReactExamples = require("./components/Antd_Avatar.bs.js");

var citys = ([
 {
   value: 'zhejiang',
   label: 'Zhejiang',
   children: [
     {
       value: 'hangzhou',
       label: 'Hangzhou',
       children: [
         {
           value: 'xihu',
           label: 'West Lake',
         },
       ],
     },
   ],
 },
 {
   value: 'jiangsu',
   label: 'Jiangsu',
   children: [
     {
       value: 'nanjing',
       label: 'Nanjing',
       children: [
         {
           value: 'zhonghuamen',
           label: 'Zhong Hua Men',
         },
       ],
     },
   ],
 },
]);

function doMenuClick(e) {
  console.log("test");
  
}

function onFinish(values) {
  console.log(values);
  
}

function App(Props) {
  return React.createElement("div", undefined, React.createElement(Antd.Row, {
                  children: null,
                  gutter: 12
                }, React.createElement(Antd.Col, {
                      children: React.createElement(Antd_Avatar$ReasonReactExamples.make, {
                            children: "user"
                          }),
                      span: 3
                    }), React.createElement(Antd.Col, {
                      children: React.createElement(Antd_Avatar$ReasonReactExamples.make, {
                            style: {
                              backgroundColor: "#fde3cf",
                              color: "#f56a00"
                            },
                            children: "U1"
                          }),
                      span: 3
                    }), React.createElement(Antd.Col, {
                      children: React.createElement(Antd.Badge, {
                            count: 99,
                            children: React.createElement("a", {
                                  className: "head-example",
                                  href: "#"
                                })
                          }),
                      span: 3
                    }), React.createElement(Antd.Col, {
                      children: React.createElement(Antd.Badge, {
                            count: 2,
                            children: React.createElement(Antd_Avatar$ReasonReactExamples.make, {
                                  size: "64",
                                  children: "R"
                                })
                          }),
                      span: 3
                    })), React.createElement(Antd.Row, {
                  children: null,
                  gutter: 12
                }, React.createElement(Antd.Col, {
                      children: React.createElement(Antd.Badge, {
                            dot: true,
                            children: React.createElement("a", {
                                  href: "#"
                                }, "test")
                          }),
                      span: 6
                    }), React.createElement(Antd.Col, {
                      children: React.createElement(Antd.Breadcrumb, {
                            children: null
                          }, React.createElement(Antd.Breadcrumb.Item, {
                                children: "Home"
                              }), React.createElement(Antd.Breadcrumb.Item, {
                                children: React.createElement("a", {
                                      href: ""
                                    }, "Application Center")
                              })),
                      span: 6
                    }), React.createElement(Antd.Col, {
                      children: React.createElement(Antd.Timeline, {
                            children: null
                          }, React.createElement(Antd.Timeline.Item, {
                                children: "a"
                              }), React.createElement(Antd.Timeline.Item, {
                                children: "b"
                              })),
                      span: 6
                    }), React.createElement(Antd.Col, {
                      children: null,
                      span: 6
                    }, React.createElement(Antd.Statistic.Countdown, {
                          value: 1000
                        }), React.createElement(Antd.Statistic, {
                          value: "10000"
                        }))), React.createElement(Antd.Row, {
                  children: null,
                  gutter: 12
                }, React.createElement(Antd.Col, {
                      children: React.createElement(Antd.Card, {
                            children: null
                          }, React.createElement(Antd.Tree, {
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
                              })),
                      span: 6
                    }), React.createElement(Antd.Col, {
                      children: React.createElement(Antd.Card, {
                            title: "表单",
                            children: React.createElement(Antd.Form, {
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
                                    }), React.createElement(Antd.Form.Item, {
                                      children: null,
                                      name: "name",
                                      label: "姓名",
                                      hasFeedback: true
                                    }, React.createElement(Antd.AutoComplete, {
                                          children: React.createElement(Antd.AutoComplete.Option, {
                                                key: "a",
                                                value: "b",
                                                children: "aaa"
                                              }),
                                          style: {
                                            width: "200px"
                                          },
                                          placeholder: "请输入姓名"
                                        }), React.createElement(Antd.AutoComplete, {
                                          children: React.createElement(Antd.Input, {
                                                type: "search"
                                              }),
                                          style: {
                                            width: "200px"
                                          },
                                          placeholder: "请输入姓名"
                                        })), React.createElement(Antd.Form.Item, {
                                      children: React.createElement(Antd.DatePicker, { }),
                                      name: "name",
                                      label: "出生日期",
                                      hasFeedback: true
                                    }), React.createElement(Antd.Form.Item, {
                                      children: React.createElement(Antd.Cascader, {
                                            placeholder: "Please select",
                                            options: citys
                                          }),
                                      name: "name",
                                      label: "所在地",
                                      hasFeedback: true
                                    }), React.createElement(Antd.Button, {
                                      children: "click",
                                      htmlType: "submit"
                                    }))
                          }),
                      span: 8
                    })), React.createElement(Antd.Row, {
                  children: null
                }, React.createElement(Antd.Col, {
                      children: React.createElement(Antd.Result, {
                            title: "hello",
                            subTitle: "hello2",
                            status: "success"
                          }),
                      span: 3
                    }), React.createElement(Antd.Col, {
                      children: React.createElement(Antd.Result, {
                            title: "hello",
                            subTitle: "hello2",
                            status: "error"
                          }),
                      span: 3
                    }), React.createElement(Antd.Col, {
                      children: React.createElement(Antd.Result, {
                            title: "404",
                            subTitle: "Sorry, the page you visited does not exist.",
                            status: "404",
                            extra: React.createElement("div", undefined, "test")
                          }),
                      span: 3
                    })));
}

var make = App;

exports.citys = citys;
exports.doMenuClick = doMenuClick;
exports.onFinish = onFinish;
exports.make = make;
/* citys Not a pure module */
