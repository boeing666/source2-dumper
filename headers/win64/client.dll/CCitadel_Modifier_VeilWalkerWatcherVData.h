#pragma once

class CCitadel_Modifier_VeilWalkerWatcherVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x7D8, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x790]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_InvisModifier; // offset 0x790, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_VeilWalkerTriggeredModifier; // offset 0x7A0, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_VeilWalkerMovespeed; // offset 0x7B0, size 0x10, align 8
    CSoundEventName m_strOwnerExpiredSound; // offset 0x7C0, size 0x10, align 8 | MPropertyStartGroup
    float32 m_flTraceLengthMin; // offset 0x7D0, size 0x4, align 4 | MPropertyStartGroup
    char _pad_07D4[0x4]; // offset 0x7D4
};
