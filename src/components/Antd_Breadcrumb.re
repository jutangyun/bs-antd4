

    [@bs.module "antd"] [@react.component]
  external make:
    (
      ~children: React.element,
      ~params: string=?,
      ~routes: string=?,
      ~separator: string=?,
      ~style: ReactDOMRe.Style.t=?,
      // ~onClick: ReactEvent.Form.t => unit,
    ) =>
    React.element =
    "Breadcrumb";

module Item = {
    [@bs.module "antd"] [@bs.scope "Breadcrumb"] [@react.component]
  external make:
    (
      ~children: React.element,
      ~href: string=?,
      ~overlay: string=?,
      // ~onClick: ReactEvent.Form.t => unit,
    ) =>
    React.element =
    "Item";
};