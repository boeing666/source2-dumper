#pragma once

class CCitadel_Item_RescueBeamVData : public CitadelItemVData /*0x0*/  // sizeof 0x1530, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x14F8]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_DispelAndHealModifier; // offset 0x14F8, size 0x10, align 8 | MPropertyGroupName
    CEmbeddedSubclass< CCitadelModifier > m_PullModifier; // offset 0x1508, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_AfterChannelModifier; // offset 0x1518, size 0x10, align 8
    bool m_bHealCaster; // offset 0x1528, size 0x1, align 1 | MPropertyStartGroup
    bool m_bAllowPull; // offset 0x1529, size 0x1, align 1
    char _pad_152A[0x6]; // offset 0x152A
};
