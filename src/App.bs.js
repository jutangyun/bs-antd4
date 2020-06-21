'use strict';

var Antd = require("antd");
var React = require("react");

function doMenuClick(e) {
  console.log("test");
  
}

function onFinish(values) {
  console.log(values);
  
}

function App(Props) {
  return React.createElement("div", undefined, React.createElement(Antd.Form, {
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
