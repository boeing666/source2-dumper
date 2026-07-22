#pragma once

struct RnShapeDesc_t  // sizeof 0x18, align 0x8 (physicslib) {MGetKV3ClassDefaults}
{
    uint32 m_nCollisionAttributeIndex; // offset 0x0, size 0x4, align 4
    uint32 m_nSurfacePropertyIndex; // offset 0x4, size 0x4, align 4
    CUtlString m_UserFriendlyName; // offset 0x8, size 0x8, align 8
    bool m_bUserFriendlyNameSealed; // offset 0x10, size 0x1, align 1
    bool m_bUserFriendlyNameLong; // offset 0x11, size 0x1, align 1
    char _pad_0012[0x2]; // offset 0x12
    uint32 m_nToolMaterialHash; // offset 0x14, size 0x4, align 4
};
