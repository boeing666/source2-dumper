#pragma once

class CCitadel_Modifier_ChessMaster_CheckWatcherVData : public CCitadel_Modifier_Intrinsic_BaseVData /*0x0*/  // sizeof 0x7D0, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x790]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_StackModifier; // offset 0x790, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_ImmobilizeModifier; // offset 0x7A0, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_CooldownModifier; // offset 0x7B0, size 0x10, align 8
    CSoundEventName m_strSuccessProcSound; // offset 0x7C0, size 0x10, align 8 | MPropertyStartGroup
};
