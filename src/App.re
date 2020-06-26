open React;
open Antd;


type action =
  | Submit;

let doMenuClick=(e)=>Js.log("test");

let onFinish=(values)=>Js.log(values);
[@react.component]
let make = () => {
 


  <div> 
  
  <Avatar>"user"->string</Avatar>
  <Avatar style=(ReactDOMRe.Style.make(~color="#f56a00", ~backgroundColor="#fde3cf", ()))>"U1"->string</Avatar>
  <div>
  <Badge count=99>
      <a href="#" className="head-example" />
    </Badge>
    </div>
    <div>
    <Badge dot=true>
      <a href="#">"test"->string</a>
    </Badge>
    <Badge count=2><Avatar size="64"  >"R"->string</Avatar></Badge>

</div>
<div>
<Breadcrumb>
    <Breadcrumb.Item>"Home"->string</Breadcrumb.Item>
    <Breadcrumb.Item>
      <a href="">"Application Center"->string</a>
    </Breadcrumb.Item>
    </Breadcrumb>
</div>
<div>
<Timeline>
<Timeline.Item>"a"->string</Timeline.Item>
<Timeline.Item>"b"->string</Timeline.Item>
</Timeline>
</div>
<div>
 
<Statistic.Countdown value=1000/>
<Statistic value="10000"  ></Statistic>
/* <Statistic value="10000" prefix={<Icon icon=`user/>} suffix={<Icon icon=`setting/>}></Statistic>
<Statistic.Countdown value=1000/> */
</div>

<div>
<Tree checkable=true >
           <Tree.Node title="parent 1" key="0-0">
          <Tree.Node title="parent 1-0" key="0-0-0">
            <Tree.Node title="leaf" key="0-0-0-0" />
            <Tree.Node title="leaf" key="0-0-0-1" />
          </Tree.Node>
          <Tree.Node title="parent 1-1" key="0-0-1">
            <Tree.Node title="cccc" key="0-0-1-0" />
          </Tree.Node>
        </Tree.Node></Tree>

        <Tree.DirectoryTree  >
           <Tree.Node title="parent 1" key="0-0">
          <Tree.Node title="parent 1-0" key="0-0-0">
            <Tree.Node title="leaf" key="0-0-0-0" />
            <Tree.Node title="leaf" key="0-0-0-1" />
          </Tree.Node>
          <Tree.Node title="parent 1-1" key="0-0-1">
            <Tree.Node title="cccc" key="0-0-1-0" />
          </Tree.Node>
        </Tree.Node></Tree.DirectoryTree>
</div>
  <Form onFinish={{onFinish}}>
  <Form.Item name="username" label="username" hasFeedback=true required=true rules={[{ "required": true}]}>
   <Input></Input> 


   </Form.Item>

   <Form.Item name="passwd" label="passwd" hasFeedback=true>
   <Input></Input> 


   </Form.Item>

   <Button htmlType="submit" >"click"->string</Button>
  </Form></div>;
};
