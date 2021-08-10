
set VS2019=D:\software\vs\vs2019\VC\Auxiliary\Build

call "%VS2019%"\vcvarsall.bat amd64

mkdir vs2019.win64

pushd vs2019.win64
cmake .. -G"Visual Studio 16"

set VS_BUILD_TYPE=Debug

msbuild DESIGN_PATTERN.sln /maxcpucount:8 /P:Configuration=%VS_BUILD_TYPE%

start DESIGN_PATTERN.sln

cd ..