
// tree

[@bs.module "antd"] [@react.component]
external make:
  (
    ~defaultExpandedKeys: array(string)=?,
    ~defaultCheckedKeys: array(string)=?,
    ~defaultSelectedKeys: array(string)=?,
    ~checkedKeys: array(string)=?,
    ~expandedKeys: array(string)=?,
    ~loadedKeys: array(string)=?,
    ~defaultExpandAll: bool=?,
    ~autoExpandParent: bool=?,
    ~showIcon: bool=?,
    ~blockNode: bool=?,
    ~checkable: bool=?,
    ~disabled: bool=?,
    ~draggable: bool=?,
    ~showLine: bool=?,
    ~defaultExpandParent: bool=?,
     ~multiple: bool=?,
    ~openKeys: array(string)=?,
    ~selectable: bool=?,
    ~selectedKeys: array(string)=?,
    ~style: ReactDOMRe.Style.t=?,
    ~subMenuCloseDelay: int=?,
    ~subMenuOpenDelay: int=?,
     ~onCheck: {
                .
                "checkedKeys": 'a,
                "e": 'b
              
              } =>
              unit
                =?,
    // ~onDeselect: {
    //                .
    //                "item": 'a,
    //                "key": string,
    //                "keyPath": string,
    //                "selectedKeys": array(string),
    //                "domEvent": string,
    //              } =>
    //              unit
    //                =?,
     ~onSelect: {
                 .
                 "selectedKeys": array(string),
                 "e": 'b,
               } =>
               unit
                 =?,
    // ~switcherIcon: React.element=?,
    ~children: React.element=?
  ) =>
  React.element =
  "Tree";


module Node = {
  [@bs.module "antd"] [@bs.scope "Tree"] [@react.component]
  external make:
    (
      ~checkable: bool=?,
      ~disableCheckbox: bool=?,
      ~disabled: bool=?,
      ~isLeaf: bool=?,
      ~selectable: bool=?,
      ~icon: string=?,
      ~key: string=?,
      ~title: string=?,
      ~children: React.element=?
    ) =>
    React.element =
    "TreeNode";
};

module DirectoryTree = {
  [@bs.module "antd"] [@bs.scope "Tree"][@react.component]
  external make:
    (
     ~defaultExpandedKeys: array(string)=?,
    ~defaultCheckedKeys: array(string)=?,
    ~defaultSelectedKeys: array(string)=?,
    ~checkedKeys: array(string)=?,
    ~expandedKeys: array(string)=?,
    ~loadedKeys: array(string)=?,
    ~defaultExpandAll: bool=?,
    ~autoExpandParent: bool=?,
    ~showIcon: bool=?,
    ~blockNode: bool=?,
    ~checkable: bool=?,
    ~disabled: bool=?,
    ~draggable: bool=?,
    ~showLine: bool=?,
    ~defaultExpandParent: bool=?,
     ~multiple: bool=?,
    ~openKeys: array(string)=?,
    ~selectable: bool=?,
    ~selectedKeys: array(string)=?,
    ~style: ReactDOMRe.Style.t=?,
    ~subMenuCloseDelay: int=?,
    ~subMenuOpenDelay: int=?,
     ~onCheck: {
                .
                "checkedKeys": 'a,
                "e": 'b
              
              } =>
              unit
                =?,
   ~onSelect: {
                 .
                 "selectedKeys": array(string),
                 "e": 'b,
               } =>
               unit
                 =?,
      ~children: React.element=?
    ) =>
    React.element =
    "DirectoryTree";
};
