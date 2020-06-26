[@bs.module "antd"] [@react.component]
external make:
  (
    ~decimalSeparator: string=?,
    ~formatter: string=?,
    ~groupSeparator: string=?,
    ~title: string=?,
    ~precision: int=?,
    ~prefix: React.element=?,
    ~suffix: React.element=?,
    ~value: string=?,
    ~valueStyle: ReactDOMRe.Style.t=?
  ) =>
  React.element =
  "Statistic";


  module Countdown = {
  [@bs.module "antd"] [@bs.scope "Statistic"] [@react.component]
  external make:
    (
      ~format: string=?,
      ~prefix: string=?,
      ~suffix: string=?,
      ~title: string=?,
      ~value: int=?,
      ~valueStyle: ReactDOMRe.Style.t=?
    ) =>
    React.element =
    "Countdown";
};