#pragma once

class CItem_FleetfootBoots_VData : public CitadelItemVData /*0x0*/  // sizeof 0x14D0, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x14B0]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_FleetfootBootsModifier; // offset 0x14B0, size 0x10, align 8 | MPropertyGroupName
    CEmbeddedSubclass< CCitadelModifier > m_FleetfootBootsBonusClipModifier; // offset 0x14C0, size 0x10, align 8
};
