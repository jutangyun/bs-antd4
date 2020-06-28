  [@bs.module "antd"] [@react.component]
  external make:
    (~title: string,
     ~subTitle: string,
    //   ~status: [@bs.string] [ |`success | `error]=?,
      ~status: string=?,
      ~icon:string=?,
      ~extra:'t=?
      ) => React.element =
    "Result";