open React;
open Antd;


type action =
  | Submit;

let doMenuClick=(e)=>Js.log("test");

let onFinish=(values)=>Js.log(values);
[@react.component]
let make = () => {
 


  <div> <Form onFinish={{onFinish}}>
  <Form.Item name="username" label="username" hasFeedback=true required=true rules={[{ "required": true}]}>
   <Input></Input> 


   </Form.Item>

   <Form.Item name="passwd" label="passwd" hasFeedback=true>
   <Input></Input> 


   </Form.Item>

   <Button htmlType="submit" >"click"->string</Button>
  </Form></div>;
};
