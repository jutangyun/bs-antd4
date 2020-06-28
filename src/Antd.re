
let optBoolToOptJsBoolean =
  fun
  | None => None
  | Some((v)) => Some(v);

let unwrapBool = (v) => Js.Undefined.from_opt @@ optBoolToOptJsBoolean(v);

module Form = Antd_Form;
module Avatar = Antd_Avatar;
module Badge = Antd_Badge;
module Breadcrumb = Antd_Breadcrumb;
module Timeline = Antd_Timeline;
module Icon = Antd_Icon;
module Statistic = Antd_Statistic;
module Tree = Antd_Tree;
module Modal = Antd_Modal;
module Card = Antd_Card;
module DatePicker = Antd_DatePicker;
module Result = Antd_Result;
module AutoComplete = Antd_AutoComplete;
module Cascader = Antd_Cascader;


module Message = {
[@bs.module "antd"] [@bs.scope "message"]  external success: string =>unit = "";
[@bs.module "antd"] [@bs.scope "message"]  external error: string =>unit = "";
[@bs.module "antd"] [@bs.scope "message"]  external warning: string =>unit = "";
[@bs.module "antd"] [@bs.scope "message"]  external loading: string=>int =>unit = "";
[@bs.module "antd"] [@bs.scope "message"]  external info: string =>unit = "";
};

module Notify = {
  
  [@bs.module "antd"] [@bs.scope "notification"]  external success: 't  => unit = "";
  [@bs.module "antd"] [@bs.scope "notification"]  external error: 't  => unit = "";
  [@bs.module "antd"] [@bs.scope "notification"]  external warning: 't  => unit = "";
  [@bs.module "antd"] [@bs.scope "notification"]  external info: 't  => unit = "";

  let success = (message,description)=>{
      success([%bs.obj {message:message,description:description,duration:2}])
  };

    let warning = (message,description)=>{
      warning([%bs.obj {message:message,description:description,duration:2}])
  };
    let info = (message,description)=>{
      info([%bs.obj {message:message,description:description,duration:2}])
  };
    let error = (message,description)=>{
      //  {foo: bar}]
      error([%bs.obj {message:message,description:description,duration:2}])
  };

};

// module Layout = {
//   [@bs.module "antd"] [@react.component]
//   external make: (~children: React.element,~className:string=?) => React.element = "Layout";
// };
// module Content = {
//   [@bs.module "antd"] [@bs.scope "Layout"] [@react.component]
//   external make:
//     (~children: React.element, ~className: string=?) => React.element =
//     "Content";
// };
// module Header = {
//   [@bs.module "antd"] [@bs.scope "Layout"] [@react.component]
//   external make:
//     (~children: React.element, ~className: string=?) => React.element =
//     "Header";
// }; 

 



module Row = {
  [@bs.module "antd"] [@react.component]
  external make: (~children: React.element, ~gutter: int=?,~className:string=?,~_type:string=?) => React.element =
    "Row";
};

module Col = {
  [@bs.module "antd"] [@react.component]
  external make:
    (
      ~children: React.element,
      ~span: int,
      ~offset:int=?,
      ~xs: int=?,
      ~sm: int=?,
      ~md: int=?,
      ~lg: int=?
    ) =>
    React.element =
    "Col";
};


module Input = {
  [@bs.module "antd"] [@react.component]
  external make:
    (
      ~size: string=?,
      ~placeholder: string=?,
      ~onChange: ReactEvent.Form.t => unit=?,
    //   ~onPressEnter: unit => unit,
      ~value: string=?,
      ~_type:string=?
    //   ~prefix: 'a
    ) =>
    React.element =
    "Input";
};


module Button = {
  [@bs.module "antd"] [@react.component]
  external make:
    (
      ~children: React.element,
      ~_type: string=?,
      ~size: string=?,
      ~icon: string=?,
      ~href: string=?,
      ~target: string=?,
      ~block: bool=?,
      ~loading:bool=?,
      ~htmlType:string=?,
      ~onClick: ReactEvent.Form.t => unit=?,
    ) =>
    React.element =
    "Button";
};

// module Alert = {
//   [@bs.module "antd"] [@react.component]
//   external make:
//     (~_type: string, ~message: string, ~showIcon: bool) => React.element =
//     "Alert";
// };





// menu




