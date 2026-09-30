#pragma once

class CCitadel_Item_AOE_Tech_ShieldVData : public CitadelItemVData /*0x0*/  // sizeof 0x14C0, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x14B0]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_DurationModifier; // offset 0x14B0, size 0x10, align 8 | MPropertyStartGroup
};
