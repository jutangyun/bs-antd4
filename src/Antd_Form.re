

  [@bs.module "antd"] [@react.component] 
  external make : 
    ( ~children: React.element=?,  ~id:int=?,~layout:string=?,~className:string=?,~onFinish:'a=?)   => 
    React.element =
    "Form";


module Item = {
  [@bs.module "antd"] [@bs.scope "Form"] [@react.component] 
  external make : 
    (~children: React.element=?,
     ~colon:bool=?,
     ~name:string=?,
     ~rules:'a=?,
        //   ~validateStatus=?,
          ~extra:string=?,
          ~className:string=?,
          ~required:bool=?,
          ~style:string=?,
          ~label:string=?,
             ~validateStatus:string=?,
        //   ~wrapperCol=?,
          ~help:string=?,
          ~hasFeedback:bool=?
        //   ~labelCol=?
          )   => 
    React.element =
    "Item";
};