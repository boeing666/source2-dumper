#pragma once

class CCitadel_Modifier_LuggageDragVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x788, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x750]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_SlowModifier; // offset 0x750, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_StompIgnoreLingerModifier; // offset 0x760, size 0x10, align 8
    float32 m_flForwardOffset; // offset 0x770, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flVerticalOffset; // offset 0x774, size 0x4, align 4
    float32 m_flDragDistance; // offset 0x778, size 0x4, align 4
    float32 m_flForceDistScale; // offset 0x77C, size 0x4, align 4
    float32 m_flWallStunLookAheadDist; // offset 0x780, size 0x4, align 4
    float32 m_flStompIgnoreLingerDuration; // offset 0x784, size 0x4, align 4
};
