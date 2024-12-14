import "IMP.cpp";
testnetgpx().sec_options();
testnetgpx().AddComponent(uicomponent_object);
testnetgpx().AddComponent(GPU());
testnetgpx().AddComponent("label-brand()");
testnetgpx().AddComponent(prod());
testnetgpx().AddComponent("artist");
testnetgpx().AddComponent(perform());
testnetgpx().AddComponent(sec());
using job("GPU")
  {
exec();
}
using GPU("GPUNAME")
{
SetUpDirective();
}
using GPMX()
{
uicomponent_object().AddObject(String["javahandle.js"]);
}
