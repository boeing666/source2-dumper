#pragma once

class CCitadel_Item_RescueBeamVData : public CitadelItemVData /*0x0*/  // sizeof 0x11B8, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1180]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_DispelAndHealModifier; // offset 0x1180, size 0x10, align 8 | MPropertyGroupName
    CEmbeddedSubclass< CCitadelModifier > m_PullModifier; // offset 0x1190, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_AfterChannelModifier; // offset 0x11A0, size 0x10, align 8
    bool m_bHealCaster; // offset 0x11B0, size 0x1, align 1 | MPropertyStartGroup
    bool m_bAllowPull; // offset 0x11B1, size 0x1, align 1
    char _pad_11B2[0x6]; // offset 0x11B2
};
