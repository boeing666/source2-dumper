#pragma once

class CCitadel_Item_RescueBeamVData : public CitadelItemVData /*0x0*/  // sizeof 0x14E8, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x14B0]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_DispelAndHealModifier; // offset 0x14B0, size 0x10, align 8 | MPropertyGroupName
    CEmbeddedSubclass< CCitadelModifier > m_PullModifier; // offset 0x14C0, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_AfterChannelModifier; // offset 0x14D0, size 0x10, align 8
    bool m_bHealCaster; // offset 0x14E0, size 0x1, align 1 | MPropertyStartGroup
    bool m_bAllowPull; // offset 0x14E1, size 0x1, align 1
    char _pad_14E2[0x6]; // offset 0x14E2
};
