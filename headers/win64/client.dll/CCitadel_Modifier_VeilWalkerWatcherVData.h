#pragma once

class CCitadel_Modifier_VeilWalkerWatcherVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x798, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x750]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_InvisModifier; // offset 0x750, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_VeilWalkerTriggeredModifier; // offset 0x760, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_VeilWalkerMovespeed; // offset 0x770, size 0x10, align 8
    CSoundEventName m_strOwnerExpiredSound; // offset 0x780, size 0x10, align 8 | MPropertyStartGroup
    float32 m_flTraceLengthMin; // offset 0x790, size 0x4, align 4 | MPropertyStartGroup
    char _pad_0794[0x4]; // offset 0x794
};
