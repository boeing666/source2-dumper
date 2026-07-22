#pragma once

struct MaterialOverride_t : public BaseSceneObjectOverride_t /*0x0*/  // sizeof 0x28, align 0x8 (resourcecompiler) {MGetKV3ClassDefaults}
{
    char _pad_0000[0x4]; // offset 0x0
    uint32 m_nSubSceneObject; // offset 0x4, size 0x4, align 4
    uint32 m_nDrawCallIndex; // offset 0x8, size 0x4, align 4
    char _pad_000C[0x4]; // offset 0xC
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_pMaterial; // offset 0x10, size 0x8, align 8
    Vector m_vLinearTintColor; // offset 0x18, size 0xC, align 4
    char _pad_0024[0x4]; // offset 0x24
};
