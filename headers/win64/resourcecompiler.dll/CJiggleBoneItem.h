#pragma once

class CJiggleBoneItem  // sizeof 0x30, align 0x8 (animgraphdoclib) {MGetKV3ClassDefaults MPropertyFriendlyName MPropertyElementNameFn}
{
public:
    CUtlString m_boneName; // offset 0x0, size 0x8, align 8 | MPropertyFriendlyName MPropertyAttributeChoiceName
    float32 m_flSpringStrength; // offset 0x8, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flSimRateFPS; // offset 0xC, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flDamping; // offset 0x10, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeRange
    JiggleBoneSimSpace m_eSimSpace; // offset 0x14, size 0x4, align 4 | MPropertyFriendlyName
    Vector m_vBoundsMaxLS; // offset 0x18, size 0xC, align 4 | MPropertyFriendlyName MPropertyGroupName
    Vector m_vBoundsMinLS; // offset 0x24, size 0xC, align 4 | MPropertyFriendlyName MPropertyGroupName
};
