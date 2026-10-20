#pragma once

class CCitadel_Upgrade_AmmoScavenger_VData : public CitadelItemVData /*0x0*/  // sizeof 0x11B0, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1180]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // offset 0x1180, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_StackSound; // offset 0x1190, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_AmmoSound; // offset 0x11A0, size 0x10, align 8
};
