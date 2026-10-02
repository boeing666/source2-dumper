#pragma once

class CCitadel_Upgrade_AmmoScavenger_VData : public CitadelItemVData /*0x0*/  // sizeof 0x1528, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x14F8]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // offset 0x14F8, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_StackSound; // offset 0x1508, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_AmmoSound; // offset 0x1518, size 0x10, align 8
};
