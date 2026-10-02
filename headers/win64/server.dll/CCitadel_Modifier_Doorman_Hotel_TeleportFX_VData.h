#pragma once

class CCitadel_Modifier_Doorman_Hotel_TeleportFX_VData : public CCitadelModifierVData /*0x0*/  // sizeof 0x7D0, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x790]; // offset 0x0
    CSoundEventName m_strKeyLoopSound; // offset 0x790, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strKeyLoopStartSound; // offset 0x7A0, size 0x10, align 8
    CSoundEventName m_strKeyLoopEndSound; // offset 0x7B0, size 0x10, align 8
    CSoundEventName m_HitSound; // offset 0x7C0, size 0x10, align 8
};
