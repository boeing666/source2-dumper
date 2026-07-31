#pragma once

class C_DOTA_BaseNPC_Watch_Tower : public C_DOTA_BaseNPC_Building /*0x0*/  // sizeof 0x1A40, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1A28]; // offset 0x0
    ParticleIndex_t m_iRangeFX; // offset 0x1A28, size 0x4, align 255
    char _pad_1A2C[0x4]; // offset 0x1A2C
    CUtlSymbolLarge m_szOutpostName; // offset 0x1A30, size 0x8, align 8
    CUtlSymbolLarge m_szInteractAbilityName; // offset 0x1A38, size 0x8, align 8
};
