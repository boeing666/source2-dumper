#pragma once

class C_DOTA_BaseNPC_Healer : public C_DOTA_BaseNPC_Building /*0x0*/  // sizeof 0x1BB8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1BB0]; // offset 0x0
    ParticleIndex_t m_iRangeFX; // offset 0x1BB0, size 0x4, align 255
    char _pad_1BB4[0x4]; // offset 0x1BB4
};
