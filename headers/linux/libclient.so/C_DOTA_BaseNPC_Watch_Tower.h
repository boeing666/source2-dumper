#pragma once

class C_DOTA_BaseNPC_Watch_Tower : public C_DOTA_BaseNPC_Building /*0x0*/  // sizeof 0x1BB8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1BA4]; // offset 0x0
    ParticleIndex_t m_iRangeFX; // offset 0x1BA4, size 0x4, align 255
    CUtlSymbolLarge m_szOutpostName; // offset 0x1BA8, size 0x8, align 8
    CUtlSymbolLarge m_szInteractAbilityName; // offset 0x1BB0, size 0x8, align 8
};
