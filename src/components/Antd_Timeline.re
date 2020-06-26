
[@bs.module "antd"] [@react.component]
external make:
    (
      ~pending: 'a=?,
      ~mode: [@bs.string] [ | `left | `alternate | `right]=?,
      ~reverse: bool=?,
      ~pendingDot: string=?,
    ~children: React.element=?,
      
    ) =>
  React.element =
    "Timeline";

module Item = {
  [@bs.module "antd"] [@bs.scope "Timeline"] [@react.component] 
  external make : 
    (~children: React.element=?,
     
          ~color:string=?,
          ~dot:string=?,
          ~position: [@bs.string] [ | `left | `right]=?,
       
          )   => 
    React.element =
    "Item";
};