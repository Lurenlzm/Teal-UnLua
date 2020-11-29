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

using UnrealBuildTool;
using System.IO;

namespace UnrealBuildTool.Rules
{
    public class TealUnLuaIntelliSense : ModuleRules
    {
        public TealUnLuaIntelliSense(ReadOnlyTargetRules Target) : base(Target)
        {
            bEnforceIWYU = false;

            PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

            PublicIncludePaths.AddRange(
                new string[] {
                    "Programs/UnrealHeaderTool/Public",
                }
                );


            PrivateIncludePaths.AddRange(
                new string[] {
                    "TealUnLuaIntelliSense/Private",
                    "UnLua/Private",
                }
                );


            PrivateDependencyModuleNames.AddRange(
                new string[]
                {
                    "Core",
                    "CoreUObject",
                }
                );

            PublicDefinitions.Add("ENABLE_INTELLISENSE=1");

            PublicDefinitions.Add("HACK_HEADER_GENERATOR=1");
        }
    }
}
