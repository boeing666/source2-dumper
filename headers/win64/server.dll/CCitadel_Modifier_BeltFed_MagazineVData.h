#pragma once

class CCitadel_Modifier_BeltFed_MagazineVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x7C8, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x798]; // offset 0x0
    CSoundEventName m_SpinUpSound; // offset 0x798, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_SpinDownSound; // offset 0x7A8, size 0x10, align 8
    CSoundEventName m_SpinLoopSound; // offset 0x7B8, size 0x10, align 8
};
