[@bs.module "antd"] [@react.component]
external make:
  (
    ~defaultValue: array(string)=?,
    ~className: string=?,
    ~placeholder: string=?,
    ~size: string=?,
    ~options: array({
                .
                "value": string,
                "label": React.element,
              })
                =?,
    ~allowClear: bool=?,
    ~autoFocus: bool=?,
    ~changeOnSelect: bool=?,
    ~disabled: bool=?,
    ~value: array(string)=?,
    ~showSearch: bool=?,
    ~popupVisible: bool=?,
    ~notFoundContent: string=?,
    ~style:ReactDOMRe.Style.t=?,
    ~children: React.element=?
  ) =>
  React.element =
  "Cascader";