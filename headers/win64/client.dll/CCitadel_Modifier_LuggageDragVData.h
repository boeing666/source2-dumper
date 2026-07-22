#pragma once

class CCitadel_Modifier_LuggageDragVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x778, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x750]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_SlowModifier; // offset 0x750, size 0x10, align 8 | MPropertyStartGroup
    float32 m_flForwardOffset; // offset 0x760, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flVerticalOffset; // offset 0x764, size 0x4, align 4
    float32 m_flDragDistance; // offset 0x768, size 0x4, align 4
    float32 m_flForceDistScale; // offset 0x76C, size 0x4, align 4
    float32 m_flWallStunLookAheadDist; // offset 0x770, size 0x4, align 4
    char _pad_0774[0x4]; // offset 0x774
};
