open React;
open Antd;

let citys = [%raw {|
  [
 {
   value: 'zhejiang',
   label: 'Zhejiang',
   children: [
     {
       value: 'hangzhou',
       label: 'Hangzhou',
       children: [
         {
           value: 'xihu',
           label: 'West Lake',
         },
       ],
     },
   ],
 },
 {
   value: 'jiangsu',
   label: 'Jiangsu',
   children: [
     {
       value: 'nanjing',
       label: 'Nanjing',
       children: [
         {
           value: 'zhonghuamen',
           label: 'Zhong Hua Men',
         },
       ],
     },
   ],
 },
]
|}];

type action =
  | Submit;

let doMenuClick=(e)=>Js.log("test");

let onFinish=(values)=>Js.log(values);
[@react.component]
let make = () => {
 


  <div> 
  

  
 
 
 
<Row gutter=12>
<Col span=3>
<Avatar>"user"->string</Avatar>
 
</Col>

<Col span=3>
 <Avatar style=(ReactDOMRe.Style.make(~color="#f56a00", ~backgroundColor="#fde3cf", ()))>"U1"->string</Avatar>
 
</Col>

<Col span=3>
 
<Badge count=99>
<a href="#" className="head-example" />
</Badge>
</Col>

<Col span=3>
<Badge count=2><Avatar size="64"  >"R"->string</Avatar></Badge>

</Col>
</Row>

<Row gutter=12>
<Col span=6>
<Badge dot=true>
<a href="#">"test"->string</a>
</Badge>


</Col>

<Col span=6>
<Breadcrumb>
    <Breadcrumb.Item>"Home"->string</Breadcrumb.Item>
    <Breadcrumb.Item>
      <a href="">"Application Center"->string</a>
    </Breadcrumb.Item>
    </Breadcrumb>
</Col>

<Col span=6>
<Timeline>
<Timeline.Item>"a"->string</Timeline.Item>
<Timeline.Item>"b"->string</Timeline.Item>
</Timeline>
</Col>

<Col span=6>
<Statistic.Countdown value=1000/>
<Statistic value="10000"  ></Statistic>
/* <Statistic value="10000" prefix={<Icon icon=`user/>} suffix={<Icon icon=`setting/>}></Statistic>
<Statistic.Countdown value=1000/> */
</Col>
</Row>

<Row gutter=12>
<Col span=6>
<Card>
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
</Card>
</Col>
<Col span=8>
<Card title={j|表单|j}>
  <Form onFinish={{onFinish}}>
  <Form.Item name="username" label="username" hasFeedback=true required=true rules={[{ "required": true}]}>
   <Input></Input> 


   </Form.Item>

   <Form.Item name="passwd" label="passwd" hasFeedback=true>
   <Input></Input> 


   </Form.Item>
   <Form.Item name="name" label={j|姓名|j}  hasFeedback=true>

   <AutoComplete placeholder={j|请输入姓名|j} style=(ReactDOMRe.Style.make(~width="200px", ()))>
    <AutoComplete.Option key="a" value="b">"aaa"->string</AutoComplete.Option>
   </AutoComplete>

   <AutoComplete placeholder={j|请输入姓名|j} style=(ReactDOMRe.Style.make(~width="200px", ()))>
   <Input _type="search"/>
  </AutoComplete>
   </Form.Item>
   <Form.Item name="name" label={j|出生日期|j}  hasFeedback=true>
   <DatePicker/>
   </Form.Item>
   <Form.Item name="name" label={j|所在地|j}  hasFeedback=true>
   <Cascader placeholder="Please select" options={citys}/>
   </Form.Item>
   <Button htmlType="submit" >"click"->string</Button>
  </Form>
  </Card>
  </Col>
 
  </Row>
  <Row>
  <Col span=3>
  <Result title="hello" subTitle="hello2" status="success"/>
   </Col>
  <Col span=3>
   <Result title="hello" subTitle="hello2" status="error"/>
  </Col>
  <Col span=3>
  <Result status="404"
  title="404"
  subTitle="Sorry, the page you visited does not exist."
  extra={<div>"test"->string</div>}></Result></Col>
  </Row>
  </div>;
};
