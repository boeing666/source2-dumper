#pragma once

enum IKTargetSource : uint32_t  // sizeof 0x4
{
    IKTARGETSOURCE_Bone = 0,
    IKTARGETSOURCE_AnimgraphParameter = 1,
    IKTARGETSOURCE_COUNT = 2,
};
