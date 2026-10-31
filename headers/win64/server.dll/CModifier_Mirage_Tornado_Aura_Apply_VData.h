#pragma once

class CModifier_Mirage_Tornado_Aura_Apply_VData : public CCitadelModifierVData /*0x0*/  // sizeof 0x7C8, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x798]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_LiftModifier; // offset 0x798, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_SlowModifier; // offset 0x7A8, size 0x10, align 8
    CSoundEventName m_strHitConfirmSound; // offset 0x7B8, size 0x10, align 8 | MPropertyStartGroup
};
