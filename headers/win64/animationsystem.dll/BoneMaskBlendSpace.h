#pragma once

enum BoneMaskBlendSpace : uint32_t  // sizeof 0x4
{
    BlendSpace_Parent = 0,
    BlendSpace_Model = 1,
    BlendSpace_Model_RotationOnly = 2,
    BlendSpace_Model_TranslationOnly = 3,
};
