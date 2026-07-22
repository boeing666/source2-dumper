#pragma once

class CCitadel_Modifier_Doorman_Hotel_TeleportFX_VData : public CCitadelModifierVData /*0x0*/  // sizeof 0x790, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x750]; // offset 0x0
    CSoundEventName m_strKeyLoopSound; // offset 0x750, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strKeyLoopStartSound; // offset 0x760, size 0x10, align 8
    CSoundEventName m_strKeyLoopEndSound; // offset 0x770, size 0x10, align 8
    CSoundEventName m_HitSound; // offset 0x780, size 0x10, align 8
};
