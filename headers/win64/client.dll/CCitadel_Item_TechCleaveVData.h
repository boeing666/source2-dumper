#pragma once

class CCitadel_Item_TechCleaveVData : public CitadelItemVData /*0x0*/  // sizeof 0x18D8, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x18B8]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_TechCleaveModifier; // offset 0x18B8, size 0x10, align 8 | MPropertyGroupName
    CSoundEventName m_sCleaveProcSound; // offset 0x18C8, size 0x10, align 8 | MPropertyStartGroup
};
