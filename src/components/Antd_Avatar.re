module AntAvatar = {
  [@bs.module "antd"] [@react.component]
  external make:
    (
      ~icon: 'a=?,
      ~shape: 'b=?,
      ~size: 'c=?,
      ~src: 'd=?,
      ~srcSet: 'e=?,
      ~alt: 'f=?,
      ~icon: 'q=?,
      ~className: 'g=?,
      ~style:ReactDOMRe.Style.t=?,
      ~onError: unit => bool=?,
      ~children: 'h=?,
     
    ) =>
    React.element =
    "Avatar";
};

[@react.component]
let make =
    (
      ~icon: 'a=?,
      ~shape:  option( [@bs.string] [ | `circle | `square])=?,
      ~size: option('c)=?,
      ~icon: 'q=?,
      ~src: option(string)=?,
      ~srcSet: option(string)=?,
      ~alt: option(string)=?,
      ~className: option(string)=?,
      ~style:option(ReactDOMRe.Style.t)=?,
      ~onError: option(unit => bool)=?,
      ~children: option('h)=?,
      
    ) =>
  <AntAvatar
    /* icon={Util.tts(Antd_Icon.iconToJsSafe(~icon, ()))} */
    shape
    size
    src
    icon
    srcSet
    style=ReactDOMRe.Style.make()
    alt
    className
    >
    children
  </AntAvatar>;