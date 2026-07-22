#pragma once

class CCitadel_WeaponUpgrade_Headhunter_VData : public CCitadel_WeaponUpgrade_HeadshotBooster_VData /*0x0*/  // sizeof 0x8A0, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x890]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_HeadshotBuffModifier; // offset 0x890, size 0x10, align 8 | MPropertyGroupName
};
