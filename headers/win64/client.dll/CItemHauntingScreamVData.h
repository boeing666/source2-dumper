#pragma once

class CItemHauntingScreamVData : public CitadelItemVData /*0x0*/  // sizeof 0x11B0, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1190]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // offset 0x1190, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strHitConfirmSound; // offset 0x11A0, size 0x10, align 8 | MPropertyStartGroup
};
