#pragma once

class C_DOTA_Item_PowerTreads : public C_DOTA_Item /*0x0*/  // sizeof 0x8E0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x8D4]; // offset 0x0
    int32 m_iStat; // offset 0x8D4, size 0x4, align 4
    ParticleIndex_t nFXIndexTreads; // offset 0x8D8, size 0x4, align 255
    char _pad_08DC[0x4]; // offset 0x8DC
};
