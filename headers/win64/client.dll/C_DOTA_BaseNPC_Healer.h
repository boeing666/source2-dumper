#pragma once

class C_DOTA_BaseNPC_Healer : public C_DOTA_BaseNPC_Building /*0x0*/  // sizeof 0x1A28, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1A20]; // offset 0x0
    ParticleIndex_t m_iRangeFX; // offset 0x1A20, size 0x4, align 255
    char _pad_1A24[0x4]; // offset 0x1A24
};
