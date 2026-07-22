#pragma once

class CDOTACrateDropPowerupDef : public CDOTACrateDropDroppableDef /*0x0*/  // sizeof 0xE8, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0xE0]; // offset 0x0
    EDOTACrateDropPowerupType m_ePowerupType; // offset 0xE0, size 0x4, align 4
    char _pad_00E4[0x4]; // offset 0xE4
};
