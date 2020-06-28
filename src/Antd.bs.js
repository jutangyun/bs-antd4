'use strict';

var Antd = require("antd");
var Caml_option = require("bs-platform/lib/js/caml_option.js");
var Js_undefined = require("bs-platform/lib/js/js_undefined.js");

function optBoolToOptJsBoolean(v) {
  if (v !== undefined) {
    return Caml_option.some(Caml_option.valFromOption(v));
  }
  
}

function unwrapBool(v) {
  return Js_undefined.from_opt(optBoolToOptJsBoolean(v));
}

var Message = { };

function success(message, description) {
  Antd.notification.success({
        message: message,
        description: description,
        duration: 2
      });
  
}

function warning(message, description) {
  Antd.notification.warning({
        message: message,
        description: description,
        duration: 2
      });
  
}

function info(message, description) {
  Antd.notification.info({
        message: message,
        description: description,
        duration: 2
      });
  
}

function error(message, description) {
  Antd.notification.error({
        message: message,
        description: description,
        duration: 2
      });
  
}

var Notify = {
  success: success,
  warning: warning,
  info: info,
  error: error
};

var Row = { };

var Col = { };

var Input = { };

var Button = { };

var Form;

var Avatar;

var Badge;

var Breadcrumb;

var Timeline;

var Icon;

var Statistic;

var Tree;

var Modal;

var Card;

var DatePicker;

var Result;

var AutoComplete;

var Cascader;

exports.optBoolToOptJsBoolean = optBoolToOptJsBoolean;
exports.unwrapBool = unwrapBool;
exports.Form = Form;
exports.Avatar = Avatar;
exports.Badge = Badge;
exports.Breadcrumb = Breadcrumb;
exports.Timeline = Timeline;
exports.Icon = Icon;
exports.Statistic = Statistic;
exports.Tree = Tree;
exports.Modal = Modal;
exports.Card = Card;
exports.DatePicker = DatePicker;
exports.Result = Result;
exports.AutoComplete = AutoComplete;
exports.Cascader = Cascader;
exports.Message = Message;
exports.Notify = Notify;
exports.Row = Row;
exports.Col = Col;
exports.Input = Input;
exports.Button = Button;
/* antd Not a pure module */
