#pragma once

enum BoneTransformSpace_t : uint32_t  // sizeof 0x4
{
    BoneTransformSpace_Invalid = -1,
    BoneTransformSpace_Parent = 0,
    BoneTransformSpace_Model = 1,
    BoneTransformSpace_World = 2,
};
