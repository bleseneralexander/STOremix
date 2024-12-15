import "IMP.cpp";
testnetgpx().sec_options();
testnetgpx().AddComponent(uicomponent_object);
testnetgpx().AddComponent(GPU());
uicomponent_object.GPU;
testnetgpx().AddComponent("label-brand()");
uicomponent_object.("label-brand");
testnetgpx().AddComponent(prod());
uicomponent_object.prod;
testnetgpx().AddComponent("artist");
uicomponent_object.artist;
testnetgpx().AddComponent(perform());
uicomponent_object.perform;
testnetgpx().AddComponent(sec());
uicomponent_object.sec;
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
