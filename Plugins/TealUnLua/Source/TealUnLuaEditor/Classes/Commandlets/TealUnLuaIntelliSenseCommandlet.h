// Tencent is pleased to support the open source community by making UnLua available.
// 
// Copyright (C) 2019 THL A29 Limited, a Tencent company. All rights reserved.
//
// Licensed under the MIT License (the "License"); 
// you may not use this file except in compliance with the License. You may obtain a copy of the License at
//
// http://opensource.org/licenses/MIT
//
// Unless required by applicable law or agreed to in writing, 
// software distributed under the License is distributed on an "AS IS" BASIS, 
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. 
// See the License for the specific language governing permissions and limitations under the License.

#include "Commandlets/Commandlet.h"
#include "TealUnLuaIntelliSenseCommandlet.generated.h"

UCLASS()
class UTealUnLuaIntelliSenseCommandlet : public UCommandlet
{
    GENERATED_UCLASS_BODY()

public:
    virtual int32 Main(const FString& Params) override;

private:
    void SaveFile(const FString &ModuleName, const FString &FileName, const FString &GeneratedFileContent);

    class FLuaContext *Context;
    FString IntermediateDir;
};